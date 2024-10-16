//LIBRERIAS PARA USAR LAS DIVERSAS FUNCIONES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    //GUARDAR VARIABLES
    double a,b,c, x1, x2,x;
    cin>>a>>b>>c;
    x1= (-1*b)+sqrt((b*b)-4*(a*c))/(2*a);
    x2= (-1*b)-sqrt((b*b)-4*(a*c))/(2*a);
    cout<<"X1= "<<x1<<endl;
    cout<<"X2= "<<x2<<endl;
    return 0;
}

