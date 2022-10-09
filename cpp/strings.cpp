#include <iostream>
#include <string>

using namespace std;

int main()
{
    string test1 = "srijan";
    //size() to get length of the string 
    cout << test1.size() <<endl;
    
    //concatenation
    test1 = test1 + " sarthak";
    cout << test1 << endl;
    test1.append(" nomegalul");
    cout << test1 << endl;
    string test2 = "1234";
    string test3 = test1 + test2;
    cout << test3 << endl;

    //emptying the string 
    test3.clear();

    //checking if the string is empty 
    if (test3.empty())
        cout << "test3 is empty" << endl;
    else 
        cout << "not empty" << endl;

    //converting to from other datatypes to strings
    string test4 = to_string(10.5);
    cout << "string: " << test4 << endl;

    //converting other datatypes to strings
    double number = stod(test4);
    cout << "number: " << number << endl;

    //getting substring 
    string test5 = "srijan sarthak";
    string test6 = test5.substr(7,7);
    cout << "last name: " << test6 << endl;

    //getting input with spaces from user 
    string name;
    cout << "enter name: " << endl;
    getline(cin, name);
    cout << "name: " << name << endl;

}