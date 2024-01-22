void push(struct Stack*stack,int value){ 
	if(stack->top==MAX_SIZE-1){
	printf("Stack overflow\n");
	return;
	}
	stack->arr[++stack->top]=value;
	printf("%d pushed to stack\n",value);
}
