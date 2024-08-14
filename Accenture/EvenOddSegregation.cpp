#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[7] = {12, 34, 45, 9, 8, 90, 3};

    vector<int> v;
    for (int i = 0; i < 7; i++) {
        if (arr[i] % 2 == 0) {
            v.push_back(arr[i]);
        }
    }

    for (int i = 0; i < 7; i++) {
        if (arr[i] % 2 != 0) {
            v.push_back(arr[i]);
        }
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;  // To add a newline at the end

    return 0;
}
