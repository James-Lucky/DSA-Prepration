#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int num [] =  {1, 2, 4, 7, 7, 5};
    int size = sizeof(num)/sizeof(num[0]);

    int Largest = INT_MIN;
    int SecondLargest = INT_MIN;

    for (int i=0; i<size; i++) {
        if ( num [i] > Largest ) {
            Largest = num[i];
        }
    }

      for (int i=0; i<size; i++) {
        if ( num [i] > SecondLargest && num[i] != Largest) {
            SecondLargest = num[i];
        }
    }

    cout << " Largest Number :" << Largest << endl; 
    cout << " Second Largest Number :" << SecondLargest << endl; 

    return 0;
}