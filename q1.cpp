#include<iostream>
using namespace std;
void merge(int arr[],int a[],int m,int b[],int n)
{
	int i=0,j=0,k=0;
	while(i<m && j<n)
	{
		if(a[i]<b[j])
		arr[k++]=a[i++];
		else
		arr[k++]=b[j++];
	}
	while(i<m)
	arr[k++]=a[i++];
	while(j<n)
	arr[k++]=b[j++];
}
int main()
{
	int arr1[]={1,2,3,9};
	int arr2[]={4,5,6,8};
	int m=sizeof(arr1)/sizeof(arr1[0]);
	int n=sizeof(arr2)/sizeof(arr2[0]);
	int arr[m+n];
	merge(arr,arr1,m,arr2,n);
	 for(int i=0;i<m+n;i++)
	  cout<<arr[i]<<" ";
	return 0;
}
