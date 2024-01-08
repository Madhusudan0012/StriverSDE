#include<bits/stdc++.h>
int longestsubarrayWithSumK(vector<int> a , long long k){
	int left = 0, right = 0 ;
	long long sum =a[0];
	int maxLen = 0;
	int n = a.size();
	while(right<n){
		while(left<=right && sum>k){
			sum-=a[left];
			left++;
		}
		if(sum==k){
			maxlen = max(maxLen , right - left + 1);
			
		}
		right++;
		if(right<n) sum+=a[right];
	}
	return maxLen;
}
//Optimal Solution 
//Time complexicity  o(2n) 
//space complecity 
