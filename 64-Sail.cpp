#include <bits/stdc++.h>
using namespace std;
int main(){
	bool flag=false;
	string dir;
	int t, time=0, final;
	long long int sx, sy, ex, ey, n=0, s=0, e=0, w=0;
	cin >> t >> sx >> sy >> ex >> ey;

	sx = ex - sx;		
	sy = ey - sy;		
	if(sx >= 0)			//si es positivo significa que va a n veces al E, si no n veces a W
		e = sx;
	else 
		w = abs(sx);
	if(sy >= 0)			//si es positivo significa que va n ceses al N, si no n veces a S
		n = sy;
	else
		s = abs(sy);

	
	cin >> dir;

	for(int i=0; i<dir.size(); i++){
		if( dir[i] == 'N')
			n--;
		else if(  dir[i] == 'S')
			s--;
		else if( dir[i] == 'E')
			e--;
		else
			w--;

		if(n<=0 && s<=0 && w<=0 && e<=0){
			time = i+1;
			flag = true;
			break;
		}
	}

	if(flag)
		cout << time <<endl;
	else{
		cout << "-1";
	}
	return 0;
}