#include <bits/stdc++.h>
using namespace std;
int main(){
	bool flag = true;
	string s1, s2;
	int tot=0;
	getline(cin, s1);
	getline(cin, s2);

	vector<int> changue;

	if(s1.size() != s2.size()) flag = false;
	else{
		for(int i=0; i<s1.size(); i++){
			if(s1[i] != s2[i]){
				tot++;
				changue.push_back(i);
			}
			if(tot>=3){
				flag = false;
				break;
			}
		}
		if(tot==1) flag = false;
		else{
		 swap(s1[changue[0]], s1[changue[1]]);
		 if(s1 != s2) flag = false;
		}
	}
	if(flag) cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;
}