#include <bits/stdc++.h>
using namespace std;
int main(){
	string cad1, cad2;
	getline(cin, cad1);
	getline(cin, cad2);

	for(int i=0; i<cad1.size(); i++){
		if( cad1[i]=='0' && cad2[i]=='0') {
			cout << "0";
		}else if((cad1[i]=='0' && cad2[i]=='1') || (cad1[i]=='1' && cad2[i]=='0')){
			cout << "1";
		}else if(cad1[i]=='1' && cad2[i]=='1'){
			cout << "0";
		}
	}
	return 0;
}