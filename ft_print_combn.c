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

void ft_print_numbers(int a[], int n)
{
    int index;

    index = 0;
    while (index < n)
    {
        ft_putnbr(a[index]);
        index++;
    }
}

void ft_print_combn(int n)
{
    int a[n];
    int index;
    int max;
    int last;
    int current;


    index = 0;
    max = 8;
    last = 0;
    while(index < n)
    {
        a[index] = index;
        index++;
    }
    index = n - 1;
    while (a[0] <= 9 - n)
    {
        index = n - 1;
        last = a[0];
        current = index - 1;
        max = 9;
        while (a[0] == last)
        {
            while(a[index] < 9)
            {
                a[index]++;
                ft_print_numbers(a, n);
                ft_putchar(',');
            }
            if (current >= 0)
            {
                if (a[current] < max)
                {
                    a[current]++;
                    a[current + 1] = a[current];
                }
                else
                {
                    current--;
                    max--;
                }
                if (a[current] == max && a[index] >= max)
                {
                    index--;
                }
            }
        }
    }
}   


int main()
{
    ft_print_combn(3);
}