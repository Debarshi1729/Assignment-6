#include<bits/stdc++.h>
using namespace std;
vector<int> sortedSquare(vector<int> v)
{
  vector<int> v1(v.size());
  int i=0,j=v.size()-1,k=v.size()-1;
  while(i<=j) 
  {
  	if(abs(v[i])<abs(v[j]))
  	 {
  	 	v1[k]=v[j]*v[j];
  	 	k--;
  	 	j--;
	   }
	else{
		v1[k]=v[i]*v[i];
		k--;
		i++;
	}
  }
  return v1;
}
int main()
{   int n;
    cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	 cin>>v[i];
	vector<int> v1=sortedSquare(v);
	for(int e:v1)
	 cout<<e<<" ";
	return 0;
}
