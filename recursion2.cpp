#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
void print(){
	if(cnt==3) return; //this is called specified condition
	cout << cnt << endl;
	cnt++;
	print();
	
}
int main(){
	int n ;
	cin >> n;
	cout << n;
	print();
	return 0 ;
	
}
