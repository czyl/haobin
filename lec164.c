//Name: lec164.c
//Purpose: student information management system in the sort of scores.

#include <stdio.h>
#include <malloc.h>

struct Student
{
	int age;
	char name[100];
	float score;
};

void Input_info(struct Student * ,int);
void sort(struct Student *, int);
void Output_info(struct Student *, int);

int main(void)
{
	int len;
	struct Student * pArr;

	printf("Enter the number of students:\n");
	printf("number=");
	scanf("%d",&len);

	pArr=(struct Student *)malloc(len*sizeof(struct Student));
	Input_info(pArr, len);
	sort(pArr, len);
	Output_info(pArr, len);
	return 0;
}

void Input_info(struct Student * IpArr,int Ilen)
{
	int i;
	for (i=0;i<Ilen;i++)
	{
		printf("Enter the information of student %d:\n",i+1);
		printf("Age= ");
		scanf("%d",&IpArr[i].age);
		
		printf("Name= ");
		scanf("%s",IpArr[i].name);

		printf("score= ");
		scanf("%f",&IpArr[i].score);

	}
}

void sort(struct Student * spArr, int slen)
{
	int i, j;
	struct Student t;
	for (i=0;i<slen-1;i++)
	{
		for (j=0;j<slen-1;j++)
			if (spArr[j].score > spArr[j+1].score)
			{
				t=spArr[j];
				spArr[j]=spArr[j+1];
				spArr[j+1]=t;
			}
	}
}

void Output_info(struct Student * OpArr, int Olen)
{
	int i;
	for (i=0;i<Olen;i++)
	{
		printf("\n\n");
		printf("The information of student of num %d",Olen);
		printf("age=%d\n",OpArr[i].age);
		printf("name=%s\n",OpArr[i].name);
		printf("score=%f\n",OpArr[i].score);
		printf("\n");
	}
}


