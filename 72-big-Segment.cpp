#include <bits/stdc++.h>
using namespace std;
int main(){
	bool flag = false;
	int n; cin >> n;
	long long int x, y, min, max;
	vector<pair<long long int, long long int>> vp;

	for(int i=0; i<n; i++){
		cin >> x >> y;
		if(i==0){
			min = x;
			max = y;
		}else{
			if(x<min) min = x;
			if(y>max) max = y;
		}
		vp.push_back({x,y});
	}

	pair<long long int, long long int> aux = make_pair(min, max);
	for(int i=0; i<vp.size(); i++){
		if(vp[i] == aux){
			cout << i+1 << endl;
			flag = true;
			break;
		}
	}
	
	if(!flag) cout << "-1" << endl;

	return 0;
}