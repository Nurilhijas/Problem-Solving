#include<stdio.h>
struct std
{
	char name[50];
	int rollno;
	int marks;
	
}stud[100],t;
void main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %s %d",&stud[i].rollno,&stud[i].name,&stud[i].marks);
		
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(stud[j].marks<stud[j+1].marks)
			{
				t=stud[j];
				stud[j]=stud[j+1];
				stud[j+1]=t;
			}
		}
	}
	printf("The Merit List is :\n");
	for(i=0;i<n;i++)
	{
		printf("%d %s %d\n",stud[i].rollno,stud[i].name,stud[i].marks);
	}
}

