#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
    short current_char = 'z';

    while (current_char >= 'a')
    {
        ft_putchar(current_char);
        current_char--;
    }
}