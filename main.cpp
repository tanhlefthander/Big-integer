#include <iostream>
#include <string>
#include "BigInt.h"
using namespace std;
int main(){
    //cout<< BigInt("0") + BigInt("-2")<<endl;
    BigInt a("9"), b("99");
    cout<<a<<" "<<b<<endl;
    cout<<(a+b)<<endl;
    cout<<(a-b)<<endl;
    cout<<(a*b)<<endl;
    cout<<(a/b)<<endl;
    cout<<(a^b)<<endl;
    //cout<<(a%b)<<endl;
    return 0;
}
