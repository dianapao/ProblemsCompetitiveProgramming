#include<bits/stdc++.h>
using namespace std;
int main(){
	bool eo=false, oo=false, ee=false;;
	int n, upper, lower;
	cin >> n;
	vector<pair<int,int>> domino;

	int cE=0, cO=0, cEO=0, cU=0, cL=0;
	for(int i=0; i<n; i++){
		cin >> upper >> lower;
		cU+=upper;
		cL+=lower;
		domino.push_back(make_pair(upper,lower));
		if(upper%2==0 && lower%2==0)
			cE++; 
		else if((upper%2==0 && lower%2!=0) || (upper%2!=0 && lower%2==0))
			cEO++;
		else if(upper%2!=0 && lower%2!=0)
			cO++;
	}

	/*for(int i=0; i<n; i++)
		cout << domino[i].first << " - " << domino[i].second << endl;*/

	if(cU%2==0 && cL%2==0){
		cout << "0" <<endl;
	}else if(n==1 && (cO==1 || cEO==1)){
		cout << "-1";
	}else if(n==2){
		if(cEO==2) cout << "1" << endl;
		else cout << "-1";
	}else{
		if(cO%2 != 0){
			if(cE%2 != 0){
				if(cEO%2 !=0) cout<<"-1"<<endl;
				else cout << "1"<<endl;
			}else{
				if(cEO%2 != 0) cout << "-1" << endl;
				else{
					if(cEO == 0) {
						cout << "-1" << endl; 
					}else cout << "1" << endl;
				}
			}
		}else{
			if(cEO%2 != 0) cout << "-1"<<endl;
			else cout << "1"<<endl;
		}
	}

	return 0;
}