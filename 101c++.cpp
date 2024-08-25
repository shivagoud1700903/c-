#include<iostream>
#include<cstring>
using namespace std;

//CHECKING WHETHER THE GIVE STRING IS PALINDROME OR NOT

string checkpalindrome( string s)
{
for(int i=0;i<s.length()/2;i++)
{
if(s[i]!=s[s.length()-i-1])
{
return "it is not a palindrome";
}
}
return "it is a palindrome";
}

//SWAPPING OF TWO NUMBERS WITHOUT USING THIRD VARIABLE

  void swaping(int x,int y)
  {
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<x<<endl;
    cout<<y<<endl;
  }

//CHECKING WHETHER THE GIVEN TWO STRINGS ARE ANAGRAMS OR NOT


bool anagramornot(char* s1, char* s2)
{
    #define CHARS 255
    int count1[CHARS] ={0};
    int count2[CHARS] ={0};
    for(int i=0;s1[i]&&s2[i];i++)
    {
        count1[s1[i]]++;
        count2[s2[i]]++;
    }

for(int i=0;i<CHARS;i++)
   {
    if(count1[i]!=count2[i])
     return false;
   }
return true;
}

int strlen(char* str)
{
  if(*str == '\0')
  return 0;
  else
  return 1 + strlen(str+1);
}
int sumofstring(string  str)
{
  for(int i=0;str[i]!='\0';i++)
  {
    int sum;
   if(isdigit(str[i]))
   {
   sum = str[i] + '0';
   }
   return sum;
  }
}
int main()
{
  /*
  //ANAGRAM IMPLEMENTATION
   int m,n;
   cout<<"enter the size of 1st string"<<endl;
   cin>>m;
   char s1[m];
   cout<<"enter the first string"<<endl;
   for(int i=0;i<m;i++)
   cin>>s1[i];
   cout<<"enter the size of 2nd string"<<endl;
   cin>>n;
   char s2[n];
   cout<<"enter the second string"<<endl;
   for(int i=0;i<n;i++)
    cin>>s2[i];
    bool b = anagramornot(s1, s2);
    cout<<b<<endl;
    */

   /*
   //PALINDROME IMPLEMENTATION

   cout<<"enter the string"<<endl;
   string s;
   cin>>s;
   string b =checkpalindrome(s);
   cout<<b;
   return 0;
   */

  //SWAPPING IMPLEMENTATION
/*
  int x,y;
  cout<<"enter x,y values"<<endl;
  cin>>x;
  cin>>y;
  swaping(x, y);
*/

//FINDING THE LENGTH OF THE STRING 
/*
 char str[6] = "shiva";
int n= strlen(str);
 cout<<n<<endl;
 */
// IMPLEMENTTING THE 
    
}