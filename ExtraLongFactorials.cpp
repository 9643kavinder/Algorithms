// EXTRA LONG FACTORIALS
#include<iostream>
using namespace std;
#define MAX 500
int multiply(int x, int res[], int res_size){
    int carry = 0;
    for(int i=0;i<res_size;i++){
        int prod = res[i]*x + carry;
        // put the last digit in the res[];
        res[i] = prod%10;
        // else in the carry
        carry = prod/10;
    }
    while(carry){
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}
void factorial(int n){
    int res[MAX];
    res[0] = 1;
    int res_size = 1;
    for(int i=2;i<=n;i++){
        res_size = multiply(i, res, res_size);
    }
    for(int i=res_size-1;i>=0;i--){
        cout<<res[i];
    }
}

int main(){
    factorial(100);

    return 0;
}
