#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10
struct Stack{
	int arr[MAX_SIZE];
	int top;
};
void initialize(struct Stack *stack){
	stack->top=-1;
}
void display(struct Stack *stack){
	if(stack->top==-1){
		printf("Stack is empty\n");
		return;
	}
	printf("Stack elements:");
	for(int i=0; i<=stack->top; ++i){
		printf("%d", stack->arr[i]);
	}
	printf("\n");
}
