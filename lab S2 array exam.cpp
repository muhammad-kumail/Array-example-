/* Muhammad Kumail
SP19-BCS-134 A
*/
#include<stdio.h>
#include<conio.h>
void sid(int Sid[],int);
void sQid(int SQid[],int);
void disArray(int a[],int);
void scount(int Sid[],int,int SQid[],int);
main()
{
	int nS,nQ;
	printf("Enter Number of Students: ");
	scanf("%d",&nS);
	printf("Enter Number of Quizzes: ");
	scanf("%d",&nQ);
	printf("\n");
	int Sid[nS],SQid[nQ];
	//function gets inputs of students id
	sid(Sid,nS);
	//function gets inputs of students id, who topped in Quiz
	sQid(SQid,nQ);
	printf("Student ids: ");
	//function print students ids
	disArray(Sid,nS);
	printf("Top Students ids: ");
	//function print quiz topped students ids
	disArray(SQid,nQ);
	printf("Top Student count: ");
	//function print top student count
	scount(Sid,nS,SQid,nQ);
	getch();
}
void sid(int Sid[],int nS)
{
	int a;
	for(a=0;a<nS;a++)
	{
		printf("Enter student[%d] id: ",a);
		scanf("%d",&Sid[a]);
	}
	printf("\n");
}
void sQid(int SQid[],int nQ)
{
	int a;
	for(a=0;a<nQ;a++)
	{
		printf("Enter student id,who topped in quiz %d: ",a);
		scanf("%d",&SQid[a]);
	}
	printf("\n");
}
void disArray(int a[],int s)
{
	int i;
	printf("[");
	for(i=0;i<s;i++)
	{
	printf("%d ",a[i]);
	}
	printf("]\n");
}
void scount(int Sid[],int n1,int SQid[],int n2)
{
	int a,b,c=0;
	printf("[");
	for(a=0;a<n1;a++)
	{
		for(b=0;b<n2;b++)
		{
			if(Sid[a]==SQid[b])
			c++;
		}
		printf("%d ",c);
		c=0;
	}
	printf("]\n");
}
