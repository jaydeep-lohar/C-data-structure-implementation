#include<stdio.h>
void main()
{
	int marks[5],i;
	for(i=0;i<5;i++)
	{
		printf("Enter the %d no:-",i);
		scanf("%d",&marks[i])
	}
	printf("The array traverse for last to first is as:-\n");
	for(i=4;i>=0;i--)
		printf("%d ,",marks[i]);
		while(i==0)
		{			
			break();
		}
}
