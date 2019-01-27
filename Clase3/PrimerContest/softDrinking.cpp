    #include <bits/stdc++.h>
    #define debug(x) cout<<#x<<"=>"<<endl;
    #define debugArray(arr,long) for(int i=0;i<long;i++) cout<<#arr<<"["<<i<<"] => "<<arr[i]<<endl;
    using namespace std;
    typedef long long Long;
    
    int main(){
        int n,k,l,c,d,p,nl,np;
        cin>> n>>k>>l>>c>>d>>p>>nl>>np;
        int totalMili = (k*l)/(n*nl);
        int totalLimon = (c*d)/n;
        int totalSalt = p/(n*np);

        cout<<min(totalLimon,min(totalMili,totalSalt))<<endl;

        return 0;
    }