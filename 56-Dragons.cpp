#include<bits/stdc++.h>
using namespace std;
int main(){
	int s, n, data;
	bool flag=true;
	cin >> s >> n;

	vector<int> force;
	vector<int> bonus;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<2; j++){
			cin >> data;
			force.push_back(data);
			cin >> data;
			bonus.push_back(data);
		}
	}

	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-1; j++){
			if(force[j] > force[j+1]){
				swap(force[j], force[j+1]);
				swap(bonus[j],bonus[j+1]);
			}	
		}
	}

	for(int i=0; i<n; i++){
		if(force[i] >= s){
			flag = false;
			break;
		}else{
			s += bonus[i];
		}
	}

	if(flag)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}