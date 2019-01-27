#include <bits/stdc++.h>
#define debug(x) cout<<#x<<"=>"<<endl;
#define debugArray(arr,lon) for(int i=0;i<lon;i++) cout<<#arr<<"["<<i<<"] => "<<arr[i]<<endl;
using namespace std;
typedef long long Long;

bool isnVector(int elem,vector<int> vec){
    for(int i=0;i<vec.size();i++){

        if(vec[i]== elem ) return true;
    }

    return false;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> member;
    vector<int> respuesta;
    for(int i=0;i<n;i++){
        int aux;
        cin>>aux;
        if(!isnVector(aux,member) && respuesta.size() <k){
            respuesta.push_back(i+1);
        }
        member.push_back(aux);
    }
   
    if(respuesta.size() == k){
        cout<<"YES"<<endl;
        for(int i=0;i <respuesta.size();i++){
            cout<<respuesta[i]<<" ";
        }
        cout<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}