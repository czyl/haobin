//Name: lec163.c
//Purpose: sort

#include <stdio.h>

void sort(int *, int len);

int main(void)
{
	int a[6]={10,2,8,-8,11,0};
	int i=0;
	sort(a,6);
	for (i=0;i<6;i++)
		printf("%d ",a[i]);

	return 0;
}

void sort(int * a, int len)
{
	int i, j, t;
	for (i=0;i<len-1;i++)
	{
		for (j=0;j<len-1-i;j++)
			if (a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
	}
}
