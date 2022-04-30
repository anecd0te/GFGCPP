#include<bits/stdc++.h>
using namespace std;
void getMaze(int sr,int sc, int dr, int dc, string op){
    if(sr==dr && sc==dc){
        cout<<op<<endl;
        return;
    }
    if(sr>dr || sc>dc)
        return;
    getMaze(sr, sc+1, dr, dc, op+"h");
    getMaze(sr+1, sc, dr, dc, op+"v");
}
int main(){
    int r, c;
    cin>>r>>c;
    getMaze(0,0,r-1,c-1,"");
    return 0;
}