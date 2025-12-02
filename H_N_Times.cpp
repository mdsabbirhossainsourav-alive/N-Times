#include <iostream>
using namespace std;
void fun(int n,char c)
{
    for (int i=0; i<n; i++)
    {
        cout << c << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        int n;
        char c;
        cin >> n >> c;
        fun(n,c);
    }
    return 0;
}
