#include <bits/stdc++.h>
using namespace std;
typedef long long Long;

int main(){
    Long n;
    cin>>n;
    
    for(Long i=0;i<n;i++){
        string aux;
        cin>>aux;
        if(aux.size()<=10){
            cout<<aux<<endl;
        }else{
            cout<<aux[0]<<aux.size()-2<<aux[aux.size()-1]<<endl;
        }
    }
    return 0;
}