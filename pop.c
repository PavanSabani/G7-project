
int pop(struct Stack*stack){
if(stack->top==-1){
printf("Stack underflow\n");
return -1;
}
return stack->arr[stack->top--];
}
