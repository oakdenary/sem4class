#include <iostream>
using namespace std;
int main(){
    int option;
    cout <<"choose which sorting technique:\n 1)insertion sort\n 2)selection sort "<<endl;
    cin>>option;
    if (option==1){
        //insertion sort
        int t;
        cin>>t;
        for (int l=0;l<t;l++){
            int arr[4];
            for (int k=0;k<4;k++){
                cin>>arr[k];
            }
            for (int i = 1; i < 4; i++) {
                int key = arr[i];
                int j = i - 1;

                while (j >= 0 && arr[j] > key) {
                    arr[j + 1] = arr[j];
                    j--;
                }
                arr[j + 1] = key;
            }

            cout << "Sorted array:\n";
            for (int i = 0; i < 4; i++) {
                cout << arr[i] << " ";
            }
        }
    }
    
}