#include<bits/stdc++.h>
using namespace std;

vector<int> RearrangebySign(vector<int> A, int n) {
    vector<int> pos;
    vector<int> neg;

    // Separate the positive and negative numbers
    for(int i = 0; i < n; i++) {
        if (A[i] >= 0) {
            pos.push_back(A[i]);
        } else {
            neg.push_back(A[i]);
        }
    }

    // Rearrange based on the sizes of pos and neg vectors
    if (pos.size() < neg.size()) {
        // Place alternating elements from pos and neg in A
        for (int i = 0; i < pos.size(); i++) {
            A[2 * i] = pos[i];
            A[2 * i + 1] = neg[i];
        }

        // Append remaining negative elements, if any
        int index = pos.size() * 2;
        for (int i = pos.size(); i < neg.size(); i++) {
            A[index] = neg[i];
            index++;
        }
    } else {
        // Place alternating elements from neg and pos in A
        for (int i = 0; i < neg.size(); i++) {
            A[2 * i] = pos[i];
            A[2 * i + 1] = neg[i];
        }

        // Append remaining positive elements, if any
        int index = neg.size() * 2;
        for (int i = neg.size(); i < pos.size(); i++) {
            A[index] = pos[i];
            index++;
        }
    }

    return A;
}

int main() {
    int n;
    cin >> n;
    vector<int> A(n);

    // Input the array
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Call the function and store the result
    vector<int> res = RearrangebySign(A, n);

    // Output the rearranged array
    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}
