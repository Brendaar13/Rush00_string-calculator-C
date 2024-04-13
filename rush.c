#include <unistd.h>

void    ft_putchar(char c);

void    rush(int x, int y)
{
        int     cx;
        int     cy;

        cy = 1;
        if (x >= 1 && y >= 1)
        {
                while (cy <= y)
                {
                        cx = 1;
                        while (cx <= x)
                        {
                                if ((cx == 1 && cy == 1) || (cx == 1 && cy == y))
                                        ft_putchar('A');
                                else if ((cy == 1 && cx == x) || (cy == y && cx == x))
                                        ft_putchar('C');
                                else if ((cy > 1 && cy < y) && (cx > 1 && cx < x))
                                        ft_putchar(' ');
                                else
                                        ft_putchar('B');
                                cx++;
                        }
                        cy++;
                        ft_putchar('\n');
                }
        }
}
