#include<iostream>
#include<memory>
using namespace std; 

class MyClass
{
    public:
    MyClass()
    {
        cout<<"Constructor Called"<<endl;
    }
    ~MyClass()
    {
        cout<<"Destrcutor Called"<<endl;
    }
    void display() const
    {
        cout<<"display MyClass"<<endl;
    }
};
int main()
{
    unique_ptr<MyClass>ptr1 = 
    make_unique<MyClass>();
    ptr1->display();
    //transfer ownership 
    unique_ptr<MyClass>ptr2=move(ptr1);
    //ptr1 empty, ptr2 - owner 
    //if ptr1 is empty - disply empty 
    if(!ptr1)
        cout<<"empty"<<endl;
    if(ptr2)
        ptr2->display();
}

//------------------------------------------------------


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
};
int main()
{
    shared_ptr<Rectangle>p1(new Rectangle(10,5));
    cout<<p1->area()<<endl;
    shared_ptr<Rectangle>p2;
    p2=p1;
    cout<<p2->area()<<endl;
    cout<<p1.use_count()<<endl;
    shared_ptr<Rectangle>p3;
    p3=p2;
    cout<<p1.use_count()<<endl;
    return 0;
}


//-------------------------------------------------------

#include<iostream>
#include<memory>
using namespace std; 

class MyClass
{
    public:
    MyClass()
    {
        cout<<"constructor called"<<endl;
    }
    ~MyClass()
    {
        cout<<"destructor called"<<endl;
    }
    void display()const
    {
    cout<<"display class called"<<endl;
    }
   };
   void useShared(shared_ptr<MyClass>ptr)
    {
        cout<<"inside this function"<<endl;
        ptr->display();
    }
int main()
{
    shared_ptr<MyClass>ptr1=make_shared<MyClass>();
    ptr1->display();
    //create another shared_ptr 
    shared_ptr<MyClass>ptr2=ptr1;
    ptr2->display();
    
    cout<<ptr1.use_count()<<endl;//2
    //pass the shared_ptr to a function 
    useShared(ptr1); 
    
     cout<<ptr1.use_count()<<endl;
    //p1 & p2 goes out of scope 
    //automatically
}

//-------------------------------------------------

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
};
int main(){
    shared_ptr<Rectangle>p1(new Rectangle(10,5));
    //create weak pointer
    weak_ptr<Rectangle>p2(p1);
    cout<<p1->area()<<endl;
    // cout<<p2->area()<<endl;
    cout<<p1.use_count()<<endl;
    return 0;
}


//----------------------------------------------------