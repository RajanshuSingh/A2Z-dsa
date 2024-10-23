#include <iostream>
using namespace std;




int floorSqrt(int n){
     
     int m = sqrt (n);
        return m;
}

// Time Complexity: O(1)
// Space Complexity: O(1)

int main() {
    int n= 16;
    cout<<floorSqrt(n)<<endl;
    return 0;

}