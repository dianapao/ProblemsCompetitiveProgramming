#include <bits/stdc++.h>
using namespace std;

void solve(){
	string str;
	cin.ignore();
	cin >> str;

	int count = str.size();
	if(count > 10){
		cout << str[0] << (count-2) <<str[str.size()-1] << endl;
	}else{
		cout << str << endl;
	}
}

int main(){
	int n; 
	cin >> n;

	while(n--){
		solve();
	}
	return 0;
}