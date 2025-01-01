#include <iostream>
using namespace std;

class demo {
    int a;

public:
    // Function to input data
    void getdata() {
        cout << "\nEnter a number: ";
        cin >> a;
    }

    // Function to display data
    void putData() {
        cout << "Value: " << a << endl;
    }

    // Overloading the + operator
    demo operator+(demo bb) {
        demo cc;
        cc.a = a + bb.a; // Adding the values of two objects
        return cc;
    }
};

int main() {
    demo aa, bb, cc;

    // Input values for two objects
    aa.getdata();
    bb.getdata();

    // Add objects using the overloaded + operator
    cc = aa + bb;

    // Display the values
    cout << "\nDisplaying Values:\n";
    aa.putData();
    bb.putData();
    cc.putData();

    return 0;
}
