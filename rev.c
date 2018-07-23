#include <bits/stdc++.h>
using namespace std;
 

void reverseStr(string& str)
{
    int a = str.length();
 
    
    for (int i = 0; i < a/ 2; i++)
        swap(str[i], str[a - i - 1]);
}
 

int main()
{
    string str = "geeksforgeeks";
    reverseStr(str);
    cout << str;
    return 0;
}
