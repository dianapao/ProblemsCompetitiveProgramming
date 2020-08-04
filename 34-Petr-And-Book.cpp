#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, pages=0, tot=0;
	vector<int> days(7);
	cin >> n;
	for(int i=0; i<7; i++){
		cin >> days[i];
	}

	while(pages<n){
		pages += days[tot%7];
		tot++;
	}

	cout << ((tot-1)%7)+1 ;
	return 0;
}