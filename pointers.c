#include <stdio.h>

void main(){
		int var =10;
		int *ptr;

		printf("Value of var = %d\n",var);
		printf("Address of var = %d\n",&var);

		ptr = &var;
		printf("Address of ptr = %d\n",&ptr);
		printf("Value of ptr = %d\n",ptr);
		printf("Value of var using ptr = %d\n",*ptr);

		*ptr = 20;
		printf("Value changed from the address\n");
		printf("New value of var = %d\n",var);
		printf("New value of var using ptr = %d\n",*ptr);
}