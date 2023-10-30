#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

int main(int argc, char *argv[])
{
    int from_fd;
    int to_fd;
    char buffer[BUF_SIZE];
    ssize_t bytes_read, bytes_written;

    if (argc != 3) {
        dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
        return 97;
    }

    from_fd = open(argv[1], O_RDONLY);
    if (from_fd == -1) {
        dprintf(2, "Error: Can't read from file %s\n", argv[1]);
        return 98;
    }

    to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (to_fd == -1) {
        dprintf(2, "Error: Can't write to file %s\n", argv[2]);
        close(from_fd);
        return 99;
    }

    while ((bytes_read = read(from_fd, buffer, BUF_SIZE)) > 0) {
        bytes_written = write(to_fd, buffer, bytes_read);
        if (bytes_written == -1 || bytes_read != bytes_written) {
            dprintf(2, "Error: Can't write to file %s\n", argv[2]);
            close(from_fd);
            close(to_fd);
            return 99;
        }
    }

    if (bytes_read == -1) {
        dprintf(2, "Error: Can't read from file %s\n", argv[1]);
        close(from_fd);
        close(to_fd);
        return 98;
    }

    if (close(from_fd) == -1 || close(to_fd) == -1) {
        dprintf(2, "Error: Can't close fd\n");
        return 100;
    }

    return 0;
}
