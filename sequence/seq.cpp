#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int j=10;
    cout << " " << j;
    for(int i = 0;;i++)

    {
       j = j - 1;
       cout << " " << j;

       if(j==1)
       {
            j = 3;
            cout << " " << j;
            while(j<10)
            {
                j = j + 1;
                cout << " " << j;

            }
       }
       if(j == 10)
       {
           break;
       }

    }
    return 0;
}
