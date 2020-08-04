#include<bits/stdc++.h>
using namespace std;
int main(){
	bool zeroConsecutive;
	int n, one=0, zero=0, max=0, digit;

	cin >> n;
	for(int i=0; i<n; i++){
		cin >> digit;
		if(digit==1){
			one++;
			zero = 0;
		}else{
			zero++;
			if(zero > max) max = zero;
		}
	}
	if(one == n) one-=1;

	one += max;
	cout << one << endl;
	return 0;
}