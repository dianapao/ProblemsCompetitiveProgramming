#include<bits/stdc++.h>
using namespace std;
int main(){
	bool flag = true;
	string s1, s2;
	char x ;
	getline(cin, s1);
	getline(cin, s2);
	vector<int> v(200, 0);
	vector<int> v2(200, 0);
	for(int i=0; i<s1.size(); i++){
		if(int(s1[i]) != 32)
		v[s1[i]-'A']++;
	}
	for(int i=0; i<s2.size(); i++){
		if(int(s2[i]) == 32) continue;
		x = s2[i] - 'A';
		v2[x]++;
	}

	for(int i=0; i<s2.size(); i++){
		if(v[s2[i]-'A'] < v2[s2[i]-'A']){
			flag = false;
			break;
		}
	}

	if(flag) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}