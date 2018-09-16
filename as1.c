#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter first number\n ");
	scanf("%d",&a);
	printf("Enter second number\n ");
	scanf("%d",&b);
	printf("Enter third number\n ");
	scanf("%d",&c);
	if(a!=b && b!=c && c!=a)
	printf("\n1");
	else
	printf("\n0");
}
