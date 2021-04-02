#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector<string> permu_char(vector<char> v, int digit, bool rev = false)
{
    vector<string> ret;
    if (digit == 1)
    {
        for (auto c : v)
        {
            ret.push_back(string(1, c));
        }

        return ret;
    }

    vector<string> tmp;
    for (auto c : v)
    {
        tmp = permu_char(v, digit - 1);
        for (auto s : tmp)
        {
            ret.push_back(string(1, c) + s);
        }
    }

    if (rev) {
        reverse(ret.begin(), ret.end());
    }

    return ret;
}