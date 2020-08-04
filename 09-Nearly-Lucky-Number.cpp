#include <bits/stdc++.h>
using namespace std;
int main(){
	string num;
	int tot=0;
	getline(cin, num);
	for(int i=0; i<num.size(); i++){
		if(num[i]=='4' || num[i]=='7'){
			tot++;
		}
		if(tot>=8){
			break;
		}
	}
	if(tot==4 || tot==7){
		cout << "YES";
	}else{
		cout << "NO";
	}
	return 0;
}