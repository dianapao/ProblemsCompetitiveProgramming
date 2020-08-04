#include <bits/stdc++.h>
#define MAX 27

using namespace std;
int main(){
	int pos;
	string str;
	getline(cin, str);

	vector<int> frequency(MAX,0);

	for(int i=0; i<str.size(); i++){
		pos = -97 + int(str[i]);
		frequency[pos]++;
	}

	pos = 0;
	for(int i=0; i<frequency.size(); i++){
		if(frequency[i] >= 1)	
			pos++;
	}

	if(pos%2 == 0)
		cout << "CHAT WITH HER!";
	else
		cout << "IGNORE HIM!";

	return 0;
}