//Naive
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    sort(arr,arr+n);
	    int i=0,j=n-1;
	    while(i<j)
	    {
	        if(arr[i]+arr[j]==x)
	        return true;
	        else if(arr[i]+arr[j]>x)
	        j--;
	        else
	        i++;
	    }
	    return false;
	}
};

//efficient
class Solution{
    public:
    // your task is to complete this function
    int maxDistance(int arr[], int n)
    {
    //Code here
        map<int,int>mp;
        int max1=0;
        for(int i=0;i<n;i++)
        {
            if(mp.find(arr[i])==mp.end())
            mp[arr[i]]=i;
            else
            max1=max(max1,i-mp[arr[i]]);
        }
        return max1;
        
    }
};
