#include <bits/stdc++.h>
using namespace std;
typedef long long Long;

int main(){
    Long a;
    cin>>a;
    for(Long i=0;i<a;i++){
        for(Long j=0;j<a;j++){
            if(i+j<a-1) cout<<" ";
            else cout<<"#";
        }
        cout<<endl;
    }
    return 0;
}