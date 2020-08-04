#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n, m, num, max=0;
	cin >> n >> m;
	vector<int> v1;
	for(int i=0; i<n; i++){
		cin >> num;
		if(num < 0){
			v1.push_back(abs(num));
		}
	}
 
	int Izq, Der, Medio, temp;
	for(int i=1; i<v1.size(); i++) {
	  temp = v1[i];
	  Izq = 0;
	  Der = i-1;
	  while(Izq <= Der){
	    Medio = (Izq+Der)/2;
	    if (temp < v1[Medio])
	      Der = Medio - 1;
	    else
	      Izq = Medio + 1;
	  }
	  for (int j=i-1; j>=Izq; j--){
	    v1[j+1]=v1[j];
	  }
	  v1[Izq] = temp;
	}
 
 
	temp=0;
	for(int i=(v1.size()-1); i>=0; i--){
		if(temp<m){
			max = max + v1[i];
			temp++;
		}else{
			break;
		}
		
	}
 
	cout << max;
	return 0;
}