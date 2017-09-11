#include<bits/stdc++.h>
#define MAX 100000
using namespace std;

int x[MAX], y[MAX];

float M(int pos, float X){
    float z = (y[pos] / (x[pos] - X));
    z >= 0 ? z = z : z = (z*(-1));
    return z;
}

int main(){
    int n, xa, xb, a=0, b=0;
    scanf("%d %d %d", &n, &xa, &xb);

    for(int i=0; i<n; ++i) scanf("%d %d", &x[i], &y[i]);

    for(int i=0; i<n; i++){
        a = 0;
        for(int j=0; j<n; j++){
            if(M(i,(float)xa) > M(j,(float)xa) && M(i,(float)xb) > M(j,(float)xb)){
                a+=1;
                if(a>b){
					b=a;
				}  
            }
        }
    }

    printf("%d\n", b+1);

    return 0;
}
