#include <bits/stdc++.h>
using namespace std;
int main(){
	int wordsOdd=0;
	string s;
	getline(cin,s);

	map <char,int> letters;
	map<char,int>::iterator pos;

	for(int i=0; i<s.size(); i++){
		letters[s[i]]++;
	}

	for(pos=letters.begin(); pos!=letters.end(); pos++){
		if(pos->second % 2 != 0)
			wordsOdd++;
	}

	if(wordsOdd<=1)
		cout << "First";
	else
		if(wordsOdd%2 != 0)
			cout << "First"<<endl;
		else
			cout << "Second"<<endl;

	return 0;
}