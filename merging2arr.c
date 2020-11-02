#include <stdio.h>

void merge(int a[], int b[], int c[], int, int);

int main()
{
	int a[100], b[100], c[100],i,m,n;

	printf("\n Enter how many elements you want for 1st array : ");
	scanf("%d",&m);
	for(i = 0; i < m; i++)
		scanf("%d",&a[i]);

	
	printf("\n Enter how many elements you want for 2nd array : ");
	scanf("%d",&n);
	for(i = 0; i < n; i++)
		scanf("%d",&b[i]);


	merge(a,b,c,m,n);
	printf("\n Merged Elements are : \n");
	for(i = 0; i < c[i]; i++)
		printf("\n %d \n",c[i]);	


return 0;
}

void merge(int a[], int b[], int c[], int m, int n)
{
	int i,j,k;
	i = j = k = 0;	
	
	
	while(i < m && j < n)
	{	
		if(a[i] < b[j])
			c[k++] = a[i++];

		else
			c[k++] = b[j++];
	}

		for(; i < m; i++)
			c[k++] = a[i];

		for(; j < n; j++)
			c[k++] = b[j];

}
