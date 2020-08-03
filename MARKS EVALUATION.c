#include<stdio.h>
main()
{
	char name[40];
	printf("Enter the name: \n");
	scanf("%s", &name);
int marks;
	printf("Enter Your Marks:");
	scanf("%d", &marks);
if(marks>=85 && marks<100)	
{
	printf("Grade A");
}
else if(marks>=70 && marks<84)
{
	printf("Grade B");
}
else if(marks>=55 && marks<69)
{
	printf("Grade C");
}
else if(marks>=40 && marks<54)
{
	printf("Grade D");
}
else
{
	printf("Grade F");
}
	return 0;
} 
