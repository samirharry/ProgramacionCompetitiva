#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin>>n;
    ll a=0,b=0,c=0;
    for(ll i=0;i<n;i++){
        ll aux;
        cin>>aux;
        a+=aux;
        cin>>aux;
        b+=aux;
        cin>>aux;
        c+=aux;
    }
    if(a==0&& b==0&&c==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}