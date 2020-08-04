#include <bits/stdc++.h>
using namespace std;
/*if we look in detail, we will notice that n is equal to n-2 and n-3 */

int main(){
	long long int n, x1=0, x2=1, x3=0, aux=0, aux2;
	cin >> n;
	if(n<=3){
		if(n==1){
			cout << "0 0 1";
		}else if(n==2){
			cout << "0 1 1";
		}else if(n==3){
			cout << "1 1 1";
		}else if(n==0){
			cout << "0 0 0";
		}
	}else{
		while((x1+x2)<n){
		x3 = x1 + x2;
		aux2 = aux;
		aux = x1;
		x1 = x2;
		x2 = x3;
	}
	cout << x3 << " " << aux << " " << aux2 << endl; 
	}
}