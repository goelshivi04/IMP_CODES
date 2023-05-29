class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> a, vector<ll> b, int n) {
        //code here
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        if(a==b)
        return 1;
        else
        return 0;
    }
};


//
class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> a, vector<ll> b, int n) {
        //code here
        map<ll,int>mp;
        
        for(int i=0;i<n;i++)
            mp[a[i]]++;
        
        
        for(int i=0;i<n;i++)
        {
            if(mp.find(b[i]) ==mp.end())
            return 0;
            
            if(mp[b[i]]==0)
            return 0;
            
            mp[b[i]]--;
        }
        return 1;
    }
};




