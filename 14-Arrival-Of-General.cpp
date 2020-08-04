#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, greater, smallest, posG, posS, i;

	cin >> n;
	vector <int> heights(n,0);

	for(i=0; i<n; i++){
		cin >> heights[i];

		if(i==0){
			greater = heights[0];
			smallest = heights[0];
			posS = 0;
			posG = 0;
		}
		if(heights[i] > greater){
			greater = heights[i];
			posG = i;
		}
		if(heights[i] <= smallest){
			smallest = heights[i];
			posS = i;
		}
	} 
	i=n-1;

	if(posG < posS){
		cout << (posG+(i-posS));
	}else if(posG > posS){
		cout << (posG + (i-1-posS) );
	}

	return 0;
}