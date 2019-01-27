#include <bits/stdc++.h>
using namespace std;
typedef long long Long;

int main(){

    string n;
    cin>>n;
    int min=0,max=0;
    for(Long i=0;i<n.size();i++){
        if(n[i]>='a' && n[i]<='z'){
            min ++;
        }else{
            max++;
        }
    }
    if(min>=max){
        for(Long i=0;i<n.size();i++){
            n[i] = tolower(n[i]);
        }
    }else{
        for(Long i=0;i<n.size();i++){
            n[i] = toupper(n[i]);
        }
    }
    cout<<n<<endl;

    return 0;
}