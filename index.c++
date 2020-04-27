 vector<vector<int> >result;
    vector<int>store;
    int i=0;
    
    while(i<A)
    {
        int j=0;
        while(j<=i)
        {
            if(j==0 || j==i)
            {
                store.push_back(1);
            }
            else
            { 
                int temp=result[i-1][j-1]+result[i-1][j];
                store.push_back(temp);
            }
            j++;
        }
        result.push_back(store);
        store.clear();
        i++;
    }
    return result;