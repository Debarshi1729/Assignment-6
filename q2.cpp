#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	 cin>>v[i];
	for(int i=0;i<n;i++)
	 cout<<v[i]<<" ";
	int x;
	 cout<<"Enter the sum:";
	 cin>>x;
	int i=0;
//	while(i<n-1)
//	{
//		for(int j=i+1;j<n;j++)
//		{
//			if(v[i]+v[j]==x) //time complexity=n^2--
//			{
//			cout<<"yes";
//			return 0;}
//		}
//		i++;
//	}
    int j=n-1;
    while(i<j)
    {
    	if(v[i]+v[j]==x)
    	{
    		cout<<"Yes";
    		return 0;
		}
		else if(v[i]+v[j]<x)
		 i++;
		else
		 j--;
	}
	cout<<"No";
	return 0;
}
