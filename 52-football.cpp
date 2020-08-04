#include<bits/stdc++.h>
using namespace std;
int main(){
	string players;
	int play1=0, play2=0;
	bool flag, final=true;
	
	getline(cin, players);

	for(int i=0; i<players.size(); i++){
		if(players[i]=='1'){
			play2 = 0;
			flag = true;
		}else{
			play1 = 0;
			flag = false;
		}

		if(players[i]=='1' && flag==true)
			play1++;
		else if(players[i]=='0' && flag==false)
			play2++;
		
		if(play1>=7 || play2>=7){
			final = false;
			break;
		}
	}
	
	if(final)
		cout << "NO";
	else
		cout << "YES";
	return 0;
}