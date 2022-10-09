#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int n;
    vector<string> numbers = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin >> n;
    if (n>9)
    {
        printf("greater than 9");        
    }
    else 
    {
        cout << numbers[n - 1];
    }

    return 0;
}