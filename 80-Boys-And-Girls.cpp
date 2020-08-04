#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream cin("input.txt");
	ofstream cout("output.txt");
	int n, m; cin >> n >> m;
	if(n==m || n<m){
		while(n>0 || m>0){
			if(m>0){
				cout << "G";
				m--;	
			}
			if(n>0){
				cout <<"B";
				n--;
			}
		}
	}else{
		while(n>0){
			cout << "B";
			n--;
			if(m>0){
				cout <<"G";
				m--;
			}
		}
	}
	return 0;
}