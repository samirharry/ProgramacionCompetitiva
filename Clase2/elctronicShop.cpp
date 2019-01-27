#include <bits/stdc++.h>
using namespace std;
typedef long long Long;

int main(){
    Long a,b,c;
    cin>>a>>b>>c;   
    vector<Long> keyboards,usb;
    for(Long i=0;i<b;i++){
        Long aux;
        cin>>aux;
        keyboards.push_back(aux);
    }
    for(Long i=0;i<c;i++){
        Long aux;
        cin>>aux;
        usb.push_back(aux);
    }
    sort(keyboards.begin(),keyboards.end());
    sort(usb.begin(),usb.end());
    Long answer =-1;
    for(Long i=b-1;i>=0;i--){
        for(Long j=c-1;j>=0;j--){
            if(keyboards[i]+usb[j]>a){
                continue;
            }else{
                if(keyboards[i]+usb[j] > answer){
                    answer = keyboards[i]+usb[j];
                    break;
                }
            }
        }
    }
    cout<<answer<<endl;
    return 0;
}