#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int l;
    cin >> l;
    int arr[l];
    for (int i = 0; i < l; i++) {
        cin >> arr[i];
    }
    unordered_set<int> s;

    for (int i = 0; i <l; i++) {
        if (s.count(arr[i])){
            cout<<arr[i];
            break;
        }
        s.insert(arr[i]);
    }
    /*cout << "Unique elements:\n";
    for (int x : s) {
        cout << x<<" ";
    }*/
    cout<<endl;
    return 0;
}