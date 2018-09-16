#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the three sides");
	scanf("%d%d%d",&a,&b,&c);
	if((a+b)>c && (b+c)>a && (a+c)>b)
	printf("1");
	else
	printf("0");
}
