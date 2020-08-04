#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	double cant, avg=0;
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> cant;
		avg += cant/100;
	}
	avg = avg/n;

	cout << (avg*100);
	return 0;
}