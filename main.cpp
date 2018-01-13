#include <iostream>
#include <string>
#include "BigInt.h"
#include "AlgorithmBigInt.h"
using namespace std;
string toString(long x){ //chuyển từ số nguyên sang kiểu string
        stringstream ss;
        ss<<x;
        string res;
        ss>>res;
        return res;
}

int main(){
    //cout<< BigInt("0") + BigInt("-2")<<endl;
    BigInt a("100"), b("10000");
    cout<<(a^b)<<endl;

    return 0;
}
