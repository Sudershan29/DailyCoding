#include<stdio.h>
#include<string.h>


int main()
{
	int n, count = 0,i,ctr=0,j;
	int arr[100],freq[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
 
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
 
    for(i=0; i<n; i++)
    {
        if(freq[i] == 1)
        {
        	ctr=1;
            printf("%d ", arr[i]);
            break;
        }
    }

    if(!ctr)
    	printf("-1");
    return 0;
}

