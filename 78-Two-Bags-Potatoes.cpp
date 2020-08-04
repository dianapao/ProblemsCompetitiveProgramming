#include <bits/stdc++.h>
using namespace std;
int main(){
	bool flag = false;
	long long int y, k, n, x; 
	cin >> y >> k >> n;
	if(y<k) x = k-y;
	else if(y>k){
		x = y/k;
		x = (x+1)*k;
		x = x-y;
	}else x = k;
	
	for(x; y+x<=n; x++){
		if((x+y)%k == 0){
			cout << x << " ";
			x+=k-1;
			flag = true;
		}
	}

	if(!flag) cout << "-1";
	return 0;
}