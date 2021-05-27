//Divisor of 3 from 200 to 1 (Write a function that will print all the multiples of 3 between 1-200 ( in reverse order ))

#include<bits/stdc++.h>
#include <string>
#include<algorithm>

using namespace std;
#define limit 200

int main()
{
    int arr[limit];int j =0;
    for(int i=1; i<=200;i++)
    {
        if(i%3==0)
        {
            arr[j] = i;
            j++;
        }
    }
     for(int k=j-1; k>=0;k--)
    {
        cout << arr[k] << endl;
    }
    return 0;
}
