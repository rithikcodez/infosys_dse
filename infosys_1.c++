//Given a string, find its first non-repeating character
  //INPUT :"ABCDEABCDS"
  //ANSWER: "E"

#include<bits/stdc++.h>
using namespace std;
int main()
{
  string input;
  map<char,int> mp;
  cin >> input;
  long int n = input.length();
  for(int i=0;i<n;i++)
  mp[input[i]]++;
  for(int i=0;i<n;i++)
  {
    if(mp[input[i]] == 1)
    {
      cout << input[i];
      break;
    }
  }

}
