#include<iostream>
#include<vector>
using namespace std;
int numberOfPairs(vector<int> v,int sum)
{
	int count=0,i,j,k;
	for(int i=0;i<v.size();i++)
	{
		for(int j=i+1;j<v.size();j++)
		{
			for(int k=j+1;k<v.size();k++)
			{
				if(v[i]+v[j]+v[k]==sum)
				{
					count++;
				}
			}
		}
	}
	return count;
}
int main()
{
int n;
cin>>n;
	vector<int> v(n);
for(int i=0;i<n;i++)
 cin>>v[i];
int sum;
cin>>sum;
cout<<numberOfPairs(v,sum);
return 0;
}
