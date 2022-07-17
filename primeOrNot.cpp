#include<iostream>
using namespace std;

int main()
{
	int n,i,flag=1;
	cin>>n;
	if(n==1)
	{
		cout<<"Neither prime nor composite!";
	}
	else if(n==2)
	{
		cout<<"prime";
	}
	else 
	{
		for(i=3;i<=n/2;i++)  //24 1*24 2*12 3*8 4*6  12 13 14 15 16 17 
		{
			if(n%i==0) 
			{
				flag=0;
				break; //stops the for loop in other words terminates it
			}	
		}
		flag==1?cout<<"prime":cout<<"not prime";
	}

}