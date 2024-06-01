#include <iostream>
using namespace std;

int main()
{
    // Program to Remove Characters in String Except Alphabets
    std::string arr = "hi@world&how$are=you";
    int j = sizeof(arr);
    for (size_t i=0; i < j; i++)
    {
        if (!((arr[i] >= 'a' || arr[i] >= 'A') && (arr[i] <= 'z' || arr[i] <= 'Z')))
        {
            arr.erase(arr.begin()+i,arr.end());
        }
    }
    cout << arr << endl;
    cout<<j;
}
