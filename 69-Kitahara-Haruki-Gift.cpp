#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, weight, tot=0;
	cin >> n;
	vector<int> v(2);
	for(int i=0; i<n; i++){
		cin >> weight;
		if(weight == 100) v[0]++;
		else v[1]++;
	}

	if(v[0]%2!=0 || (v[0]==0 && v[1]%2!=0)) cout << "NO" << endl;
	else cout << "YES" << endl;

	return 0;
}