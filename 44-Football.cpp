#include <bits/stdc++.h>
using namespace std;
int main(){
	typedef map<string,int> mp;
 
    mp mapa;
 
    int n, max=0;
    string key, gan;
 
    cin >> n;
    for(int i=0; i<n; i++){
    	cin >> key;
    	mapa[key] += 1;
    }
 
    mp::iterator pos;
 
    for (pos = mapa.begin(); pos != mapa.end(); ++pos) {
        if((pos->second) > max){
        	max = pos->second;
        	key = pos->first;
        }
    }
 
    cout <<  key;
	return 0;
}