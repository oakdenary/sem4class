#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int c=0;c<t;c++){
        int n;
        cout<<"enter the number of elements: ";
        cin>>n;
        vector<int> arr(n);
        for (int k=0;k<n;k++){
            cin>>arr[k];
        }
    }
    return 0;
}