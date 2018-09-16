#include<stdio.h>
void main()
{
	int n,m;
	printf("Enter the number whoose multiple is to be checked\n");
	scanf("%d",&n);
	printf("\nEnter the  multiple to be checked\n");
	scanf("%d",&m);
	if(n%m==0)
	printf("%f",(double)m/n);
	else
	printf("0");

}
