#include<bits/stdc++.h>
using namespace std;
double nrs(double n){
        double x = n;
        while(true){
            double root = 0.5*(x+n/x);
            if(abs(root-x)<0.5)
                return root;
            x = root;
        }
}
int main(){
    double n =40 ;
    double ans = nrs(n);
    cout<<ans;
    return 0;

}