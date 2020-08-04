#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<vector<int>> v;
	vector<vector<int>>res;
	int n, aux;
	for(int i=0; i<3; i++){
		vector<int> cant;
		for(int j=0; j<3; j++){
			cin >> n;
			cant.push_back(n);
		}
		v.push_back(cant);	
	}

	for(int i=0; i<3; i++){
		vector<int> r;
		for(int j=0; j<3; j++){
			switch(j){
				case 0: if(i==0)
							aux = v[i][j] + v[i+1][j] + v[i][j+1];
						else if(i==1)
							aux = v[i][j] + v[i+1][j] + v[i-1][j] + v[i][j+1];
						else
							aux = v[i][j] + v[i-1][j] + v[i][j+1];
				break;
				case 1: if(i==0)
							aux = v[i][j] + v[i][j-1] + v[i][j+1] + v[i+1][j];
						else if(i==1)
							aux = v[i][j] + v[i][j+1] + v[i][j-1] + v[i+1][j] + v[i-1][j];
						else
							aux = v[i][j] + v[i][j-1] + v[i][j+1] + v[i-1][j];
				break;
				case 2: if(i==0)
							aux = v[i][j] + v[i][j-1] + v[i+1][j];
						else if(i==1)
							aux = v[i][j] + v[i][j-1] + v[i-1][j] + v[i+1][j];
						else
							aux = v[i][j] + v[i-1][j] + v[i][j-1];
				break;
			}
			if(aux%2!=0)
				r.push_back(0);
			else
				r.push_back(1);	
		}
		res.push_back(r);
	}

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout << res[i][j];
		}
		cout << endl;
	}

	return 0;
}