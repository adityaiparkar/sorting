#include <stdio.h>

void merge(int a[], int, int, int);
//void mergesort(int a[], int, int);
void iterativemerge(int a[], int);

int main()
{
	int a[] = {20, 10, 50, 25, 34, 5, 100}, n = 7, i;

	//mergesort(a,0,n);
	iterativemerge(a,n);

	printf("\n after sorting elements are : \n ");
	for(i = 0; i < 7; i++)
		printf("\n %d \n",a[i]);

return 0;
}

void iterativemerge(int a[], int n)
{
	int p,l,h,mid,i;
	for(p=2;p<=n;p=p*2)
	{
		for(i=0;i+p-1<=n;i=i+p)
		{
			l=i;
			h=i+p-1;
			mid=(l+h)/2;
			merge(a,l,mid,h);
		}
	}
	if(p/2<n)
		merge(a,0,p/2-1,n);

}

/*void mergesort(int a[], int l, int h)
{
	int mid;
	if(l < h)
	{
		mid = (l + h)/2;
		mergesort(a,l,mid);
		mergesort(a,mid+1,h);
		merge(a,l,mid,h);
	}

}*/


void merge(int a[], int l, int mid, int h)
{
	
	int i = l, j = mid + 1, k = l;
	int b[100];
	
	while(i <= mid && j <= h)
	{
		if(a[i] < a[j])
		{
			b[k] = a[i];
			i++;
			k++;
		}
		else
		{
			b[k] = a[j];
			j++;
			k++;
		}
	}
	
	for(;i <= mid; i++)
	{
		b[k++] = a[i];
	}
	for(;j <= h; j++)
	{
		b[k++] = a[j];
	}
	for(i = l; i <= h; i++)
	{
		a[i] = b[i];
	}
}

