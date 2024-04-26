#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    int tamanho = sizeof(arr) / sizeof (arr[0]);

    for (size_t i = 0; i <tamanho ; i++)
    {
       cout << arr[i] << " " << endl;
    }
     return 0;
}