#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x >= 2000)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}