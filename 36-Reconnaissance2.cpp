#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, dif, pos1, pos2;
	cin >> n;
	vector<int> solders(n);
	for(int i=0; i<n; i++){
		cin >> solders[i];
	}
 
	dif = abs(solders[n-1] - solders[0]);
	pos1 = n;
	pos2 = 1;
	for(int i=0; i<n; i++){
			if( (abs(solders[i]-solders[i+1]) < dif) ){
				dif = abs(solders[i] - solders[i+1]);
				pos1 =i+1;
				pos2 = i+2;
			}
	}
 
	cout << pos1 << " " << pos2;

	return 0;
}