// recursion 
#include <bits/stdc++.h> 
using namespace std; 
  
int fib(int n) { 
    if (n <= 1) 
        return n; 
    return fib(n - 1) + fib(n - 2); 
}    
  
int main() { 
    int n;
    cin>>n; 
    cout << fib(n); 
    getchar(); 
    return 0; 
}   


//---------------------------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec={5,2,9,1,5,6};
    sort(vec.begin() , vec.end() , greater<int>());

    return 0;
}


//------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;

struct person {
    string name;
    int age;
};

// Comparison function to sort by age
bool compareAge(const person &a, const person &b) {
    return a.age < b.age;
}

int main() {
    vector<person> people = {
        {"Alice", 35}, {"Bob", 31}, {"Santa", 30}
    };

    // Sort the vector using compareAge function
    sort(people.begin(), people.end(), compareAge);

    // Print sorted people
    for (const auto &p : people) {
        cout << p.name << " " << p.age << endl;
    }

    return 0;
}

//----------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

struct person {
    string name;
    int age;
};

// Comparison function to sort by age
bool compareAge(const person &a, const person &b) {
    return a.age < b.age;
}

int main() {
    vector<person> people = {
        {"Alice", 30}, {"Bob", 31}, {"Santa", 35}, {"Charlie", 28}, {"Eve", 32}
    };

    // Partially sort the first 3 elements
    partial_sort(people.begin(), people.begin() + 3, people.end(), compareAge);

    // Print the partially sorted people
    for (const auto &p : people) {
        cout << p.name << " " << p.age << endl;
    }

    return 0;
}
