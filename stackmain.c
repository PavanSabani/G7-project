#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 10

struct Stack{
int arr[MAX_SIZE];
int top;
};

void initialize(struct Stack*stack){
stack->top=-1;
}
int main(){
struct Stack stack;
intitialize(&stack);

push(&stack,1);
push(&stack,2);
push(&stack,3);

display(&stack);

printf("popped element%d\n",pop(&stack));

display(&stack);

return 0;
}
