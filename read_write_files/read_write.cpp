#include <bits/stdc++.h>
#include<string>
#include<fstream>

using namespace std;

int main()
{
    ifstream infile;
    string s;
    ofstream outfile;

    infile.open("input.txt");
    outfile.open("output.txt");

    if(infile.fail())
    {
        cerr << "Error opening file" << endl;
    }
    else
    {


    while(!infile.eof())
    {
        infile >> s;
        outfile << s << endl;
    }
    cout << "written in outout file is successful";
    }
    outfile.close();
    infile.close();
    return 0;
}
