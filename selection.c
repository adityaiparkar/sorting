#include <stdio.h>

void selection(int a[], int );


int main()
{
	int i,n,a[100];

	printf("Enter how many numbers you want : ");
	scanf("%d",&n);

	printf("Enter the numbers : \n");
	for(i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}

	selection(a,n);

	printf("After sorting elements are : \n");
	for(i = 0; i < n; i++)
	{
		printf("%d \n",a[i]);
	}
	

return 0;

}

void swap(int *x, int *y)
{
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
}

void selection(int a[], int n)
{
	int i,j,k;

	for(i = 0; i < n; i++)
	{
		for(j = k = i; j < n; j++)
		{
			if(a[j] < a[k])
				k = j;
		}
		swap(&a[i] , &a[k]);
	}
	
}
