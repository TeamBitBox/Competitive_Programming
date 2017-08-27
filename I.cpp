#include<bits/stdc++.h>

using namespace std;

int main(){
     
     int qtd, doces, soma;
     while(scanf("%d", &qtd) && qtd!=0){
          soma = 0;
          for(int i=0; i<qtd; i++){
               scanf("%d", &doces);
               soma = soma + doces;
          }
          if(soma==0) printf("nao\n");  
          else if(soma%2==0) printf("sim\n");
          else printf("nao\n");         
     }

return 0;
}
