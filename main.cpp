#include <iostream>
#include <cmath>
#include <vector>
bool isPrime(int a);
std::vector<int> getPrimes(int a);
int main() {
    isPrime(4);
    for (int i=4; i<100; i+=2){
        std::vector<int> primes = getPrimes(i);
        for (int j=0; j< primes.size();j++){
            for (int k = j; k < primes.size();k++){
                if (primes.at(k)+primes.at(j)== i) {
                    std::cout<< "Even Integer  " << i << " = " << primes.at(j) << " + " <<primes.at(k) <<std::endl;
                }
            }
        }
    }
    return 0;
}
std::vector<int> getPrimes(int a){
    std::vector<int> res;
    for (int i=1; i< a;i++){
       if (isPrime(i)) res.push_back(i);
    }
    return res;
}
bool isPrime(int a){
    if (a==1) return false;
    if (a==2) return true;
    for (int i=2; i<= sqrt(a); i++){
        if (a%i ==0) return false;
    }
    return true;
}
