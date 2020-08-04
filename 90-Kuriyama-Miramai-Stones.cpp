#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m, type, l, r;
	long long int value;
	cin >> n;

	vector<long long int> stones(n);
	vector<long long int> sumasStones(n);
	vector<long long int> sumasCheapest(n);
	for(int i=0; i<n; i++){
		cin >> stones[i];
		if(i==0) sumasStones[i] = stones[i];
		else sumasStones[i] = stones[i] + sumasStones[i-1];
	} 

	sort(stones.begin(), stones.end());
	for(int i=0; i<n; i++){
		if(i==0) sumasCheapest[i] = stones[i];
		else sumasCheapest[i] = stones[i] + sumasCheapest[i-1];
	}

	cin >> m;
	for(int i=0; i<m; i++){
		cin >> type >> l >> r;
		if(type==1){
			if(l==1) cout << sumasStones[r-1] << endl;
			else cout << sumasStones[r-1]-sumasStones[l-2] << endl;
		}
		else{
			if(l==1) cout << sumasCheapest[r-1] << endl;
			else cout << sumasCheapest[r-1] - sumasCheapest[l-2] << endl;
		}
	}

	return 0;
}