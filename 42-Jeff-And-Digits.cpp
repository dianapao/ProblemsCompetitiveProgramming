#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, card, five=0, zero=0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> card;
		if(card==5)
			five++;
		else
			zero++;
	}

	if(zero==0){
		cout << "-1";
	}else{
		if(five<9){
			cout << "0";
		}else{
			for(int i=0; i<(five/9)*9; i++){
				cout << "5";
			}
			for(int i=0; i<zero; i++){
				cout << "0";
			}
		}
	}

	return 0;
}