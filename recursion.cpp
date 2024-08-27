#include<iostream>
#include<string>
using namespace std;

//BASIC C++ PROGRAM FOR RECURSION IMPLEMENTATION
void reachome(int src, int dest)
{
    cout<<"source"<<" "<<src<<"destination"<<" "<<dest<<endl;
    if(src == dest)
    {
        cout<<"reached home"<<endl;
        return ;
    }
    src++;
    reachome(src, dest);
}

//FINDING THE nTH TERM IN THE FIBONACCI SERIES
int fib(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;
     int ans  = fib(n-1)+fib(n-2);
     return ans;
}

//PRINTING THE DIGITS IN WORDS USING RECURSION
void saydigit(int n, string arr[])
{
    if(n==0)
    return ;

    int digit=n%10;
    n=n/10;
    saydigit(n, arr);
    cout<<arr[digit]<<endl;
}

//CHECKING WTHETHER THE GIVEN ARRAY IS SORTED OR NOT USING RECURSION
bool issorted(int *arr, int n)
{
    if(n==0||n==1)
    return true;
    if(arr[0]>arr[1])
    {
    cout<<"array is not  sorted"<<endl;
    return false;
    }
    else 
    {
    bool remainingpart = issorted(arr +1,n-1);
    cout<<"is sortd"<<endl;
    return remainingpart ;
    
    }
}

// FINDING THE SUM OF ARRAY ELEMENTS USING RECURSION
    int sumof(int *arr, int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return arr[0];
    else {
    int remaining = sumof(arr+1, n-1);
    int sum = arr[0] + remaining; 
    return sum;
    }
}

// PERFORMING LINEAR SEARCH USING RECURSION
bool linearsearch(int *arr, int n,int k)
{
    if(n==0)
    {
        return 0;
    }
    if(arr[0]==k)
    {
        return 1;
    }
    else
    {
    bool remaining=linearsearch(arr+1, n-1, k);
    return remaining ;
    }
}

//PERFORMING BINARYSEARCH USING RECURSION
bool binarysearch(int *arr, int s,int e,int k)
{
    int mid=s + (e-s)/2;
    //base case
    //element not found
    if(s>e)
    return 0;
    if(arr[mid] == k)
    return 1;

    if(arr[mid]>k)
    return binarysearch(arr,s,mid-1,k);
    else 
    return  binarysearch(arr,mid+1,e,k);
}

//FINDING REVERSE OF A STRING USING RECURSION
 void reverseofstring(string& str, int n, int i)
{
    //cout<<str<<endl;
    if(n<=i)
    return ;
    swap(str[i],str[n]);
    reverseofstring(str, n-1,i+1);
    //cout<<str<<endl;
}

//FINDING THE FACTORIAL OF NUMBER USING RECURSION
int fact(int n)
{
    if(n==0||n==1)
    return 1;
    else
    return n*fact(n-1);

}

//CHECKING WHETHER THE GIVEN STRING IS A PALINDROME OR NOT USING RECURSION
bool checkpalindrome(string str,int n,int i)
{
    if(n<i)
    return 1 ;
    if(str[i]!=str[n])
    return 0;
    else 
    return checkpalindrome(str, i+1,n-1);
}
//FINDING THE POWER USING RECURSION
int findpower(int a,int b)
{
    if(b==0)
    return 1;
    if(b==1)
    return a;
    if(b%2==0)
    return findpower(a, b/2 )*findpower(a, b/2);
    else
    return a*findpower(a, b/2)*findpower(a, b/2 );
}

//BUBBLESORTING ALGORITHM USING RECURSION
void bubblesort(int *arr, int n)
{
    if(n==0||n==1)
    return ;
    else{
        for(int i=0;i<n-1;i++)
        {
        if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);
        }
    }
    bubblesort(arr,n-1);

}
void merge(int)
void mergesot(int * arr, int s,int e)
{
    if(s>e)
    return ;

    mergesort( arr, s, mid);
    mergesort(arr, mid+1,e);
    merge(arr, s, e);
}


int main()
{
    //IMPLEMENTATION OF SOURCE AND DESTINATION PROBLEM
    /*int src,dest;
    cout<<"enter the source"<<endl;
    cin>>src;
    cout<<"enter the destination"<<endl;
    cin>>dest;
    reachome(src, dest);
    */

//IMPLEMENTATION OF FIBONACCI SERIES
      /* int ans= fib(8);
    cout<<ans<<endl; */

// IMPLEMENTATION OF SAYDIGIT PROBLEM
      /*int n;
      cin>>n; 
 string arr[10]={"zero""one","two","three",
                "four","five","six","seven",
                 "eight","nine"};
 saydigit(n, arr);
 */

// BINARYSEARCH IMPLEMENTATION
 /*int arr[6] = {1,2,3,4,5,7};
 int size = 6;
 int len=sizeof(arr)/sizeof(arr[0]);
 int s=0,e =len;
 int k=6;
//issorted(arr, size);
bool b = binarysearch(arr, s, e, k);
if(b)
{
    cout<<"element found"<<endl;
}
else
cout<<"element not found"<<endl;
return 0;
*/


//IMPLEMENTATION OF REVERSE OF STRING 

/*
string str="shiva";
int n=str.length()-1;
reverseofstring(str, n, 0);
cout<<str<<endl;
return 0;
*/


//IMPLEMENTATION OF FACTORIAL OF NUMBER
/*
int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int a =fact(n);
cout<<a<<endl;
*/

//IMPLEMENTATION OF CHECKPALINDROME

/*string str;
cout<<"enter the string"<<endl;
cin>>str;
int n=str.length()-1;
bool b =checkpalindrome(str, n, 0);
if(b)
cout<<"it is  palindrome";
else
cout<<"it is not  palindrome";
return 0;
*/


// FINDING THE POWER USING RECURSION
/*
int a,b;
cout<<"enter the base value"<<endl;
cin>>a;
cout<<"enter the power value"<<endl;
cin>>b;
int h =findpower(a, b);
cout<<h<<endl;
return 0;
*/
int arr[5]={1,6,2,7,3};
bubblesort(arr, 5);
for(int i=0;i<5;i++)
cout<<arr[i];
}
