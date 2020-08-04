#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, x, sumX=0, sumY=0, sumZ=0;
	cin >> n;
	for(int i=0; i<n; i++){
			cin >> x;
			sumX += x;
			cin >> x;
			sumY += x;
			cin >> x;
			sumZ += x;
	}

	if(sumX==0 && sumY==0 && sumZ==0)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}