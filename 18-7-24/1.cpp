// #include<iostream>
// #include<memory>
// using namespace std; 

// class MyClass
// {
//     public:
//     MyClass()
//     {
//         cout<<"Constructor Called"<<endl;
//     }
//     ~MyClass()
//     {
//         cout<<"Destrcutor Called"<<endl;
//     }
//     void display() const
//     {
//         cout<<"display MyClass"<<endl;
//     }
// };
// int main()
// {
//     unique_ptr<MyClass>ptr1 = 
//     make_unique<MyClass>();
//     ptr1->display();
//     //transfer ownership 
//     unique_ptr<MyClass>ptr2=move(ptr1);
//     //ptr1 empty, ptr2 - owner 
//     //if ptr1 is empty - disply empty 
//     if(!ptr1)
//         cout<<"empty"<<endl;
//     if(ptr2)
//         ptr2->display();
// }



#include<iostream>
#include<memory>
using namespace std;
class Rectangle
{
    int length , breadth;
    public:
        Rectangle(int l , int b){
            length=l ;
            breadth = b;
        }
        int area(){
            return length*breadth;
        }
}
int main()
{
   return 0;
}