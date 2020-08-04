#include<bits/stdc++.h>
/*Notemos por ej lo sig: 7,2,3 (Xsignifica las personas por delante, O en num max donde puede pararse)
	X X | O | | |
	1 2 3 4 5 6 7	como vemos puede pararse en las pos: 4,5,6 o 7 y no en 3 porque tendría 4 personas atras
					y eso ya no se puede, pero si puede tener menos de 3 por a lo MÁS son 3*/
using namespace std;
int main(){
	int n,a,b, maxim;
	cin >> n >> a >> b;
	maxim = n-b;
	int x = max(a+1,maxim);
	maxim = n - x + 1;
	cout << maxim;
	return 0;
}