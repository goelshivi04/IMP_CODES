class Solution {
public:
    void moveZeroes(vector<int>& arr) {
    int n=arr.size();
    int j;
    for(j=0;j<n;j++)
    {
        if(arr[j]==0)
        break;
    }

    int i=j+1;
    while(i<n && j<n)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
            i++;
        }
        else
        i++;
    } 
    }
};
