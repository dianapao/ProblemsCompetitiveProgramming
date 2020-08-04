#include <bits/stdc++.h>
using namespace std;
#define MAX 10000001


int main(){
	int n, tot=0; 
	long int divisor;
	cin >> n;

	vector<bool> criba(MAX, true);
	for(long int i=11; i< MAX; i++ ){
		if(tot >= n) break;
		if(criba[i] == false) continue;
		divisor = i;
		cout << divisor << " ";
		for(int j=i+divisor; j<MAX; j+=divisor){
			criba[j] = false;
		}
		tot++;
	}


	return 0;
}