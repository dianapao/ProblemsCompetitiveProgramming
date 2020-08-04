#include<bits/stdc++.h>
using namespace std;
int main(){
	
	ifstream cin("input.txt");
	ofstream cout("output.txt");

	bool flag= true;
	int n, c; 

	cin>>n;
	map<int, vector<int>> card;
	map<int, vector<int>>::iterator pos;

	for(int i=0; i<2*n; i++){
		cin >> c;
		card[c].push_back(i+1);
	}

	for(pos=card.begin(); pos!=card.end(); pos++){
		if(pos->second.size()%2!=0){
			flag = false;
			break;
		}
	}

	if(!flag){
		cout << "-1";
	}else{
		int tam;
		for(pos=card.begin(); pos!=card.end(); pos++){
			tam = pos->second.size();
			for(int i=0; i<tam-1; i+=2){
				cout << pos->second[i] << " " << pos->second[i+1] << endl;
			}
		}
	}

	


	/*for(pos=card.begin(); pos!=card.end(); pos++){
		cout << pos->first << "-> ";
		vector<int> posAux = pos->second;
		for(int i=0; i<posAux.size(); i++){
			cout << posAux[i] << ", ";
		}
		cout << endl;
	}*/
	return 0;
}