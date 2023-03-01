#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter first number:");
	scanf("%d",&a);
	
	printf("enter second number:");
	scanf("%d",&b);
	
	printf("Before interchange a=%d,b=%d\n",a,b);
	
	
     c=a;
     a=b;
     b=c;
     
     printf("Altered numbers are a=%d,b=%d",a,b);
	return 0;	
}
