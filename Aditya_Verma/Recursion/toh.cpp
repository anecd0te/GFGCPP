#include<bits/stdc++.h>
using namespace std;

void toh(string src, string dest, string help, int n){
    if(n == 1){
        cout<<"Move disc "<<n<<" from "<<src<<" to "<<dest<<endl;
        return;
    }
    toh(src, help, dest, n-1);
    cout<<"Move disc "<<n<<" from "<<src<<" to "<<dest<<endl;
    toh(help, dest, src, n-1);
}
using namespace std;
int main(){
    string src = "src", dest="dest", help="help";
    toh(src, dest, help, 3);
    return 0;
}