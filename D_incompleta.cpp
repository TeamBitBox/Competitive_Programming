#include<bits/stdc++.h>
using namespace std;
float raizes[2], c, d, e ,f;

void bhaskara(float a, float b, float c){
     float delta = (b*b)-(4*a*c);
     raizes[0] = ((-1)*b + sqrt(delta))/(2*a);
     raizes[1] = ((-1)*b - sqrt(delta))/(2*a);
}
float valor_funcao(float x){
     return (c*pow(x,3)) + (d*pow(x, 2)) + (e*x) + (f);     

}
void derivada(float a, float b, float c){
     bhaskara(3*a, 2*b, c);
}
vector<float> provaveis;

int main(){
     float inicio, fim, aux, menor, maior,tam=2;
     provaveis.clear();
     scanf("%f %f", &inicio, &fim);
     scanf("%f %f %f %f", &c, &d, &e, &f);
     provaveis.push_back(valor_funcao(inicio));
     provaveis.push_back(valor_funcao(fim));
     derivada(c, d, e);
     if(raizes[0]>=inicio && raizes[0]<=fim){
     provaveis.push_back(raizes[0]);
         tam++;
          }
    if(raizes[1]>=inicio && raizes[1]<=fim){
     provaveis.push_back(raizes[1]);
     tam++;
   }
  
     for(int i=0; i<tam-1; i++){
          for(int j=i+1; j<tam; j++){
               if(provaveis[j]<provaveis[i]){
                    aux = provaveis[i];
                    provaveis[i] = provaveis[j];
                    provaveis[j] = aux;
               }
          }     
     }   
          
     for(int i=0; i<4; i++) printf("%.3f ", provaveis[i]);
     printf("Minimo local: %.3f\n", provaveis[0]);
     printf("Maximo local: %.3f\n", provaveis[tam-1]);

return 0;
}
