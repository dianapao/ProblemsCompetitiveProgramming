#include <bits/stdc++.h>
using namespace std;
int main(){
	string cad;
	char act, next;
	int contA=0, contN=1;
	getline(cin, cad);

	if((cad.size()==1) && (cad[0] == '.')){
		cout << "0";
	}else{
		act = cad[0];
		next = cad[1];

		for(int i=0; i<cad.size(); i++){
			if(i==(cad.size()-1)){
					next = 'P';
			}
			if(act=='-' && next=='-'){
				cout << "2";
				contA += 2;
				contN += 2;
				act = cad[contA];
				next = cad[contN];
				i++;
			}else if(act=='-' && next=='.'){
				cout << "1";
				contA += 2;
				contN += 2;
				act = cad[contA];
				next = cad[contN];
				i++;
			}else if(act=='.' && (next=='.' || next=='-' || next=='P') ){
				cout << "0";
				contA += 1;
				contN += 1;
				act = cad[contA];
				next = cad[contN];
			}
			
		}
	}

	
	return 0;
}