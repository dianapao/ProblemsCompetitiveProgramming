#include <bits/stdc++.h>
#define MAX 26
using namespace std;
int main(){
	string str;
	int pos;
	vector<int> frequency(MAX);
	vector<int> pile(MAX);

	for(int i=0; i<2; i++){
		cin >> str;
		for(int i=0; i<str.size(); i++){
			pos = -65 + int(str[i]);
			frequency[pos]++;
		}
	}
	cin >> str;
	for(int i=0; i<str.size(); i++){
		pos = -65 + int(str[i]);
			pile[pos]++;
	}

	if(frequency == pile)
		cout << "YES";
	else
		cout << "NO";


	return 0;
}