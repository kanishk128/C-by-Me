#include<iostream>
using namespace std;
int main()
{
	int a,d,x;
	int i=1; //initialization of loop variable
	cin>>a>>d;
	while(i<=4) //i==1 i==2 i==3 i==4 'i==5'
	{
		x=a+i*d;
		i++; //updation of loop
		cout<<x<<" ";
	}
	return 0;
}
