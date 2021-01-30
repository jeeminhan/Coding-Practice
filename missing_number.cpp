#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num;
    int temp;
    cin >> num;
    int list_num[num];

    for (int i=0; i<num; i++) {
        list_num[i] = 0;
    }

    for (int i=1; i<num; i++) {
        
        cin >> temp;
        list_num[temp-1] = temp;
    }

    //TESTING 

    // cout << "The contents of the array are " << endl;
    //    for (int i=0; i<num; i++) {
        
    //     cout << list_num[i] << " " << endl;
    // }

    // cout << "This array is now completed " << endl << endl;
    
    // cout << "HEY   -- " << list_num[4] << endl;



    for (int i=0; i<num; i++) {
        //cout << "working" << " " << endl;
        if (list_num[i] == 0) {
            cout << i+1;
            return 0;
        }
    }

    return 0;

    //ORIGINAL PLAN BUT TAKES TOO LONG

    // bool flag = false;
    // for (int i =1; i<num+1; i++) {
    //     for (int j=0; j<num-1; j++) {
    //         if (i==list_num[j]) {
    //             flag = true;
    //         }
    //     }
    //     if (flag == false) {
    //         cout << i;
    //     }
    //     flag = false;
    // }


 
}