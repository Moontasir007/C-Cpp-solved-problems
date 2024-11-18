#include<stdio.h>
#include <iostream>
using namespace std;

int main() {
    float total,price[]={4.00,4.50,5.00,2.00,1.50};
    int i,n;
    cin>>i>>n;
    total = price[i-1]*n;
    printf("Total: R$ %.2f\n",total)/n;


    return 0;
}
