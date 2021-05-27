
#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

void rev(string &str)
{
    int n = str.size();

    for(int i=0;i<n/2;i++)
     {
        swap(str[i], str[n-i-1]);

     }


}
int main()
{
     string s;
     cout << "Enter any string:";
     cin >> s;
     rev(s);
     cout << s;

     return 0;
}
