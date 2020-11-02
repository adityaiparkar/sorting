#include<stdio.h>
void revarr(int [], int [], int );
int main()
{
    int a[] = {1,4,3,2}, n,rev[4] = {0};
    n = 4;

	revarr(a,rev,n);
    return 0;
}

void revarr(int a[], int rev[], int n)
{
	int i, cnt = 0;
    for(i = 0; i < n; i++)
    {
        rev[i] = a[i];
        cnt++;
    }

    cnt--;
    int k = 0;

    while(cnt != -1 && k < n)
    {
        a[k] = rev[cnt];
        k++;
        cnt--;
    }
	for(k = 0; k < n; k++)
		printf(" %d ",a[k]);
}
