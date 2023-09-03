int subarraysWithSumK(vector < int > a, int b) {
    long long cnt = 0;
    for(int i=0; i<a.size(); i++){
        int XOR = 0;
        for(int j=i; j<a.size(); j++){
            XOR = XOR^a[j];
            if(XOR == b)
                cnt++;
        }
    }
    return cnt;
}
