
#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    //int i;
    int j = 3;

    for(int i=10;; i--)
    {
        if(i>=1)
        {
             cout << i << " ";
        }

        if(i<1)
        {
            cout << j << " ";
            j++;
            if(j>10)
            {
                break;
            }
        }
    }


    return 0;
}
