#include <unistd.h> 

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(const char *str)
{
    while (*str != '\0')
    {
        ft_putchar(*str);
        str++;
    }
}

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putstr("-2147483648");
        return ;
    }

    if (nb < 0)
    {
        ft_putchar('-');
        nb = nb * -1;
    }

    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        nb = nb % 10;
    }

    if (nb < 10)
    {
        ft_putchar(nb + '0');
    }
}

void ft_print_numbers(int first, int second)
{
    if (first < 10)
        ft_putchar('0');
    ft_putnbr(first);
    ft_putchar(' ');
    if (second < 10)
        ft_putchar('0');
    ft_putnbr(second);
}

void ft_print_comb2()
{
    int first;
    int second;

    first = 0;
    second = 1;
    while (first < 98)
    {   
        while (second <= 99)
        {
            ft_print_numbers(first, second);
            ft_putchar(',');
            second++;
        }
        first++;
        second = first + 1;
        if (first + second != 98 + 99)
        {
            ft_putchar(',');
        }
    }
}


int main()
{
    ft_print_comb2();
}