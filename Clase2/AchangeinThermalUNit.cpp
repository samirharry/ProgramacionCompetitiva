#include <bits/stdc++.h>
using namespace std;
typedef long long Long;

int main(){
    Long n;
    cin>>n;
    for(Long i=0;i<n;i++){
    double tempCels, varF;
    cin>>tempCels>>varF;
    cout<<"Case "<<i+1<<": "<<fixed <<setprecision(2) <<tempCels+5.0*varF/9.0 <<endl;
    }
    return 0;
}