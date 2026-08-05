#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int num [] =  {6, 2, 4, 7, 7, 5};
    int size = sizeof(num)/sizeof(num[0]);

    int Smallest = INT_MAX;
    int SecondSmallest = INT_MAX;

    for (int i=0; i<size; i++) {
        if ( num [i] < Smallest ) {
            Smallest = num[i];
        }
    }

      for (int i=0; i<size; i++) {
        if ( num [i] < SecondSmallest && num[i] != Smallest) {
            SecondSmallest = num[i];
        }
    }

    cout << " Smallest Number :" << Smallest << endl; 
    cout << " Second Smallest Number :" << SecondSmallest << endl; 

    return 0;
}