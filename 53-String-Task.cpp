#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin >> str;
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	for(int i=0; i<str.size(); i++){
		switch(str[i]){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'y': continue;
		}
		cout << "."<<str[i];
	}
	return 0;
}