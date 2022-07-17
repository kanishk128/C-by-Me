#include<iostream>
using namespace std;

int main()
{
	for(int i=0;i<5;i++) //i==0 cout, i==1 cout,i==2 continues and skip the body after continue for this iteration
	{
		//cout<<i<<" ";
		if(i==2)
		{
			continue;
		}
		cout<<"Helllo"<<endl;
	}
	return 0;
}