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

void push(struct Stack*stack,int value){
if(Stack->top==MAX_SIZE-1){
printf("stack overflow");
return;
}
stack->arr[++stack->top]=value;
printf("%d pushed to stack");
}
