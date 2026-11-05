#include "push_swap.h"

void    int_stack(int n, int *elements, t_stack stack)
{
    if (n > 0)
    {
        stack.cap = n;
        stack.size = n;
        stack.top = n - 1;
        stack.data = malloc(sizeof(int) * n);
    }
}