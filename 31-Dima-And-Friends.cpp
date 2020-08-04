#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, num, sum=0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> num;
		sum += num;
	}

	num=0;
	for(int i=sum+1; i<sum+6; i++){
		if(i%(n+1) != 1)
			num++;
	}

	cout << num;
	return 0;
}