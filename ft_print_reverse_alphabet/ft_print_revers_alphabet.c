#include <unistd.h>

// many version for the same result

void    print_reverse_alphabet(void)
{
    char    c;

    c = 122;
    while(c > 96)
    {   write(1, &c, 1);
        c--;
    }
}

void    print_reverse_alphabet1(void)
{
    char    c;

    c = 122;
    while(c > 96)
    {   write(1, &c, 1);
        --c;
    }
}

void    print_reverse_alphabet2(void)
{
    char    c;

    c = 123;
    while(c-- >= 98)
        write(1, &c, 1);
}

void    print_reverse_alphabet3(void)
{
    char    c;

    c = 122;
    while(--c > 96)
        write(1, &c, 1);
}

int main(void)
{
    write(1, "v0 is: ", 7), print_reverse_alphabet();
    write(1, "\n", 1);

    write(1, "v1 is: ", 7), print_reverse_alphabet1();
    write(1, "\n", 1);

    write(1, "v2 is: ", 7), print_reverse_alphabet2();
    write(1, "\n", 1);

    write(1, "v3 is: ", 7), print_reverse_alphabet2();
    write(1, "\n", 1);

    return(0);
}