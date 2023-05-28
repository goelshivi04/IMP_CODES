
string isSubset(int a1[], int a2[], int n, int m) {
    
    
    set<int>s;
    
    for(int i=0;i<n;i++)
    s.insert(a1[i]);
    
    int x=s.size();
    
    for(int i=0;i<m;i++)
    s.insert(a2[i]);
    
    if(x==s.size())
    return "Yes";
    else
    return "No";
}
