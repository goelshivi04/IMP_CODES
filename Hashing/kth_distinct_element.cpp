//naive
class Solution{
	public:
		int KthDistinct(vector<int>nums,int k){
		    // Code here.
		    int n=nums.size();
		    int i,j,d=0;
		    for(i=0;i<n;i++)
		    {
		        for(j=0;j<n;j++)
		        {
		            if(i!=j && nums[i]==nums[j])
		            {
		                break;
		            }
		        }
		        if(j==n)
		        d++;
		        
		        if(d==k)
		        return nums[i];
		    }
		    return -1;
		}
};

//efficient


int n=nums.size();
		    int d=0;
		    unordered_map<int,int>mp;
		    
		    for(int i=0;i<n;i++)
		    mp[nums[i]]++;
		    
		    if(mp.size() < k)
		    return -1;
		    
		    for(int i=0;i<n;i++)
		    {
		        if(mp[nums[i]]==1)
		        d++;
		        
		        if(d==k)
		        return nums[i];
		    }
		    return -1;
