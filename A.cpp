#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
     int teste, r;
     float Asobra, lado;
     
     scanf("%d",&teste);

    while(teste--){
          scanf("%d",&r);
          lado = sqrt(2*r*r);
          Asobra = (M_PI*r*r) - lado*lado;
          printf("%.3f %.3f\n", lado, Asobra);  
	}
	return 0;
}
