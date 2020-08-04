#include <bits/stdc++.h>
using namespace std;
int main(){
	int m, n;
	bool flag = true;
	cin >> n >> m;

	vector<int> primes = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

	int i=0;
	while(flag){
		if(primes[i] == n)
			flag = false;
		else
			i++;
	}

	if(primes[i+1] == m){
		cout << "YES";
	}else{
		cout << "NO";
	}

	return 0;
}