#include <bits/stdc++.h>

using namespace std;

int main(){
    /* code */
    int piedras;
    cin>>piedras;
    int veces = (piedras/3)*2;
    if(piedras%3!=0){
        veces = veces +1;
    }
    std::cout<<veces<<endl;
    return 0;
}
