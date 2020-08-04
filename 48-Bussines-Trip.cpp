#include<bits/stdc++.h>
using namespace std;
int main(){
	int grow, aux=0, days=0;
	vector<int> months(12);
	cin >> grow;
	for(int i=0; i<12; i++){
		cin >> months[i];
	}
	sort(months.begin(), months.end());

	int i=months.size()-1;
	while(aux<grow){
		aux += months[i];
		i--;
		days++;
	}
	if(days<=12)
		cout << days;
	else
		cout << "-1";
	return 0;
}