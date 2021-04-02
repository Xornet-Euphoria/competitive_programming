#include <cassert>
#include <string>
#include <algorithm>

using namespace std;

template<typename T>
string str_base(T n, int base)
{
    assert(n >= 0 && base > 1 & base <= 10);

    if (n == 0)
    {
        return "0";
    }

    string ret = "";
    while (n > 0)
    {
        ret += to_string(n % base);
        n /= base;
    }

    reverse(ret.begin(), ret.end());

    return ret;
}