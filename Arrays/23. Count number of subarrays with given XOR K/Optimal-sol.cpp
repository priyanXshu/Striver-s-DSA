#include<bits/stdc++.h>
int subarraysWithSumK(vector < int > a, int b) {
    map<int, int> mp;
    int xr = 0;
    int cnt = 0;
    mp[xr]++;
    for(int i=0; i<a.size(); i++){
        xr ^= a[i];
        int x = xr ^ b;
        cnt += mp[x];
        mp[xr]++;
    }
    return cnt;
}
