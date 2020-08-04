#include <bits/stdc++.h>
using namespace std;
/*Observamos que si n es par la primera mitad serán impares y la segunda mitad pares; si es  impar, los primeros
n/2+1 serán impares y n/2 serán pares. Debemos ver si K está en la primera o segunda mitad.
Si K está en la primer mitad, será un número impar yse calcula: (la posición*2) -1 para hacer impar.
Si es k está en la 2da mitad, será un num par y se calcula: la posición y le quitamos toda la primer mitad para
hacerlo en terminos de 1,2,3... como si fuera el indice de inicio y se multiplica por 2*/
int main(){
	long long int n, k, mid;
	 cin >> n;
	 cin >> k;
	 mid = (n/2)+ (n%2);
	 if(k<=mid){
	 	cout <<(k*2-1);
	 }else{
	 	cout << (k-mid)*2;
	 }
	return 0;
}