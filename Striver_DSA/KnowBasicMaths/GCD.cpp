#include<iostream>
using namespace std ;

int GCD(int a , int b){
    int gcd = 1 ;
    for(int i = 1 ; i <= min(a,b) ; i++){
        if(a % i == 0 && b % i == 0){
            gcd = i ;
        }
    }
    return gcd ;
}

int main(){
    int n1 = 20 , n2 = 30 ;
    int gcd = GCD(n1 , n2);
    cout << "GCD of n1 and n2 is : " << gcd << endl ;
}
