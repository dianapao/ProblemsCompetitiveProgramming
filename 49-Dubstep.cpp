#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	bool flag;
	cin >> str;
	char ant, act, next, sub;
	int longi = str.size()-1;

	for(int i=0; i<=longi; i++){
		ant = str[i];
		act = str[i+1];
		next = str[i+2];
		if(ant=='W' && act=='U' && next=='B'){
			i +=2;
			continue;
		}
		flag = true;
		while(flag){
			sub = str[i];
			cout << sub;
			if(i==longi)
				flag = false;
			i++;
			ant = str[i];
			act = str[i+1];
			next = str[i+2];
			
			if(ant=='W' && act=='U' && next=='B'){
				flag = false;
				cout << " ";
				i+=2;
			}
		}
	}

	return 0;
}