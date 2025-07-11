#include <iostream>

int calculate_xor(int L, int R) {
    int result = 0;

    for (int i = L; i <= R; ++i) {
        for (int j = i; j <= R; ++j) {
            if (i + j <= L + R) {
                result ^= (i + j);
            }
        }
    }

    return result;
}

int main() {
    int T;
    std::cin >> T;

    for (int i = 0; i < T; ++i) {
        int L, R;
        std::cin >> L >> R;

        int result = calculate_xor(L, R);
        std::cout << result << std::endl;
    }

    return 0;
}


#include <iostream>
#include <vector>
#include <cmath>

bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int count_aesthetic_pairs(int L, int R) {
    int count = 0;
    for (int X = L; X <= R; ++X) {
        int sum = 0;
        for (int Y = X; Y <= R; ++Y) {
            sum += Y;
            if (is_prime(sum)) {
                ++count;
            }
        }
    }
    return count;
}

int main() {
    int L, R;
    std::cin >> L >> R;
    
    int result = count_aesthetic_pairs(L, R);
    std::cout << result << std::endl;

    return 0;
}


#include <iostream>
#include <vector>
#include <cmath>

const int MAX_N = 1e6 + 5; // Adjust this based on the maximum input constraint

std::vector<bool> is_prime(MAX_N, true);

void sieve_of_eratosthenes() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAX_N; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAX_N; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int count_aesthetic_pairs(int L, int R) {
    int count = 0;
    int sum = 0;

    for (int X = L; X <= R; ++X) {
        sum += X;
        if (is_prime[sum]) {
            count += R - X + 1;
        }
    }

    return count;
}

int main() {
    sieve_of_eratosthenes();

    int L, R;
    std::cin >> L >> R;
    
    int result = count_aesthetic_pairs(L, R);
    std::cout << result << std::endl;

    return 0;
}
