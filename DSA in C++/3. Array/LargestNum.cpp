// Largest Number & Second Largest Number
#include <iostream>
using namespace std;

int main()
{
    int num[] = {2, 5, 1, 3, 0};
    int size = sizeof(num) / sizeof(num[0]);

    int largest = INT_MIN;
    int seclargest = INT_MIN;

    for (int i = 0; i < size; i++)
    {

        if (num[i] > largest)
        {
            largest = num[i];
        }
    }

    for (int i = 0; i < size; i++)
    {

        if (num[i] > seclargest && num[i] != largest)
        {
            seclargest = num[i];
        }
    }

    cout << "Largest Number " << largest << endl;
    cout << "Second Lagest Number " << seclargest;

    return 0;
}