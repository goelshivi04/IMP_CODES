#include <bits/stdc++.h>
using namespace std;

int main() {
	int n=4;
	int s1[4] = {1,5,3,8};
    int s2[4] = {5,4,6,7};
	map<int,int>mp;
	for(int i=0;i<n;i++)
	{
	    mp[s1[i]]++;
	    mp[s2[i]]++;
	}
	
	int sum=0;
	for(auto it: mp)
	{
	    if(it.second==1)
	    sum+=it.first;
	}
	cout<<sum;
	return 0;
}
