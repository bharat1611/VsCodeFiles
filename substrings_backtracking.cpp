#include <bits/stdc++.h>
using namespace std;
vector<string> v;
void helper( vector<char> &ch, int k, string str, int i)
{
    if(str.length() == k)
    {
        v.push_back(str);
        return;
    }
    if(str == "")
        str += ch[i];

    
    for(int i = 0 ; i < ch.size(); i++)
    {
        if(str[i - 1] < ch[i])
            str += ch[i];
        
        helper(ch, k, str, i + 1);
        str.pop_back();
    }
}
int main()
{
    vector<char> ch = {'z','a', 'b', 'c', 'd', 'y'};
    int k = 3;
    helper(ch, k, "", 0);
    for(auto i : v)
        cout << i << " ";   
}