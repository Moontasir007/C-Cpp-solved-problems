#include<bits/stdc++.h>
using namespace std;

int main() {
    double a[3];
    for (int i = 0; i < 3; i++) {
        double x;
        scanf("%lf", &x);
        a[i] = x;
    }
    sort(a, a + 3);
    int C = a[0];
    int B = a[1];
    int A = a[2];
    if (A >= B + C)
        cout<<"NAO FORMA TRIANGULO"<<endl;
    else{
        if((A*A) == (B*B)+(C*C))
        cout<<"TRIANGULO RETANGULO"<<endl;
        if((A*A) > (B*B)+(C*C))
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
        if((A*A) < (B*B)+(C*C))
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    }

    if(A==B && A==C)
        cout<<"TRIANGULO EQUILATERO"<<endl;
    else if((A==B && A!=C) || (B==C && A!=B) || (A==C && A!=B))
        cout<<"TRIANGULO ISOSCELES"<<endl;

    return 0;
}
