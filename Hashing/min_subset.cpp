#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	
	map<int,int>mp;
	
	for(int i=0;i<n;i++)
	{
	    mp[a[i]]++;
	}
	int max1=0,ans=0;
	for(auto it:mp)
	{
	    if(max1<it.second)
	    {
	        max1=it.second;
	        ans=it.first;
	    }
	}
	cout<<max1;
	return 0;
}
