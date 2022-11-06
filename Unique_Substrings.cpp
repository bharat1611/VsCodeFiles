#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "abcd";
    unordered_set<string> st;

    for(int i = 0 ; i < s.length(); i++)
    {
        string temp = "";
        for(int j = i ; j < s.length(); j++)
        {
            temp += s[j];
            st.insert(temp);
        }
    }
    for(auto i : st)
        cout << i << " " ;
    cout << st.size();
}