#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v = {1, 1, 2, 3};
    int n = v.size();  // n is initially the size of the vector

    
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    cout << endl;

    v.push_back(4);  

    n = v.size();  


    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
