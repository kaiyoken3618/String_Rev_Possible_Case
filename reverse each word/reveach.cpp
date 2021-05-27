#include <bits/stdc++.h>
#include <string>
#include <iostream>
using namespace std;

// reverses individual words of a string
void reverseWords(char *str)
{
    int pos = 0;

    strcat(str," ");

 for(int j=0; j<=strlen(str) ;j++)
 {
     if(str[j] == ' ' && str[j+1]!= ' ')
     {
         for(int i = j; i>=pos; i--)
        {
            cout << str[i];

            pos = j+1;
        }
     }

 }

}

int main()
{
    char str[25];
    gets(str);

    reverseWords(str);
    return 0;
}
