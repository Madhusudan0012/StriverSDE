#include<bits/stdc++.h>
using namespace std;
int sum(int n){
	if(n==1)
	return 0;
	return n + sum(n-1); // print first N numbers 
	
	
}
int main(){
	//int  n ;
	
	//cin >> n;
	//cout << n << endl;
	int n = 3;
	cout << sum(n);
	return 0;
	
}
