#include<bits/stdc++.h>
using namespace std;

int main(){
     vector<int> fila;
     int qtd;
     while(scanf("%d", &qtd)==1){
          fila.clear();
          int a;
          int aux = 0;
          scanf("%d", &a);
          fila.push_back(a);
          aux = aux+fila.back();
                              
          for(int i=1; i<qtd; i++){     
               scanf("%d", &a);
               if(a<=fila.back() && fila.size()<6){
                    fila.push_back(a);   
                    aux = aux + fila.back();     
               } 
          }
          printf("Massa empilhada: %d kg\n", aux);
     }

return 0;
}
