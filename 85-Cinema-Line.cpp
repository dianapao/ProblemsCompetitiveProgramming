#include<bits/stdc++.h>
using namespace std;
int main(){ 
	bool flag = true;
	int n, changue, cant;
	vector<int> reserva(3,0);

	cin >> n;
	for(int i=0; i<n; i++){
		cin >> cant;
		if(cant == 25) reserva[0]++;
		else if (cant==50){
			if(reserva[0] >= 1){
				reserva[1]++;
				reserva[0]--;
			}else{
				flag = false;
			}
		}else{
			if(reserva[1]>=1 && reserva[0]>=1){
				reserva[1]--;
				reserva[0]--;
			}else if(reserva[0]>=3){
				reserva[0]-=3;
			}else{
				flag = false;
			}
		}
	}

	if(flag) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}