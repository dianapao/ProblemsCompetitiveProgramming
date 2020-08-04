#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	getline(cin, str);
	int one=0, two=0, three=0, size=0, i;

	for(i=0; i<str.size(); i++){
		switch(str[i]){
			case '1': one++; break;
			case '2': two++; break;
			case '3': three++;break;
		}
	}

	for(i=0; i<one; i++){
		cout << "1";
		size++;
		if(size<(one+two+three))
			cout << "+";
	}
	for(i=0; i<two; i++){
		cout << "2";
		size++;
		if(size<(one+two+three))
			cout << "+";
	}
	for(i=0; i<three; i++){
		cout << "3";
		size++;
		if(size<(one+two+three))
			cout << "+";
	}

	return 0;
}