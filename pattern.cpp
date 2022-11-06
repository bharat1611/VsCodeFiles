#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 13;
    int count = 0;
    for(int i = 2; i <= n/2;i++)
    {
        if(n % i == 0)
            count++;
    }
    if(count > 2)
        cout << "Prime";

}