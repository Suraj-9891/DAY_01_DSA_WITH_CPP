#include<iostream>
using namespace std;
int main(){
    /*
    Question 1: How can you output “Physics” and “Wallah” in two different lines in C++?
    */
    cout<<"Phsics"<<endl;
    cout<<"Wallah"<<endl;

    /*
    Q1: Output:
        Physics
        Wallah
    */

    /*
    Question 2: Write a program to print 10 using 2 positive numbers less than 6 in c++ as output.?
    */
    int a=5;
    int b=5;
    cout<<"The value of a+b = "<<a+b<<endl;

    /*
    Q2: Output:
        The value of a+b = 10
    */

    /*
    Question 3: How much space does the following data types take?
        .int
        .bool
        .float

        int : 4 bytes
        bool : 1 byte
        float : 4 bytes
    
    */

    /*
    Question 4: What is the output of this program?
    */
    int a = 4;
    int b = 5;
    a++, b--; // a=5, b=4
    cout << ++a << " " << b--; // 6 4

    /*
    Q4: Output:
        6 4
    */

    /*
    Question 5:Write a program to find the circumference of a circle with radius 10 in C++
    */
    int radius = 10;
    float pi = 3.14;
    float circumference = 2*pi*radius;
    cout<<"The Circumference of Circle = "<<circumference<<endl;

    /*
    Q5: Output
        The Circumference of Circle = 62.8
    */

    /*
    Q6: How many of these can be a variable name ?
    01Pwskills
    _FLOAT
    int
    FLOAT
    You will succeed

    Solution:
    Only 2 of the above can be a variable name.
    First option is incorrect since a variable name cannot start with a number.
    2nd option is correct because a variable name can start with underscore.
    3rd option is incorrect as a variable name because int is a reserved keyword and cannot be used as a 
    variable name. 
    4th option is still correct because C++ is a case sensitive language. Here FLOAT and float are treated 
    differently therefore FLOAT is not a reserved keyword hence can be used as variable name. 
    Last option is incorrect because no variable can have spaces in between. 
    
    */


    return;
}