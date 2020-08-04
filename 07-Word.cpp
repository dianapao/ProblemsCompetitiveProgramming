#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	int upper=0, lower=0;
	getline(cin, str);

	for(int i=0; i<str.size(); i++){
		if(str[i]>='a' && str[i]<='z'){
			lower++;
		}else if(str[i]>='A' && str[i]<='Z'){
			upper++;
		}
	}

	if(lower >= upper){
		transform(str.begin(), str.end(), str.begin(), ::tolower);		//cad original, cad original, cad destino
	}else{
		transform(str.begin(), str.end(), str.begin(), ::toupper);
	}

	cout << str;
	return 0;
}