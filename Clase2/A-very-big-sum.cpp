#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll a;
    cin >>a;
    ll sum=0;
    for(ll i=0;i<a;i++){
        ll aux;
        cin>>aux;
        sum+=aux;
    }
    cout<< sum;
    return 0;
}