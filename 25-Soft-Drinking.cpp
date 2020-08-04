#include <bits/stdc++.h>
using namespace std;
int main(){

	int n, k, l, c, d, p, nl, np, toast, limes, salt;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	toast = k*l/nl;
	limes = c*d;
	salt = p/np;

	if(toast<=limes && toast<= salt)
		k=toast;
	else if(limes<=toast && limes <= salt)
		k = limes;
	else
		k = salt;

	k = k/n;
	cout << k;

	return 0;
}