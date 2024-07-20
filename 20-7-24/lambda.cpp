// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> numbers = {3, 1, 4, 1, 5, 9};
    
//     vector<int> squared;
//     transform(numbers.begin(), numbers.end(), back_inserter(squared), [](int x) {
//         return x * x;
//     });

//     cout<<"squared numbers :"<<endl;
//     for (int num : squared) {
//         cout << num << " ";
//     }
//     cout << endl;

//     sort(numbers.begin() ,numbers.end(), [](int a,int b){
//         return b>a;
//     });

//     cout<<"Sorted numbers :"<<endl;
//     for (int num : numbers) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }



//-------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,2,3,4,5};
    int multiplier = 10;

    for_each(nums.begin() , nums.end() , [multiplier](int &n){
        n *= multiplier;
    });
    
    cout<<"Multiplied numbers :"<<endl;
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    cout << endl;

    return 0;
}
