
typedef struct stack
{
    int data;
    struct stack *next;
} st;
st *push(st *top)