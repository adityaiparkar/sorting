#include<stdio.h>
        
int bSort(int n,int arr[])
{
            int cnt=0, temp, i, j, k = 0,  flag = 0;

	for(i = 0; i < n-1; i++)
	{
		flag = 0;
		for(j = 0; j < n-i-1; j++)
		{
            		if(arr[j] > arr[j+1])
            		{
            			temp = arr[j];
            	        	arr[j] = arr[j+1];
                		arr[j+1] = temp;
                   		cnt++;
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
            int n,arr[50000];
	    printf("Enter how many elements you want : ");
            scanf("%d",&n);

            for(int i=0;i<n;i++)
                scanf("%d",&arr[i]);

                int x = bSort(n,arr);
            	printf("total swaps : %d ",x);
} 
