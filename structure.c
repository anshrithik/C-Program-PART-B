#include <stdio.h>
#include <string.h>

struct student	{
	char name[30];
	int roll;
	float percentage;
};

void main()
{
	struct student s[20];
	int i,n;
	printf("Enter no of students : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)	{
		printf("Enter name,roll and percentage of student %d:",i+1);
		scanf("%s%d%f",&s[i].name,&s[i].roll,&s[i].percentage);
	}
	printf("\n Student Details : \n",n);
	printf("*******************\n");
	printf("\n Name\t\tRoll\t\tPrecentage\n");
	for(i=0;i<n;i++)
	printf("%s\t\t%d\t\t%2.2f\n",s[i].name,s[i].roll,s[i].percentage);
}