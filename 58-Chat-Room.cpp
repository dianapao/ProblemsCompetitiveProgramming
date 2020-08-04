#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	bool h=false, e=false, l1=false, l2=false, o=false;
	getline(cin, s);
	for(int i=0; i<s.size();i++){
		if(s[i]=='h' && e==false){
			h = true;
		}
		else if(s[i]=='e' && h==true){
			e = true;
		}
		else if(s[i]=='l' && h==true && e==true && l1==true){
			l2 = true;
		}
		else if(s[i]=='l' && h==true && e==true && l2==false){
			l1 = true;
		}
		else if(s[i]=='o' && h==true && e==true && l1==true && l2==true){
			o = true;
		}
	}

	if(h==true && e==true && l1==true && l2==true && o==true)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}