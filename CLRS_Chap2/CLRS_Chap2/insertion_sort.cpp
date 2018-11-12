#include <iostream>
#include <array>
using namespace std;

int insertion_sort() {
    int array[6] = {5,2,4,6,1,3};
    int i,j = 0;
    int key = 0;
    int array_size = sizeof(array)/sizeof(array[0]);
    
    for (int k = 0; k < 6; k++)
        cout<< array[k];
    cout << endl;
    for (j = 1; j<array_size; j++) {
        key = array[j];
        i = j - 1;
        while(i > -1 && array[i] > key) {
            if(key <=array[i])
            {   array[i+1] = array[i];
                i = i - 1;
            }
        }
        array[i+1] = key;
    }
    for (int k = 0; k < 6; k++)
        cout << array[k] ;
    cout << endl;
    
    
    return 0;
}
