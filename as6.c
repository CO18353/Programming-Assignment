#include<stdio.h>
int roman(int n,int m,char c)
{
	int a;
	a=n/m;
	for(int i=1;i<=a;i++)
	{
		printf("%c",c);
	}
	n=n%m;
	return n;
}
void integer(char r[20])
{
	int s=0;
	for(int i=0;r[i]!=0;i++)
	{
		if(r[i]=='m')
		s+=1000;
		else if(r[i]=='d')
		s+=500;
		else if(r[i]=='c')
		s+=100;
		else if(r[i]=='l')
		s+=50;
		else if(r[i]=='x')
		s+=10;
		else if(r[i]=='v')
		s+=5;
		else if(r[i]=='i')
		s+=1;
	}
	printf("\n%d",s);
}
void main()
{
	int n,o;
	char r[20];
	printf("Enter 1.To convert integer to roman\n2.To convert roman to integer");
	scanf("%d",&o);
	switch(o)
	{
		case 1:	printf("Enter the integer\n");
			scanf("%d",&n);
			{
			n=roman(n,1000,'M');
			n=roman(n,500,'D');
			n=roman(n,100,'C');
			n=roman(n,50,'L');
			n=roman(n,10,'X');
			n=roman(n,5,'V');
			n=roman(n,1,'I');
			}

			break;
		case 2: printf("Enter the roman numeral\n");
			fflush(stdin);
			scanf("%s",r);
			integer(r);break;
		default:printf("Invalid option");
	}
}
