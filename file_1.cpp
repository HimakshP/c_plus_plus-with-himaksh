#include <iostream>
using namespace std;

int main()
{
    
    // Take 5 integer inputs from user and store them in an array and print number of positives,negatives, evens, odds,and zeroes.
    int inp[5] =
        {

        };
    int a, n;
    for (int i = 1; i <= 5; i++)
    {
        cout << "enter number to be inserted\n";
        cin >> a;
        inp[i] = a;
    }
    //to input another number from user and check if its already in the array.
    int found=0;
    cout<<"enter number to be checked \n";
    cin>>n;
    for (int i ; i<5 ; i++)
    {
        if (inp[i] == n)
        {
            found=1;
            break;
        }


    }
    if(found==1)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no\n";

    }
    
    int num[5] = {/*number of positives*/ 0, /*number of negatives*/ 0, /*number of odds*/ 0, /*number of evens*/ 0, /*number of zeroes*/ 0};
    for (int i = 1; i <= 5; i++)
    {
        if (inp[i] > 0)
        {
            num[0]++;
        }
        else if (inp[i] < 0)
        {
            num[1]++;
        }
        else if (inp[i] % 2 != 0)
        {
            num[2]++;
        }
        else if (inp[i] % 2 == 0)
        {
            num[3]++;
        }
        else if (inp[i] == 0)
        {
            num[4]++;
        }
    }
    cout << "Number of positive values= " << num[0] << endl;
    cout << "Number of negative values= " << num[1] << endl;
    cout << "Number of odd values= " << num[2] << endl;
    cout << "Number of even values= " << num[3] << endl;
    cout << "Number of zeroes= " << num[4] << endl;
    //To get an array frpm user and store it in another array in reverse order
    
    int arr[10], reverse_arr[10];
    for (int k; k<=10;k++)
    {
        cout<<"enter values for the array/n";
        cin>>arr[k];
    }
    int i=0;
    for (int j = 10; j >= 0; j--)
    {
        reverse_arr[i]=arr[j];
        i++;
    }
    for (int k=1;k<11;k++)
    {
        cout<<reverse_arr[k];
    }
}