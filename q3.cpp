#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	 cin>>a[i];
	int d;
	cout<<"Enter the difference:";
	cin>>d;
	int i=0,j=1;
	while(i<a.size() && j<a.size())
	{
		if(a[j]-a[i]==d)
		 {cout<<"yes";
	      return 0;}
	    else if(a[j]-a[i]<d)
	    {
	    	j++;
	    	break;
		}
		else
		{
			i++;
			break;
		}
}
cout<<"No";
return 0;}
