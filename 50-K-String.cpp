#include<bits/stdc++.h>
using namespace std;
int main(){
	int k, aux=0;
	string str;
	bool flag=true;
	cin >> k;
	cin >> str;

	typedef map<char,int> mapa;
	mapa frecuency;

	for(int i=0; i<str.size(); i++){
		frecuency[str[i]]+=1;
	}

	mapa::iterator pos;
	for(pos=frecuency.begin(); pos!=frecuency.end(); pos++){
		if(pos->second%k != 0){
			flag = false;
			break;
		}
	}

	if(flag){
		while(aux < str.size()){
			for(pos=frecuency.begin(); pos!=frecuency.end(); pos++){
				int x = pos->second / k;
				for(int i=0; i<x; i++){
					cout << pos->first;
					aux++;
				}
			}
		}
	}else{
		cout << "-1";
	}

	return 0;
}