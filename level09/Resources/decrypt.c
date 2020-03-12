#include <stdio.h>
#include <fcntl.h>

int main(int argc, char **argv)
{
        int i;
        int fd;
        char buff[2000];

        i = -1;
        fd = open(argv[1], O_RDONLY);
        while ((i = read(fd, buff, 2000)) > 0)
                break;
        printf("%d\n", i);
        buff[i] = '\0';
        i = -1;
        while(++i < 25)
        {
                printf("%c", buff[i] - i);
        }
        printf("\n");
        return (0);
}
