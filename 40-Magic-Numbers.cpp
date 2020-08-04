#include <bits/stdc++.h>
using namespace std;
int main(){
	string n;
	bool flag = true, final = true;
	int aux=0;

	cin >> n;

	if(n[0]=='4'){
		cout << "NO";
		final = false;
	}else{
		for(int i=0; i<n.size(); i++){
			if( (n[i] != '4') && (n[i] != '1') ){
				cout << "NO";
				final = false;
				break;
			}
 			
 			if(n[i] != '4'){
 				flag = false;
 				aux = 0;
 			}else
 				flag = true;

			if(flag)
				aux++;
			
			if(aux >=3){
				cout << "NO";
				final = false;
				break;
			}
		}
	}
	
	if(final)
		cout << "YES";
	return 0;
}