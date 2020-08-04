#include <bits/stdc++.h>
using namespace std;
int main(){
	bool flag = true;
	int n, k, aux, lower=-1;
	cin >> n >> k;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
		if(i==k-1) aux = v[i];
		else if(i>=k)
			if(v[i] != aux) flag=false;
	}

	if(!flag) cout << "-1" << endl;
	else{
		for(int i=0; i<n; i++){
			if(v[i]!=aux) lower = i;
		}
		cout << lower+1 << endl;
	}

	return 0;
}