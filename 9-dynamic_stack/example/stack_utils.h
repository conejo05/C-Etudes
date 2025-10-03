// create some struct to hold data and number of items

#ifndef STACK_UTILS_H_
#define STACK_UTILS_H_


typedef struct {
    void **data;
    int num_items;
}stacks_t;

void push(void *val, mystack_t *stack);
void *pop(mystack_t *stack);
void print_stack(mystack_t *stack, void (*print_fn)(void *));
char *read_string();
void trim(char *);