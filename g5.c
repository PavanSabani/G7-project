void display(struct Stack*stack){
if(stack->top==-1){
printf("Stack is empty\n"):
return;
}
printf("Stack elements:");
for(int i=0;i<=stack->top;++i){
printf("%d",stack->arr[i]);
}
printf("\n");
}
