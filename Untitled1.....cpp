#include<iostream>
using namespace std;
main()
{
	int i,k;
	for(i=1;i<=5;i++)
	{
		for(k=5;k>=i;k--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
