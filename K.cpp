#include<bits/stdc++.h>
using namespace std;
#define max 250

int main(){
     int n, p, e, f;
     int formas[65];
     bool flag = true;
     memset(formas, -1, sizeof(formas));
     
     scanf("%d", &n);
     for(int i=0; i < n; i++){
          scanf("%d", &f); // F = FORMA
          scanf("%d", &formas[f]);          
     }

     scanf("%d", &p); // PEDIDOS
    
     int num_forma, qtd_par;
     for(int i=0; i<p; i++){
      scanf("%d", &e); // FORMAS P ENCOMENDAR
          for(int j=0; j<e; j++){
          scanf("%d %d", &num_forma, &qtd_par);
          if(formas[num_forma]==-1) flag = false;
          else{
                formas[num_forma] = formas[num_forma] - qtd_par;
                   if(formas[num_forma]<0) flag = false;       
     
          }         
               
          }  
     }
     if(flag==false) printf("A fabrica nao consegue atender todos os pedidos\n");
     else printf("A fabrica consegue atender todos os pedidos\n");
     
return 0;
}
