#include<stdio.h>
int  find_even(int);
void main()
{
	int k;
	printf("Enter k\n");
	scanf("%d",&k);
	find_even(k);
}
int find_even(int k)
{
	int n[20],c=0,a;
	printf("\nEnter the series\n");
	for(int i=1;;i++)
	{
		scanf("%d",&n[i]);
		if(n[i]%2==0)
		{c++;
		a=i;}
		if(n[i]==-1)
		break;
	}
	if(c==k)
	printf("%d",n[a]);
	else
	printf("-1");
}
