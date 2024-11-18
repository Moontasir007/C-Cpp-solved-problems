#include <bits/stdc++.h>
using namespace std;

int main() {

    float a,b,c,area,perimeter;
    cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a){
        perimeter = a+b+c;
        printf("Perimetro = %.1f",perimeter);
    }
    else{
        area = (0.5*c)*(a+b);
        printf("Area = %.1f",area);
    }

    return 0;
}
