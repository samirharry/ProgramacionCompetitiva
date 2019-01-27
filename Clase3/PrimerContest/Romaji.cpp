#include <bits/stdc++.h>
#define debug(x) cout<<#x<<"=>"<<endl;
#define debugArray(arr,long) for(int i=0;i<long;i++) cout<<#arr<<"["<<i<<"] => "<<arr[i]<<endl;
using namespace std;
typedef long long Long;

bool isVowel(string s){
    if (s=="a"||s=="e"||s=="i"||s=="o"||s=="u"){
        return true;
    }
    return false;
}

int main(){
    string aux;
    cin>>aux;
    bool resp= true;
    for(int i=0;i<aux.size();i++){
        if(aux.substr(i,1)=="n") continue;
        if(!isVowel(aux.substr(i,1))){
            if(!isVowel(aux.substr(i+1,1))){
                resp = false;
                break;
            }        
        }
    }
    if(resp){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}