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
        for(int i = 0; i < n - 1; i++){
            int minIndex = i;
            for(int j = i + 1; j < n; j++){
                if(arr[j] < arr[minIndex]){
                    minIndex = j;
                }
            }
            if(minIndex != i){
                swap(arr[i], arr[minIndex]);
            }
        }
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}