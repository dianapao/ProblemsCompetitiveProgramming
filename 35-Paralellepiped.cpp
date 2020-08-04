#include <bits/stdc++.h>
using namespace std;
int main(){
	int s1, s2, s3, a, b, c;
	cin >> s1 >> s2 >> s3;
	a = sqrt(s1*s2/s3);
	b = sqrt(s2*s3/s1);
	c = sqrt(s1*s3/s2);

	s1 = a*4 + b*4 + c*4;
	cout << s1;
	return 0;
}