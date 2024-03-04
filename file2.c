#include<stdio.h>
int main(){
int a;
int b;
char op;
printf("Enter the expression");
scanf("%d%c%d",&a,&op,&b);
switch(op){
	case '+':
		printf("Addition:",a+b);
		break;
	case '-':
		printf("Subtraction:",a-b);
		break;
	case '*':
		printf("Multiplication:",a*b);
		break;
	default :
		printf("Invalid operator");
}
return 0;
}
