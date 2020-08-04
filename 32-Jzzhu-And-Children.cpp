#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m, num, aux1, aux2, i;
	cin >> n >> m;

	vector<int> a1;
	vector<int> a2(n,0);
	vector<int> indices(n);

	for(i=0; i<n; i++){
		cin >> num;
		a1.push_back(num);
		indices[i] = i;
	}

	i = 0;
	while(!a1.empty()){
		a2[i] += m;
		if(a2[i] >= a1[i]){
			a1.erase(a1.begin()+i);
			a2.erase(a2.begin()+i);
			indices.erase(indices.begin()+i);
		}else{
			aux1 = a1[i];
			a1.erase(a1.begin()+i);
			a1.push_back(aux1);

			aux1 = a2[i];
			a2.erase(a2.begin()+i);
			a2.push_back(aux1);

			aux1 = indices[i];
			indices.erase(indices.begin()+i);
			indices.push_back(aux1);
		}	
		aux2 = indices[i] +1;
	}

	cout << aux2;

	
	return 0;
}