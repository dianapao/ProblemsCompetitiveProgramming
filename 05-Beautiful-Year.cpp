#include <bits/stdc++.h>
using namespace std;
int main(){
	bool flag=true;
	int num, final; 
	cin >> num;
	num++;
	string cad = to_string(num);

	while(flag){
		string cad = to_string(num);
		if(cad[0]!=cad[1] && cad[0]!=cad[2] && cad[0]!=cad[3] && cad[1]!=cad[2] && cad[1]!=cad[3] && cad[2]!=cad[3]){
			flag = false;
			final = num;
		}
		num++;
	}

	cout <<final;
	
	return 0;
}