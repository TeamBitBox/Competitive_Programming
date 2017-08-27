#include<bits/stdc++.h>

using namespace std;

int main(){
     int teste, i=0;
     scanf("%d",&teste);
     while(teste--){
	     int b,n, resultado;
	     scanf("%d %d", &b, &n);
	     if(n<=3){
	         resultado = b;
		 }
	     else if(n > 3 && n<=7){
	       resultado = (((n-3)*100)+b)*0.25 + (((n-3)*100)+b);
		 }
	     else if(n > 7){
	       resultado = (((n-3)*100)+b)*0.5 + (((n-3)*100)+b);
		 }
	
	     if(resultado == 1){
	          printf("Caso %d: %d ponto\n",i+1, resultado);
		 }
	     else{
	          printf("Caso %d: %d pontos\n",i+1, resultado);
		 }
	     i++;
	 }
return 0;
}
