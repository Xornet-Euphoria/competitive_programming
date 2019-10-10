#include <cmath>

using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)
#define repr(i, a, b) for(int i = a; i < b; i++)

template<typename T>
bool is_prime(T p) {
    if (p == 1) {
        return false;
    }
    T sq_p = (T) sqrt(p);
    repr(i, 2, sq_p + 1) {
        if (p % i == 0) {
            return false;
        }
    }

    return true;
}