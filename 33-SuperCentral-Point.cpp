#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, num, tot=0;
	cin >> n;
	vector< vector<int> > coordinate;

	for(int i=0; i<n; i++){
		vector<int> v;
		for(int j=0; j<2; j++){
			cin >> num;
			v.push_back(num);
		}
		coordinate.push_back(v);
	}

	int x, y;
	for(int i=0; i<coordinate.size(); i++){
		x = coordinate[i][0];		//leemos X
		y = coordinate[i][1];		//leemos Y de la coordenada a comparar
		vector<bool> flags(4,false);
		for(int j=0; j<coordinate.size();j++){
			if(i==j)
				continue;
			n = coordinate[j][0];		//leemos X
			num = coordinate[j][1];		//leemos Y de la coornada comparada
			if(n>x && num==y)
				flags[0] = true;
			else if(n<x && num==y)
				flags[1] = true;
			else if(n==x && num<y)
				flags[2] = true;
			else if(n==x && num>y)
				flags[3] = true;
		}
		if(flags[0] && flags[1] && flags[2] && flags[3])
			tot++;
	}

	cout << tot;

	return 0;
}