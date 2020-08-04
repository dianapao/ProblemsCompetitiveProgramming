#include<bits/stdc++.h>
using namespace std;
int main(){
	long int n, k, min, sum=0, sumaux=0, ind; 
	cin >> n >> k;
	vector<int> height(n);

	for(long int i=0; i<n; i++){
		cin >> height[i];
		sum += height[i];
		if(i<k){
			min = sum;
			ind = 0;
		}
		if(i>=k){
			sumaux = height[i-k];
			sum -= sumaux;
			if(sum<min){
				ind=i;
				min = sum;
			}
		}
	}

	if(ind==0) cout << "1"<<endl; 
	else cout << ind-(k-2) << endl;

	return 0;
}