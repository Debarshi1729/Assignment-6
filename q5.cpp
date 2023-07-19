#include<bits/stdc++.h>
using namespace std;
int countPairs(vector<int> v,int sum)
{
	int count=0;
	int i=0,j=v.size()-1;
	while(i<j)
	{
		if(v[i]+v[j]==sum)
		 {
		 count++;
		 i++;}
		else if(v[i]+v[j]<sum)
		 i++;
		else
		 j--;
	}
	return count;
}
int main()
{   
    int n;
	cout<<"Enter the number of elements:";
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	 {
	 	cin>>v[i];
	 }
	int x;
	cout<<"Enter the sum:";
	cin>>x;
	cout<<countPairs(v,x);
	return 0;
}
