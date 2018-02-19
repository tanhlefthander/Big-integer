#include <iostream>
#include "AlgorithmBigInt.h"
using namespace std;
int main(){
    string a("9999"), b("111");
    cout<<add(a,b)<<endl;
    cout<<sub(a,b)<<endl;
    cout<<mul(a,b)<<endl;
    cout<<divide(a,b)<<endl;
    cout<<pow(a,b)<<endl;
    return 0;
}
