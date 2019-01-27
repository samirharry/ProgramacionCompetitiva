#include <bits/stdc++.h>
using namespace std;
typedef long long Long;

int main(){
    string str;
    cin>>str;
    Long i=0;
    while(i<str.size()){
        str[i] = tolower(str[i]);
        if(str[i] == 'a' || str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'|| str[i] == 'y'){
            str.erase(str.begin()+i);
        }
        else{
            str.insert(i,".");
            i=i+2;
        }
    }
    cout<<str<<endl;
    return 0;
}