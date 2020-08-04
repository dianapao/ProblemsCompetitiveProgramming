#include <bits/stdc++.h>
using namespace std;
int main(){
	bool flag = true;
	int n, num; cin >> n;

	vector<int> frequency(8,0);

	for(int i=0; i<n; i++){
		cin >> num;
		frequency[num]++;
	}

	if(frequency[5]>0 || frequency[7]>0){
		flag = false;
	}
	if(flag){
		int aux1, aux2;
		aux1 = frequency[4] + frequency[6];
		if(frequency[1] != aux1) flag = false;
		if(frequency[2] < frequency[4]) flag = false;
		if(flag){
			for(int i=0; i<frequency[4]; i++){
				cout << "1 2 4" << endl;
				frequency[2]--;
			}
			if(frequency[2]+frequency[3] == frequency[6]){
				while(frequency[2]!=0){
					cout << "1 2 6" << endl;
					frequency[2]--;
				}
				while(frequency[3] != 0){
					cout << "1 3 6" << endl;
					frequency[3]--;
				}
			}else{
				flag = false;
			}
		}	
	}

	if(!flag){
		cout << "-1"<<endl;
	}
	
	
	return 0;
}