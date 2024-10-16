//EL CODIGO PIDE TRES NUMEROS DE LOS CUALES POSTERIORMENTE HACE UNA FORMULA CUADRATICA EN LA CUAL SE USA UN RAIZ,SE SUMAN O RESTAN LOS ELEMENTOS
//CON EL USO DEL DOUBLE LAS VARIABLES SE GUARDAN DE UNA FORMA QUE MAS ADELANTE SE PODRAN PONER DECIMALES, EL CIN ESTA PARA PEDIR AL USUARIO
//SIERTO NUMEROS LOS CUALES ESTARAN EN LA FORMULA CUADRATICA
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a,b,c, x1, x2,x;
    cin>>a>>b>>c;
    x1= (-1*b)+sqrt((b*b)-4*(a*c))/(2*a);
    x2= (-1*b)-sqrt((b*b)-4*(a*c))/(2*a);
    cout<<"X1= "<<x1<<endl;
    cout<<"X2= "<<x2<<endl;
    return 0;
}

