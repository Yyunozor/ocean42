#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    int fd = open("file.txt", O_RDWR | O_CREAT, 0600);

    //Understand fd concept
    write(3, "hello", 5);

    sleep(40);
    // printf("%d\n", fd);
}