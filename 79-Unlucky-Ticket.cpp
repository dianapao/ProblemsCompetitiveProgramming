#include<bits/stdc++.h>
using namespace std;
int main(){
	bool flag=true, turn;
	int n, j=0, conv; cin >> n;
	string s, aux;
	cin >> s;
	vector<int> v1(n);
	vector<int> v2(n);

	for(int i=0; i<s.size(); i++){
		aux = s[i];
		conv = stoi(aux);
		if(i<s.size()/2) v1[i] = conv;
		else{ 
			v2[j] = conv;
			j++;
		}
	}

	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	if(v1[0]<v2[0]) turn = true;
	else if (v1[0]>v2[0]) turn = false;
	else flag = false;

	if(!flag) cout << "NO";
	else{
		if(turn){
			for(int i=1; i<n; i++){
				if(v1[i] >= v2[i]){
					flag = false;
					break;
				}
			}
		}else{
			for(int i=1; i<n; i++){
				if(v1[i] <= v2[i]){
					flag = false;
					break;
				}
			}
		}
		if(flag) cout << "YES";
		else cout << "NO";
		
	}
	
	return 0;
}