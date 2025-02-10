#include <iostream>
#include <string>
using namespace std;

void sortString(string &s)
{
    int n = s.size();
    cout<<"before sorting "<<s<<endl;
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (s[j] > s[j + 1])
            {
                swap(s[j], s[j + 1]);
            }
        }
    }
    cout << "after sorting: " << s << endl;
}

int main()
{
    string s1;
    cin >> s1;
    sortString(s1);
    return 0;
}
