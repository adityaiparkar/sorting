#include<stdio.h>
    int bSort(int n,int arr[])
{
        int count = 0, swapped = 1, temp;
        while(swapped!=0)
	{
            swapped = 0;
            count=count+1;
            for(int i=0;i<n-1;i++)
	    {
                	if(arr[i]>arr[i+1])
                	{
                       		temp = arr[i];
	               		arr[i] = arr[i+1];
               			arr[i+1] = temp;
               			swapped = 1;
            		}
		
	     }
		
        }
        return count;
       
}
     
    int main()
    {
        int n,arr[50000];
	printf("Enter how man elements you want : ");
        scanf("%d",&n);

        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);

            int x = bSort(n,arr);
        printf("total passes required : %d ",x);
    }
