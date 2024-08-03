#include<iostream>
//PROGRAM FOR FRONT TO BACK TRANSFORMATION OF A STRING WITHOUT TAKING AN INPUT(A-Z,B-Y,C-X.....)
using namespace std;
 string convert(string s){

        string ans= " ";
       for(int i=0;i<s.length();i++)
       {
           if(s[i]>='a'&&s[i]<='z')
           {
               char rev=122-(s[i]-97);
               ans += rev;
           }
           else if(s[i]>='A'&&s[i]<='Z')
           {
               char rev= 90-(s[i]-65);
               ans += rev;
           }
       }
       cout<<ans<<"\n";
       return ans;
    }
int main()
{
   convert("HELLO");
   return 0;

}

