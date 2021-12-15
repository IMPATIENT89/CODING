#include<stdio.h>
void main()
{
	int a,b,c;
	char op;
	printf("ENTER THE OPERANDS AND OPERATOR=");
	scanf("%d%c%d",&a,&op,&b);
	switch(op)
	{
		case '+':
			c=a+b;
			printf("%d",c);
			break;
			
			case '-':
				c=a-b;
				printf("%d",c);
				break;
				
				case '*':
					c=a*b;
					
					printf("%d",c);
					break;

					case '/':
					c = a/b;
					printf("%d",c);
					
	}
}
