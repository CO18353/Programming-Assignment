#include<stdio.h>
void main()
{
	int i;
	char a[15],b[4],c[4],d[4],e[4];
	printf("Enter the ipv4 address");
	scanf("%s",a);
	for(int i=0;a[i]!='.';i++)
	{
		a[i]=b[i];
	}
	b[i]='\0';
	if(b>0 && b<255)
	printf("Valid");
	else
	printf("Invalid");
}
