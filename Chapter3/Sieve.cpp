#include <iostream>
#include <vector>
#include <ranges>
#include <algorithm>
#include <cmath>

std::vector<int> sieve_of_era () {
    bool marked[100] = {false};
    std::vector<int> primes;
    int p_changed = true;
    int p = 2;
    while (p < 100 && p_changed) {
        p_changed = false;
        std::cout<< "p = " << p << std::endl;
        for (int i = 2*p; i < 100; i += p) {
            marked[i] = true;
        }
        for (int i = p + 1; i < 100; i++) {
            if (!marked[i]) {
                p = i;
                p_changed = true;
                break;
            }
        }
    }
    for (int i = 2; i <= 100; i++) {
        if (!marked[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}

int main() {
    sieve_of_era();
 }






