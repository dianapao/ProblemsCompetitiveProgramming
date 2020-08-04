#include<bits/stdc++.h>
using namespace std;
int main(){
	bool flag=false, w, b;
	string s;
	vector<vector<char>> cell;
	for(int i=0; i<4; i++){
		cin >> s;
		vector<char> aux;
		for(int j=0; j<4; j++){
			aux.push_back(s[j]);
		}
		cell.push_back(aux);
	}

	int totBlack, totWhite;
	for(int i=1; i<4; i++){
		for(int j=1; j<4; j++){
			totWhite=0, totBlack=0;
			if(cell[i][j]=='.') totWhite++;
			else totBlack++;

			if(cell[i][j-1] == '.') totWhite++;
			else totBlack++;

			if(cell[i-1][j] == '.') totWhite++;
			else totBlack++;

			if(cell[i-1][j-1] == '.') totWhite++;
			else totBlack++;

			if(totBlack>=3 || totWhite>=3){
				flag = true;
				break;
			} 
		}
	}

	if(flag) cout << "YES";
	else cout << "NO";

	return 0;
}