#include "main.h"
/**
* read_textfile - a function that reads a text file
*and prints it to the POSIX standard output
* @filename: the file name
* @letters: the number of letters
* Return: the actual number of letters or 0 if fails
**/

int create_file(const char *filename, char *text_content)
{
        int fd, w, len = 0;
        if (filename == NULL)
                return (-1);
        if (text_content != NULL)
        {
                for (len = 0; text_content[len];)
                    len++;
}
        fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
        w = write(fd, text_content, len);
        if (fd == -1 || w == -1)
                return (-1);
        close(fd);
        return (1);
}


