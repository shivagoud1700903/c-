#include<iostream>
#include<climits>
using namespace std;
bool leapyear( int n)
{
    if(n%400==0)
     return true;
     if(n%100==0)
     return false;
     if(n%4==0)
     return true;
     else
     return false;
}
//checking prime number or not
bool isprime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return false;
        else 
        return true;
    }
}

//checking palindrome or not
bool ispalindrome(int n)
{
    int ans =0;
    int temp=n;
    while(temp!=0)
    {
        ans=(ans*10)+(temp%10);
        temp= temp/10;
    }
    return (ans==n);

}
void  findMinMax(int *arr, int n)
{
int mini = arr[0];
int maxi = arr[0];
for(int i=0;i<n;i++)
{
    if(arr[i]<mini)
    {
        mini = arr[i];
    }
    else if(arr[i]>maxi)
    {
        maxi= arr[i];
    }
    
}
    cout<<mini<<endl;
    cout<<maxi<<endl;
}

void find2smallest(int *arr,int n)
{
    int first,second;
    first=second = INT_MAX;
    if(n<2)
    {
        cout<<"invalid input"<<endl;
        cout<<"fuckoff"<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
     if(arr[i]<first)
     {
      second =first;
      first = arr[i];
     }
     else if(arr[i]<second && arr[i]!=first)
     {
        second = arr[i];
     }

    }
    cout<<second<<endl;
}

int main()
{
   /* int n,m;
   cout<<"enter the year"<<endl;
     cin>>n;
    if(leapyear(n))
    {
        cout<<"lear year"<<endl;
    }
    else{
        cout<<"not a leap year"<<endl;
    }*/
    
    /*CHECKING PRIME NUMBER OR NOT
    cout<<"enter num to checked"<<endl;
    cin>>m;
    if(isprime(m))
    cout<<"prime number"<<endl;
    else
    cout<<"not a prime number"<<endl;
    */
   //PALINDROME IMPLEMENTATION
   /*
   int n;
   cout<<"enter number to check whether palindrome or not"<<endl;
   cin>>n;
   if(ispalindrome(n))
   cout<<"it is a palindrome"<<endl;
   else
   cout<<"it is not a palindrome"<<endl;
   return 0;
   */
  //finding minmax of array implementation
  /*int n;
  cout<<"enter the size of an array"<<endl;
  cin>>n;
  int* arr = new int[n];
  cout<<"enter the array elements"<<endl;
   for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"array elements are"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<endl;
  }
  cout<<"min and max elements are "<<endl;
  findMinMax(arr, n);

return 0;
*/
//finding the second smallest element in an array
cout<<"enter the size of an array"<<endl;
int n;
cin>>n;
int *arr =new int[n];
cout<<"enter the elements of an array"<<endl;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<"array elements are"<<endl;
for(int i=0;i<n;i++)
{
    cout<<arr[i];
}
cout<<"second smallest element of an array is"<<endl;
find2smallest(arr, n);
return 0;
}
