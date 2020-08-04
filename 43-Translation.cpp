#include <bits/stdc++.h>
using namespace std;
int main(){
	string s1, s2;
	bool flag = true;
	cin >> s1 >> s2;
	int l1=s1.length(), l2=s2.length();
	if(l1 == l2){
		l1 = l1-1;
		for(int i=0; i<s1.length(); i++){
			if(s1[i] != s2[l1]){
				flag = false;
				break;
			}
			l1--;
		}
	}else{
		flag = false;
	}
 
	if(flag == true)
		cout << "YES";
	else
		cout << "NO";
	
	return 0;
}