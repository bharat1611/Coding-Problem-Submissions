#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int isPrime(int n) {                // function to check if number is prime 
        if(n == 0 || n == 1)            // mentioned that 1 is not prime
            return 0;
        for(int i = 2; i <= n/2; i++){
            if(n % i == 0) return 0;    // if not prime, return 0
        }   
        return 1;                       // if prime, return 1
    }
    int countOnes(int n){               // function to count number if 1's
        int count = 0;
        while(n != 0) {                 
            if((n&1)) count++;          // if 1, then increment count 
            n >>= 1;                    // right shift n
        }
        return count;                   // return count
    }
    int countPrimeSetBits(int left, int right) {
        int count = 0;
        for(int i = left; i <= right; i++){
           // calculating the number of inputs having prime number of 1's
            count = count + isPrime(countOnes(i));
        }
        return count;                      // return count       
    }
};