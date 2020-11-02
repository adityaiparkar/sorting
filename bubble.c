#include<stdio.h>

void bubble(int a[] , int);

int main()
{
	int a[100];
	int i,n;
	printf("Enter how many elements you want : ");
	scanf("%d",&n);

	printf("Enter the elements : \n");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&a[i]);
	}

	bubble(a,n);
	
	printf("\n After sorting : \n");
	
	for(i=0 ; i<n ; i++)
		printf("\n %d \n",a[i]);
}

void swap(int *x , int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
	
}

void bubble(int a[], int n)
{
	int i,j,flag = 0;

	for(i=0 ; i<n-1 ; i++)
	{
		flag = 0;			
		
		for(j=0 ; j<n-i-1 ; j++)
		{
			if(a[j] > a[j+1])
			swap(&a[j] , &a[j+1]);
			flag = 1;
		}

		if(flag==0)
			break;	
	}

}
