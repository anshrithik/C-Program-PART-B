#include<stdio.h>

int isprime(int x)	{
	
	int i,c=0;
	
	for(i=1;i<=x;i++)	{
		if(x%i==0)	{
			c++;
		}
	}
	
	if(c==2)	{
		printf("%d is Prime",x);
	}else	{
		printf("%d is Not Prime",x);
	}
	
}

void main()	{
	
	int n;
	
	printf("Enter a Number : ");
	scanf("%d",&n);
	isprime(n);
	
}