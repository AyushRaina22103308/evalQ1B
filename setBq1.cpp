#include <iostream>
#include <vector>
using namespace std;

void findPrimes(int n){
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for(int i = 2; i * i <= n; ++i){
        if(is_prime[i]){
            for(int j = i * i; j <= n; j += i){
                is_prime[j] = false;
            }
        }
    }
    cout<<"Prime numbers up to "<<n<<" are: ";
    for(int i = 2; i <= n; ++i){
        if(is_prime[i]){
            cout<<i<<" ";
        }
    }
}

int main(){
    int num;
    cout<<"Enter an integer: ";
    cin>>num;

    if(num < 2){
        cout<<"There are no prime numbers less than 2." <<endl;
        return 1;
    }
    findPrimes(num);
    return 0;
}
