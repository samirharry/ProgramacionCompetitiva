#include <iostream>

using namespace std;

int maximoOperacion(int a , int b , int c){
    int resultado = a+b+c;
    resultado = max(resultado,a*b*c);
    resultado = max(resultado,a*b+c);
    resultado = max(resultado,a+b*c);
    resultado = max(resultado,a*(b+c));
    resultado = max(resultado,(a+b)*c);
    return resultado;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<maximoOperacion(a,b,c)<<endl;
    return 0;
}