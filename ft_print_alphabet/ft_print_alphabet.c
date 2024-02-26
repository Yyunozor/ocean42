#include <unistd.h>

void    ft_print_alphabet(void)
{
    char   c;

    c = 97;
    while(c < 123)
    {
        write(1, &c, 1);
        c++;
}
}

void    ft_print_alphabet1(void)
{
    char    c;

    c = 96;
    while(c++ < 122)
        write(1, &c, 1);
}

//Chars are just 1 byte int
//Totally equal functions
void    ft_print_alphabet2(void)
{
    short   c;

    c = '`';
    while(++c <= 'z')
        write(1, &c, 1);
}

int main(void)
{
    write(1, "0 is: ", 6), ft_print_alphabet(); 
    write(1, "\n", 1);

    write(1, "1 is: ", 6), ft_print_alphabet1();
    write(1, "\n", 1);

    write(1, "2 is: ", 6), ft_print_alphabet2();
    write(1, "\n", 1); 
}