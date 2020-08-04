#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m, num;
	long long int v=0, p=0;
	cin >> n; 
	
	typedef map<int, int> mapa;			//(key, element)
	mapa numbers;

	for(int i=0; i<n; i++){
		cin >> num;
		numbers[num] = i;
	}

	mapa::iterator pos;
	cin >> m;
	for(int i=0; i<m; i++){
		cin >> num;
		pos = numbers.find(num);				//busca el elemento con la key num
		v = v + pos->second +1; 
		p = p + n - pos->second; 
	}
	cout << v << " " << p;

	return 0;
}