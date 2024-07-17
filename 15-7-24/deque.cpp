//dequeue with resize() function 
#include <iostream>
#include <deque>
using namespace std;

int main() {
 deque<int> dq;

    // Add elements to the deque
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_front(0);

    // Access elements
 cout << "Front element: " <<dq.front()<<endl;
 cout << "Back element: " <<dq.back()<<endl;
 cout << "Element at index 1: "<<dq[1]<<endl;

    // Remove elements
    dq.pop_front();
 cout << "Front element after pop_front: " 
 << dq
 
//clear the deque 
    dq.clear();
    if(dq.empty())
    {
        cout<<"deque is empty"<<endl;
    }

}