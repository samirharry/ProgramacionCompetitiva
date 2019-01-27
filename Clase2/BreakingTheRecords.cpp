#include <bits/stdc++.h>
using namespace std;
typedef long long Long;

int main(){
    Long a;
    cin>>a;
    Long aux;
    cin>>aux;
    Long min=aux,max=aux,vecesMin =0,vecesMax =0;
    for(Long i =1 ;i < a;i++){
        cin>>aux;
        if(aux<min){
            min=aux;
            vecesMin+=1;
        }else if(aux>max){
            max =aux;
            vecesMax+=1;
        }
    }
    cout<<vecesMax<<" "<<vecesMin;
        return 0;
}