#include <bits/stdc++.h>
using namespace std;
int main(){
	bool flag=true;
	string str1, str2;
	cin >> str1 >> str2;

	transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
	transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

	for(int i=0; i<str1.size(); i++){
		if(str1[i] < str2[i]){
			cout << "-1";
			flag = false;
			break;
		}else if(str1[i] > str2[i]){
			cout << "1";
			flag = false;
			break;
		}
	}

	if(flag)
		cout << "0";

	return 0;
}