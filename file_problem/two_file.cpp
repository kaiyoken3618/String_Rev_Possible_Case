#include<bits/stdc++.h>
#include<string>
#include<algorithm>
#include<fstream>
#include<iostream>
using namespace std;

int main ()
{

    ifstream file1,file2;
    file1.open("file1.txt");
    int id1=0,total1 =0;

    while(file1 >> id1)
    {

        total1 = total1 + id1;
    }


    file2.open("file2.txt");
    int id2=0,total2 =0;

    while(file2 >> id2)
    {

        total2 = total2 + id2;
    }

    cout << "total:" << total1+total2 << endl;


    return 0;
}
