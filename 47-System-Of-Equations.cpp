#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m, maxi, aux=0;
	cin >> n >> m;
	maxi = sqrt(max(n,m));
	for(int i=0; i<=maxi; i++){
		for(int j=0; j<=maxi; j++){
			if((i*i+j==n) && (i+j*j)==m)
				aux++;
		}
	}

	cout << aux;

	return 0;
}