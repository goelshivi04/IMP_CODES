class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]+arr[j] == k)
                c++;
            }
        }
        return c;
    }
};

//

