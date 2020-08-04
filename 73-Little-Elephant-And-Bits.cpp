#include <bits/stdc++.h>
using namespace std;
int main(){
	bool flag = true;
	string s;
	getline(cin, s);
	for(int i=0; i<s.size(); i++){
		if(s[i]=='0'){
			s.erase(s.begin()+i);
			flag = false;
			break;
		}
	}

	if(flag){
		s.erase(s.begin()+1);
	}

	cout << s << endl;

	return 0;
}