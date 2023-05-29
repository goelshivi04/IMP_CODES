#include <bits/stdc++.h>
using namespace std;

int main() {
	int n1=5,n2=4;
	int s1[5] = {12, 34, 11, 9, 3};
    int s2[4] = {7, 2, 1, 5};
	set<int>s;
	for(int i=0;i<n1;i++)
	s.insert(s1[i]);
	int i=0,flag=0;
	for(i=0;i<n2;i++)
	{
	    if(s.find(s2[i])!=s.end())
	    {
	        flag=1;
	        break;
	    }
	}
	if(!flag)
	cout<<"YES. They are disjoint";
	else
	cout<<"NO. They have common element i.e "<<s2[i];
	return 0;
}
