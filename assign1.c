#include <stdio.h>
void indices(int a[], int);

int m[100];

void main()
{
	int a[100], n, i; 

	printf("Enter how many elements you want : ");
	scanf("%d",&n);

	printf("Enter the elements : \n");
	for(i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
		m[i] = i;	
	}

	indices(a,n);

	printf("Indices are : \n");
	for(i = 0; i < n; i++)
		printf("\n %d \n",m[i]);

}

void indices(int a[], int n)
{
	int k, i, j, temp;

	for(i = 0;i < n-1;i++)
	{
		k = 0;
		for(j = 0;j < n-i-1;j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				k++;
				temp = m[j];
				m[j] = m[j+1];
				m[j+1] = temp;
			}			
		}

		if(k==0)
		{
			break;
		}
	}

}
