bool pos( vector<int>&v, int k){

    int mn = INT_MAX;
    int mx = INT_MIN;

    for (int i = 0; i < k; i++)
    {
        mn = min(mn,v[i]);
        mx = max(mx, v[i]);
    }

    int i=0, j = k-1;

    while (j < v.size() && i < v.size()-k)
    {
        if( abs(mx-mn) <= 1) return true;

        i++;
        j++;

        if( v[i] > mn) mn = v[i];
        if( v[j] < mx ) mx = v[j];

        //cout << mn << " " << mx << endl;

    }

    //if( abs(mx-mn) <= 1) return true;

    return false;
    
    
    
}