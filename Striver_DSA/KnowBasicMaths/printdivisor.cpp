#include<iostream>
#include<vector>
#include<iterator>
using namespace std ;


vector<int> divisor(int n){
    vector<int> div ;
    for(int i = 1 ; i <= n ; i++){
        if(n % i == 0){
            div.push_back(i);
        }
    }
    return div ;
}

int main(){
    int n = 12 ;
    vector<int> div  = divisor(n) ;

    cout << "Divisor of " << n << "is : " ;
    for(auto i : div){
        cout << i << " " ;
    }

}