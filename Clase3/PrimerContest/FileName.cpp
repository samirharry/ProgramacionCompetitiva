#include <bits/stdc++.h>
#define debug(x) cout<<#x<<"=>"<<endl;
#define debugArray(arr,long) for(int i=0;i<long;i++) cout<<#arr<<"["<<i<<"] => "<<arr[i]<<endl;
using namespace std;
typedef long long Long;

int main(){
    int n;
    cin>>n;
     int cont =0;
     string aux;
     cin>>aux;
     for(int j=0;j<aux.size();j++){
         if(aux.substr(j,3) == "xxx"){
             aux.erase(j,1);
             cont++;
             j--;
      
            }
      
        
     }
     cout<<cont<<endl;
 

    return 0;
}