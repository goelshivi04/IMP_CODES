#include <bits/stdc++.h>
using namespace std;

int main() {
	int n=4;
	int a[4] = {10,12,11,15};
    int low=10,high=15;
	set<int>s;
	for(int i=0;i<n;i++)
	s.insert(a[i]);
	
	for(int i=low;i<=high;i++)
	{
	    if(s.find(i)==s.end())
	    cout<<i<<" ";
	}
	return 0;
}
