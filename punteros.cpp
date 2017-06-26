#include <iostream>
#include <string>
using namespace std;
void changePo(float *p1, float *p2){
    float q=1;
    float *z;
    
    z=p1;
    p1=p2;
    p2=z;

    z=&q;
    *z=*p1;          // value pointed to by p1 = 10
    *p1 = *p2;         // value pointed to by p2 = value pointed to by p1
    *p2 = *z;   
};
int main(){
    float x=3.2, y=4.5,q=1;
    float * p1, * p2, *z;
    p1 = &x;  // p1 = address of firstvalue
    p2 = &y; // p2 = address of secondvalue
    cout<<p1<<" "<<p2<<endl;
    z=p1;
    p1=p2;
    p2=z;
    cout<<p1<<" "<<p2<<endl;
    cout<<*p1<<" "<<*p2<<endl;
    z=&q;
    *z=*p1;          // value pointed to by p1 = 10
    *p1 = *p2;         // value pointed to by p2 = value pointed to by p1
    *p2 = *z;   
    cout<<*p1<<" "<<*p2<<endl;
    return 0;
}