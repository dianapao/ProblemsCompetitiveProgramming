#include <iostream>
#include <vector>
using namespace std;
int main(){
	int tot=0;
	vector<int> v1(4);
	vector<int> v2;
	for(int i=0; i<4; i++){
		cin >> v1[i];
	}
 
	for(int i=0; i<v1.size(); i++){
		for(int j=0; j< v1.size(); j++){
			if( v1[i] == v1[j] && (i!=j)){
				v1.erase(v1.begin()+j);
			}
		}
	}
	
	cout << (4-v1.size());
 
	return 0;
}