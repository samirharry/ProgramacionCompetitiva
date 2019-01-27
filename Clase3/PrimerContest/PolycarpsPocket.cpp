#include <bits/stdc++.h>
#define debug(x) cout<<#x<<"=>"<<endl;
#define debugArray(arr,long) for(int i=0;i<long;i++) cout<<#arr<<"["<<i<<"] => "<<arr[i]<<endl;
using namespace std;
typedef long long Long;

int main(){
    int n;
    cin>>n;
    vector<int> monedas;
    for(int i=0;i<n;i++){
        int aux;
        cin>>aux;
        monedas.push_back(aux);
    }
    sort(monedas.begin(),monedas.end());
    int rep=1;
    int aux =1;
    for(int i=1;i<monedas.size();i++){
        if(monedas[i]!=monedas[i-1]){
            if(aux>rep){
                rep=aux;
            }
            aux =1;
        }else{
            aux++;
        }
    }
    if(aux>rep) rep = aux;
    cout<<rep<<endl;
    return 0;
}