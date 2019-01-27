#include <bits/stdc++.h>
#define debug(x) cout<<#x<<"=>"<<endl;
#define debugArray(arr,long) for(int i=0;i<long;i++) cout<<#arr<<"["<<i<<"] => "<<arr[i]<<endl;
using namespace std;
typedef long long Long;

int main(){
    double a,b,c;
    cin>>a>>b>>c;
    if(a ==0){
        if(b==0){
            if(c==0){
            cout<<-1<<endl;

            }else{
            cout<<0<<endl;

            }
        }else{
            if(c ==0){
                cout<<1<<endl;
                cout<<fixed <<setprecision(7)<<0.00000<<endl;
            }else{
            c = -1*c;
            cout<<1<<endl;
            cout<<fixed <<setprecision(7) <<(c)/(b)<<endl;
            }
        }
    }else if (b==0){
        if(c==0){
            cout<<1<<endl;
            cout<<fixed <<setprecision(7)<<0.00000<<endl;
        }
        else if((-1*c)/a>=0.0){
            cout<<2<<endl;
            cout<<fixed<<setprecision(7)<<sqrt((-1*c)/a)*-1<<endl;
            cout<<fixed<<setprecision(7)<<sqrt((-1*c)/a)<<endl;
        }else{
            cout<<0<<endl;
        }

    }else if (c==0){
        cout<<2<<endl;
        cout<<fixed<<setprecision(7)<<min(0.00,(-1*b)/a)<<endl;
        cout<<fixed<<setprecision(7)<<max(0.00,(-1*b)/a)<<endl;
    }else{
        if(pow(b,2.0)-4*a*c>0){
            cout<<2<<endl;
            cout<<fixed<<setprecision(7)<<min(((-1*b)-sqrt(pow(b,2.0)-4*a*c))/(2*a),((-1*b)+sqrt(pow(b,2.0)-4*a*c))/(2*a))<<endl;
            cout<<fixed<<setprecision(7)<<max(((-1*b)-sqrt(pow(b,2.0)-4*a*c))/(2*a),((-1*b)+sqrt(pow(b,2.0)-4*a*c))/(2*a))<<endl;
        }else if(pow(b,2.0)-4*a*c<0){
            cout<<0<<endl;
        }else{
            cout<<1<<endl;
            cout<<fixed<<setprecision(7)<<(-1*b)/(2*a)<<endl;
        }
    }

    return 0;
}