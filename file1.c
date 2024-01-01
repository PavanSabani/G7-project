#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10
struct Stack{
	int arr[MAX_SIZE];
	int top;
};
void initialize(struct Stack *stack){
	stack->=-1;
}
int pop(struct Stack*stack){
	if (stack->top==-1){
		printf("Stack underflow\n");
		return -1;
	}
	return stack->arr[stack->top--];
}
int main(){
struct Stack stack;
push(&stack,2);
push(&stack,6);
display(&stack);
printf("Popped element from stack %d",pop(&stack));
display(&stack);
return 0;
}
