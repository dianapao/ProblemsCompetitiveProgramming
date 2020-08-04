#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int n, num, min, i, pos;
	bool flag=true;
 
	cin >> n;
 
	for(i=0; i<n; i++){
		cin >> num;
		if(i==0){
			min = num;
			pos = i;
		}else{
			if(num<min){
				min = num;
				flag = true;
				pos = i;
			}else if(num==min){
				flag = false;
			}
		}
	}
 
	if(flag==true)
		cout << pos+1;
	else
		cout << "Still Rozdil";
	
	return 0;
}