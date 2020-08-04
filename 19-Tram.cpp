#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n, pasengers=0, entra, sale, max=0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> sale >> entra;
		pasengers = pasengers - sale + entra;
		if(pasengers > max){
			max = pasengers;
		}
	}
 
	cout << max;
	return 0;
}