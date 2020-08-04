#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, tot=0;
	cin >> n;
	for(int i=1; i<=n; i++){
		for(int j=i; j<=n; j++){
			if(sqrt(i*i + j*j)<=n && sqrt(i*i + j*j)==(int)sqrt(i*i + j*j))
				tot++;
		}
	}

	cout << tot << endl;

	return 0;
}