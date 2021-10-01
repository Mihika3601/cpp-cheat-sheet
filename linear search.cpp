#include<iostream>
using namespace std;
main()
{
	int a[100],i,n,search;
	cout<<"Enter the number of elements \n";
	cin>>n;
	cout<<"Enter the elements\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"Enter the number to be searched \n";
	cin>>search;
	for(i=0;i<n;i++)
	{
		if(a[i]==search)
		cout<<search<<" is present at "<<i+1<<" position \n";
	}
	if(i==n)
	cout<<search<<" is not found in the array \n";
}
