#include<stdio.h>

void insertion(int a[] , int);

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

	insertion(a,n);
	
	printf("\n After sorting : \n");
	
	for(i=0 ; i<n ; i++)
		printf("\n %d \n",a[i]);
}

void insertion(int a[] , int n)
{

	int x,i,j;

	for(i = 1 ; i < n ; i++)
	{
		j = i-1;
		x = a[i];

		while(j > -1 && a[j] > x)
		{
			a[j+1] = a[j];
			j--;
		}
		
		a[j+1] = x;
	}

}
