#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
 int main()
 {
  int i,arr[20],arr2[20],j,no,k=0;

  cout<<"Enter Size of array: ";
  cin>>no;
  cout<<"Enter any "<<no<<" num in array: ";
  for(i=0;i<no;i++)
  {
   cin>>arr[i];
  }
  cout<<"Dublicate Values are: ";
  for(i=0; i<no; i++)
   {
    for(j=i+1;j<no;j++)
    {
    if(arr[i]==arr[j])
    {
     arr2[k] = arr[i];
     if(arr2[k]!=arr2[k-1])
     {
         cout << arr2[k] << endl;
         k++;
     }
    }
   }
   }




  return 0;
 }
