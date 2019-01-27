#include <bits/stdc++.h>
using namespace std;
typedef long long Long;

int main(){
    Long n;
    cin>>n;
    Long rightDiagon =0,leftDiagon =0;
    for(Long i=0;i<n;i++){
        for(Long j=0;j<n;j++){
            Long aux;
            cin>>aux;
            if(i==j){
                rightDiagon+=aux;
            }
            if(i+j == n-1){
                leftDiagon+=aux;
            }
        }
    }

    Long respuesta = abs(leftDiagon-rightDiagon);
    cout<<respuesta<<endl;
    return 0;
}