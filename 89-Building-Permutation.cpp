#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	long long int subtract, tot=0;
	cin >> n;
	vector<int> numbers(n);
	for(int i=0; i<n; i++){
		cin >> numbers[i];
	}
	sort(numbers.begin(), numbers.end());
	for(int i=0; i<n; i++){
		subtract = abs(numbers[i]-(i+1));
		tot+=subtract;
	}
	cout << tot <<endl;
	return 0;
}