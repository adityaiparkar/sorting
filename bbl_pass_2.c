#include<stdio.h>

int bSort(int n,int arr[])
{
        int cnt = 0, flag = 0 , temp, j;
            for(int i=0;i<n-1;i++)
	    {
		flag = 0;
		cnt++;
		for(j = 0; j < n-i-1; j++)
		{
                	if(arr[j]>arr[j+1])
                	{
                       		temp=arr[j];
	               		arr[j]=arr[j+1];
               			arr[j+1]=temp;
               			flag = 1;
            		}
		}
		
		if(flag==0)
			break;
            }
		
        return cnt;
       
    }
     
    int main()
    {
        int n, arr[100], x, i;
	printf("Enter how man elements you want : ");
        scanf("%d",&n);

        for(i=0; i <n; i++)
            scanf("%d",&arr[i]);
	
	
        x = bSort(n,arr);
        printf("total passes required : %d ",x);

	bSort(n,arr);
	for(i = 0; i < n; i++)
		printf("\n %d \n",arr[i]);
    }
