/*Find the largest word in the dictionary by deleting some characters of a given string
  INPUT={"ALE","APPLE","MONKEY","PLEA"}
  S= "ABPCPLEA"
  ANSWER="APPLE" BY REMOVING B,C,A. */

  #include <bits/stdc++.h>
  using namespace std;
      string res="";
      void check(string d,string s)
      {
          int i=0;
          int j=0;
          while(i<d.size() && j<s.size())
          {
              if(d[i]==s[j])
              {
                  i++;
                  j++;
              }
              else
               j++;
          }
          if(i==d.size() && res.size()<d.size())
          {
              res=d;
          }
      }
     string LongestWord(vector<string> d,string S) {

       sort(d.begin(),d.end());
       for(int i=0;i<4;i++)
       cout << d[i];
       for(string c:d)
       {
           check(c,S);
       }
       return res;
      }
  int main()
  {
      vector<string> dict
          = { "ale", "apple", "monkey", "plea" };
      string str = "abpcplea";
      cout << LongestWord(dict, str) << endl;
      return 0;
  }
