#include<bits/stdc++.h>
using namespace std;
class Father{
    protected:
        int height;
    public:
        Father(int h){
            cout<<"Contructor of father called"<<endl;
            height = h;
        }
        int displayFHeight(){
            return height;
        }
};
class Mother{
    public:
        string skinColor;
        Mother(){
            cout<<"Constructor of Mother called"<<endl;
        }
};
class Child : public Father, public Mother{
    public:
        Child(int x, string iskinColor) : Father(x){
            cout<<"Child class constructor"<<endl;
            skinColor = iskinColor;
        }
        void display(){
            cout<<"Height is "<<height<<" and skincolor is "<<skinColor<<endl;
        }
};
// class GrandChild : public Child{
//     public:
//         int h;
//         GrandChild(int ih) : Child(ih){
//             cout<<"Grandchild class constructor"<<endl;
//         }
//         void gcDisplay(){
//             display();
//         }
// };
int main(){
    Child cd(177, "Brown");
    // GrandChild gc(178);
    // gc.gcDisplay();
    cd.display();
}