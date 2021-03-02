#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int a[10],n,ctr,i;
	int count[10];

	cin>>n; // n = 3  
		
	// takes in input 

	for(i=0;i<n;i++)
	{
		 cin>>a[i];
		 // 1 2 3 are inputs
	}

	// creates a array with position markings 0 0 0
	
	for(i=0;i<n;i++)
	{
		count[i]=0;
	}

	// figures out the maximum possibility 

	int total = pow(n,n);
	ctr=0;
	
	//have to undergo these many computations to find out all the possibility 
	
	while(ctr<total)
	{

		//Prints the current rotation 
		
		for(i=0;i<n;i++)
			cout<<a[count[i]];

		cout<<"\n";

		count[0]=count[0]+1;

		// 000 , 100, 200 , 010 ... similarly extracts al the possible combination of positions possible (Similar to how we compute in mathematics)
		
		if(count[0]==n)
		{
			for(i=0;i<n;i++)
			{
				if(count[i]==n)
				{
					count[i]=0;
					count[i+1]++;
				}
			}
		}
		ctr++;
	}
	return 0;
}