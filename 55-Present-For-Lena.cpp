#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, dig, aux, num, fin=0, space;
	cin >> n;
	num = n+1;
	space = n*2;
 
	for(int i=0; i<(n*2+1); i++){
		aux = n+1;
		for(int z=0; z<space; z++){
				cout << " ";
		}
		for(int j=0; j<(2*fin+1); j++){
			dig = aux % num;
			cout << dig ;
			if(j < (2*fin)){
				cout << " ";
			}
			if(j< ((2*fin+1)/2)){
				aux++;
			}else{
				aux--;
			}
		}
		if(i<n*2){
			cout << endl;
		}
		if(i < n){
			space-=2;
			fin++;
		}else{
			space+=2;
			fin--;
		}
	}
	
	return 0;
}