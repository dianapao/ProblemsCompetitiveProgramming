#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, a=0,b=1;
	cin >> n;
	vector<int> permutations (n);

	if(n%2 != 0){
		cout << "-1";
	}else{
		for(int i=0; i<n; i++){
			permutations[i] = i+1;
		}

		for(int i=0; i<n-1; i+=2){
			swap(permutations[i], permutations[i+1]);
		}

		for(int i=0; i<n; i++){
			cout << permutations[i] << " ";
		}
	}

	

	

	
	return 0;
}