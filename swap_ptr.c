#include<stdio.h>

void swap(int *a, int *b)
{
		int t;
		t = *a;
		*a = *b;
		*b = t;
}

void main()
{
		int x, y;
		printf("Enter two numbers: ");
		scanf("%d %d", &x, &y);
		printf("Before swapping , 1st No :%d \t 2nd No : %d\n", x, y);
		swap(&x, &y);
		printf("After swapping , 1st No :%d \t 2nd No : %d\n", x, y);
}