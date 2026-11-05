#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// read()
# include <unistd.h>
// free() & malloc()
# include <stdlib.h>

typedef struct s_stack {
    int  *data;   // malloc(n * sizeof(int)), for BOTH stacks
    int   cap;    // n, the total number of elements
    int   top;    // array index of the top element
    int   size;   // how many elements are in this stack right now
}   t_stack;

#endif
