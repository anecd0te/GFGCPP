#include<iostream>
using namespace std;
/*int add(int x,int y){
    return x+y;
}
float add(float x,float y){
    return x+y;
}
double add(double x, double y){
    return x+y;
}*/
template<typename T>
T add(T x,T y){
    return x+y;
}
int main(){
    cout<<add<float>(3.5,4);
    return 0;
}