#include <unistd.h>
#include <stdio.h>

// three versions for the same result

void    ft_print_numbers(void)
{
    int i;

    i = 47;

    while (i++ < '9')
        write(1, &i, 1);
}

void    ft_print_numbers1(void)
{
    char i;

    i = 48;

    while (i <= 57)
    {
        write(1, &i, 1);
        i++;
    }
}

void    ft_print_numbers2(void)
{
    short i = '/';

    while (++i < ':')
        write(1, &i, 1);
}

int main(void)
{
    write(1, "v0 ", 3), ft_print_numbers();
    write(1, "\n", 1);

    write(1, "v1 ", 3), ft_print_numbers1();
    write(1, "\n", 1);

    write(1, "v2 ", 3), ft_print_numbers2();
    write(1, "\n", 1);

    return(0);
}