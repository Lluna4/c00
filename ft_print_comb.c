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

void ft_print_numbers(int first, int second, int third)
{
    ft_putnbr(first);
    ft_putnbr(second);
    ft_putnbr(third);
}

void ft_print_comb()
{
    int first;
    int second;
    int third;

    first = 0;
    second = 1;
    third = 2;
    while (first < 7)
    {
        while (second < 8)
        {
            while (third <= 9)
            {
                ft_print_numbers(first, second, third);
                ft_putchar(',');
                third++;
            }
            second++;
            third = second + 1;
        }
        first++;
        second = first + 1;
        ft_print_numbers(first, second, third);
        if (first + second + third != 7 + 8 + 9)
        {
            ft_putchar(',');
        }
    }
}

/*
int main()
{
    ft_print_comb();
}*/