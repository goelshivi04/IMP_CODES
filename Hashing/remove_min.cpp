class Solution{
  public:
    int minRemove(int a[], int b[], int n, int m) {
        
        map<int,int>m1,m2;
        
        for(int i=0;i<n;i++)
        m1[a[i]]++;
        
        for(int i=0;i<m;i++)
        m2[b[i]]++;
        
        int ans=0;
        
        for(auto it : m1){
            if(m2.find(it.first)!=m2.end())
            {
                ans+=min(it.second,m2[it.first]);
            }
        }
        return ans;
    }
};
