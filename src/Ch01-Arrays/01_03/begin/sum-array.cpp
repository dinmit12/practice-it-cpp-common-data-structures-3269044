#include <iostream>
using namespace std;

int calculateSum(const int arr[], size_t size)
{
    int sum = 0;
    for (int number : arr) {
        sum += number;
    }
    return sum;
    //...TODO: implement
}

int main()
{
    const int ints[]{1, -7, 17};
    cout << "The sum of all elements in the array is " << calculateSum(ints, 3) << endl;
}
