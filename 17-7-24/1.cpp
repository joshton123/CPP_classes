#include<iostream>
using namespace std;
int main()
{
int var = 20; 		
int *ip; 		
ip = &var; 		
printf("%x\n", &var ); 
printf("%x\n", ip ); 
printf("%d\n", *ip ); 
   return 0;
}


// ------ NULL POINTER --------//
#include<iostream>
using namespace std;
int main()
{
    int *ptr = nullptr;
    cout<<ptr<<endl;
   return 0;
}


// ------ Wild POINTER --------//
#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    cout<<ptr<<endl;
   return 0;
}


// -- swap 2 pointers without using third variable -- //


// Auto pointer
#include<iostream>
#include<memory>
using namespace std;
int main()
{
   auto_ptr <int> p1(new int(10)) ; //p1 owns the int 10
   cout<<"P1 owns : "<<*p1<<endl;
   auto_ptr<int> p2(p1); //p2 owns now
   cout<<"P2 owns : "<<*p2<<endl;
   cout<<"P1 owns : "<<*p1<<endl;
   return 0;
}


// Unique_ptr
#include <iostream>
#include<memory> //
using namespace std;
void display(unique_ptr<int>& ptr) {
    if (ptr) {
        cout << "Value: " << *ptr <<endl;
    } else {
        cout << "Pointer is null." <<endl;
    }
}
int main() 
{
    // Creating a unique_ptr and initializing it with a new integer
    unique_ptr<int> ptr1(new int(10));

    display(ptr1); // Output: Value: 10

    // Transfer ownership using std::move
    unique_ptr<int> ptr2 = move(ptr1);
    display(ptr2); 
    
    display(ptr1); // Output: Pointer is NULL

}


