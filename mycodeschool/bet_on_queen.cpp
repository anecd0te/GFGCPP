#include<bits/stdc++.h>
using namespace std;
int cash = 100;
void play(int bet){
    char c[3] = {'J', 'Q', 'K'};
    srand(time(NULL));
    for(int i = 0;i<5;i++){
        int x = rand() % 3;
        int y = rand() % 3;
        swap(c[x], c[y]);
    }
    int pred;
    cout<<"Enter your prediction between position 1 and 3:"<<endl;
    cin>>pred;
    if(c[pred-1]=='Q'){
        cash += bet*3;
        cout<<"Congrats!!!! you won, you won "<<bet*3<<" and your available cash is "<<cash<<endl;
    }
    else{
        cash-=bet;
        cout<<"You lost!! available cash is "<<cash<<endl;
    }
}
int main(){
    int bet;
    while(cash>0){
        cout<<"Enter your betting amount."<<endl;
        cin>>bet;
        if(bet==0 || bet>cash){
            cout<<"Incorrect amount, Game over";
            break;
        }
        play(bet);
    }
    return 0;
}