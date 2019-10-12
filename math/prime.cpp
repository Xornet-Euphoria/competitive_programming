#include <cmath>
#include <map>

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

template<typename T>
map<T, int> factorize(T a) {
    if (is_prime(a)) {
        map<T, int> tmp;
        tmp.insert(make_pair(a, 1));
        return tmp;
    }
    
    map<T, int> ret;
    int cnt;
    T num = 2;
    if (a % num == 0) {
        ret[num] = 0;
    }

    while (a > 1) {
        if (a % num == 0) {
            ret[num]++;
            a /= num;
        } else {
            num++;
            if (a % num == 0) {
                ret[num] = 0;
            }
        }
    }

    return ret;
}