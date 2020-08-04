#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m, l;
	cin >> n >> m;
	vector<int> numbers(n);
	vector<int> final(n);
	set<int> TotDifferent;

	for(int i=0; i<n; i++){
		cin >> numbers[i];
	}

	
	for(int i=numbers.size()-1; i>=0; i--){
		TotDifferent.insert(numbers[i]);
		final[i] = TotDifferent.size();
	}

	for(int i=0; i<m; i++){
		cin >> l;
		cout << final[l-1] << endl;
	}

	return 0;
}