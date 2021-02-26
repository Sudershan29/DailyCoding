/*
Given a positive int n, print all jumping numbers smaller than or equal to n. A number is called a jumping number if all adjacent digits in it differ by 1. For example, 8987 and 4343456 are jumping numbers, but 796 and 89098 are not. All single digit numbers are considered as jumping numbers.

Example:

Input: 105
Output: [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 21, 23, 32, 34, 43, 45, 54, 56, 65, 67, 76, 78, 87, 89, 98, 101]
*/

#include<iostream>

using namespace std;

int function(int i)
{
	int cpy,prev,next,ctr;
	cpy=i;


	//single digits are all Jumping numbers 
	if(i<10 && i>=0)
		return i;
	
	// Take number 123 now

	else
	{
		// this will store 123%10 = 3
		prev=cpy%10;
		// cpy -> 123/10 = 12
		cpy=cpy/10;

		ctr=1;
		
		while(cpy>0)
		{
			//extracting the next digit => 12%10 = 2
			next=cpy%10;
			
			if(next+1 == prev || next-1 == prev)
			{
				//prev = 2 and cpy = 1
				prev=next;
				cpy=cpy/10;
			}
			// if condition fails anytime, then break and return -1
			else
			{	
				return -1;
			}
		}

			return i;
	}
}

int main()
{

	int b,temp;
	cin>>b;
	for(int i =0;i<=b;i++)
	{
		temp=function(i);
		if(temp!=-1)
			cout<<temp<<" ";
	}
	return 0;
}