#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_numbers(void)
{
    short current_char = '0';

    while (current_char <= '9')
    {
        ft_putchar(current_char);
        current_char++;
    }
}

