#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
     int num, quant;
     int bases[16];
     for(int i=15; i>=0; i--){
          bases[i] = pow(2, i);
     }              
     
     while(scanf("%d", &num) && num!=0){
          quant = 0;
          while(num>0){
          int i=0;       
               while(true){
                    if(num<bases[i]){
                         num = num-bases[i-1];
                         quant++;                         
                          break;
                     }    
                    i++;  
               }          
          }
     printf("%d\n", quant);
     }

return 0;
}
