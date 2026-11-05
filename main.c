#include "push_swap.h"

#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;
	int i;
	int size;
	int	cap = 5;

	stack_a.data = malloc(sizeof(int) * cap);
	stack_a.cap = 5;
	stack_a.size = 5;
	stack_a.top = 0;
	
	stack_b.data = NULL;
	stack_b.cap = cap;
	stack_b.size = 0;
	stack_b.top = 0;

	// stack_b.data[stack_b.size] = stack_a.data[stack_a.top];

	// element at position i (0 = top)  →  data[(top + i) % cap]
	// bottom element                   →  data[(top + size - 1) % cap]

	printf("From the top:\n");
	i = 0;
	while (i < stack_a.size)
	{
		printf("%d\n", stack_a.data[(stack_a.top + i) % stack_a.cap]);
		i++;
	}
	
	printf("From the bottom:\n");
	i = 0;
	
	size = stack_a.size;
	while (i < size)
	{
		printf("%d\n", stack_a.data[(stack_a.top + stack_a.size - 1) % stack_a.cap]);
		stack_a.size--;
		i++;
	}

		// printf("%d\n", stack_a.data[i++]);
	
	// printf("testing loop\n");
	// stack_a.top = 1;
	// printf("%d\n", stack_a.data[(stack_a.top + 1) % stack_a.cap]);
	// stack_a.top = 2;
	// printf("%d\n", stack_a.data[(stack_a.top + 1) % stack_a.cap]);
	// stack_a.top = 3;
	// printf("%d\n", stack_a.data[(stack_a.top + 1) % stack_a.cap]);
	// stack_a.top = 4;
	// printf("%d\n", stack_a.data[(stack_a.top + 1) % stack_a.cap]);
	// stack_a.top = 5;
	// printf("%d\n", stack_a.data[(stack_a.top + 1) % stack_a.cap]);

	// data[(top + 1) % cap]
}
