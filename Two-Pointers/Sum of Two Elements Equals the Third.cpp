#include <bits/stdc++.h> 
vector<int> findTriplets(vector<int> &arr, int n) 
{
    //Write your code here.
    sort(arr.begin(),arr.end());

    vector<int>ans;
    for(int i1=n-1;i1>=0;i1--)
    {
        int i=0,j=n-1;
        while(i<j)
        {
            if(arr[i]+arr[j]==arr[i1])
            {
                // vector<int>ans;
                ans.push_back(arr[i]);
                ans.push_back(arr[i1]);
                ans.push_back(arr[j]);
                return ans;
            }
            else if(arr[i]+arr[j] > arr[i1])
            j--;
            else
            i++;
        }

    }
    return ans;
}
