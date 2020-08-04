#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, sum, tot=0;
	cin >> n;
	vector<int> v1(n);
	for(int i=0; i<n; i++){
		sum = 0;
		cin >> v1[0];
		cin >> v1[1];
		cin >> v1[2];
		if(v1[0] == 1)
			sum++;
		if(v1[1] == 1)
			sum++;
		if(v1[2] == 1)
			sum++;

		if( sum >= 2)
			tot++;
	}
 
	cout << tot;
	return 0;
}