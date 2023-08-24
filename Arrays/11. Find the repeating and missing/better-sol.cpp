#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	int freq[n+1] = {0};
	for(int i=0; i<n; i++){
		freq[arr[i]]++;
	}
	int repeating = -1, missing = -1;
	for(int i=1; i<=n; i++){
		if(freq[i] == 2)	repeating = i;
		else if(freq[i] == 0)	missing = i;

		if(repeating != -1 && missing != -1)	break;
	}
	return {missing, repeating};
	
}

