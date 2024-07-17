#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   less<int>ls;
   cout<<boolalpha;
   cout<<ls(10,20)<<endl;
   return 0;
}

// when u use extern keyword , the declaration and initialization should not be in the same line .

// #include <stdio.h>  
// int main()  
// {  
// extern int a; 
// printf("%d",a);  
// }  
// int a = 20;

// /////////

extern int a;  
int a = 10;   
#include <stdio.h>  
int main()  
{  
printf("%d",a);  
}  
int a = 20;


// size of pointer : 8bytes
// size of double pointer : 8bytes