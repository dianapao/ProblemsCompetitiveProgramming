#include <bits/stdc++.h>
using namespace std;
int main(){
	int count=0;
	string str;
	cin >> str;

	for(int i=0; i<str.size(); i++){
		switch(str[i]){
			case 'H':
			case 'Q':
			case '9': count++; break;
		}
	}

	if(count >= 1)
		cout << "YES";
	else
		cout << "NO";
	

	return 0;
}