#include<iostream>

using namespace std;

int main()
{
    long long int a,cpy,safe;
	int ctr;
	cin>>a;

	if(a<0)
	{
		cout<<"Wrong Input";
		exit(0);
	}
	safe=a;
 	a=a*a;
 	cpy=0;
 	ctr=0;

 	while(ctr<8 && a!=0)
 	{
 		ctr+=1;
 		cpy=cpy*10+a%10;
 		a=a/10;
 	}	
    a=0;
    while(cpy>0)
    {
        a=a*10+cpy%10;
        cpy=cpy/10;
    }
 	
 	a=a*a;
 	cpy=0;
 	ctr=0;

 	while(ctr<8 && a!=0)
 	{
 		ctr+=1;
 		cpy=cpy*10+a%10;
 		a=a/10;
 	}
 	
 	a=0;
    while(cpy>0)
    {
        a=a*10+cpy%10;
        cpy=cpy/10;
    }

    long long int c;
    int cal;
    cal=0;
    c=safe;
    while(c>0)
    {
    	if(c%10!=a%10)
    	{
    		cal=1;
    		break;
    	}
    	c=c/10;
    	a=a/10;
    }

    if(cal==1)
    {
    	cout<<"FALSE";
    }
    else
    {
    	cout<<"TRUE";
    }

}