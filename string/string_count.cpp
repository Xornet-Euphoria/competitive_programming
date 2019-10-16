#include <string>

using namespace std;

int cnt_str(string needle, string haystack)
{
    int cnt = 0;
    for (int i = 0; i + needle.size() <= haystack.size(); i++)
    {
        if (haystack.substr(i, needle.size()) == needle)
        {
            cnt++;
        }
    }

    return cnt;
}