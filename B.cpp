#include<bits/stdc++.h>
using namespace std;
float vet[20]={1.0,2.0,4.0,8.0,16.0,32.0,64.0,128.0,256.0,512.0,1024.0,2048.0,4096.0,8192.0,16384.0,32768.0,65536.0,131072.0,262144.0,524288.0};

bool is_prime(int num){
     if(num==2) return true;
     if(num==1) return false;
     else{
          for(int i=2; i<=sqrt(num); i++){
               if((num%i)==0) return false;          
          }
          return true;
     }
}

bool is_thabit(float num){
     for(int i=0; i<20; i++){
          if(num == vet[i]) return true;
     }
     return false;
}

int main(){
     int teste,i=0;
     bool a,b;    
     scanf("%d",&teste);  

     while(teste--){
          int n;
          scanf("%d",&n);         
          a = is_prime(n);
          b = is_thabit((n+1)/3.0);
          if(a && !b) printf("Caso #%d: primo\n",i+1);
          else if(!a && b) printf("Caso #%d: numero de Thabit\n",i+1);
          else if(a && b) printf("Caso #%d: primo de Thabit\n",i+1);
          else printf("Caso #%d: composto e nao Thabit\n",i+1);

          i++;
     }
     return 0;
}
