#include<iostream>
using namespace std ;

int reverse(int n){
    int rev = 0 ;
    while(n > 0){
        int digit = n % 10 ;
        rev = rev * 10 + digit ;
        n = n / 10 ;
    }
    return rev ;
}


int main(){
    int n ;
    n = 1234 ;
    int rev = reverse(n) ;
    cout << "Reverse number is : " << rev << endl ;
}