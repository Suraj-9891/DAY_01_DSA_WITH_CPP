/*
Today’s checklist 
1) Basic Printing, \n, printing numbers also with + and -.
2) Variables, printing variables, int, float,bool,char and +,-,*,/ of 
integers.
3) Modulus operator and increment ,decrement operator
4) Variables naming rules.
5) Comments in C++

*/


#include<iostream>
using namespace std;
int main(){

    /*Question 01: Write a Program to Print the Hello World.?*/
    cout<<"Hello World";

    //Q1: Output: Hello World 
    
    
    /*Question 02: Write a Program to Print the any text in next line.?
    How to move in next line? */

    cout<<"Hi My name is Suraj Kumar."<<endl;
    cout<<"Hello PW"<<endl;
    cout<<"Hello CW"<<endl;

    /*
    Q2: Output:  
    Hi My name is Suraj Kumar
    Hello PW
    Hello CW
    */ 



    // Question 03: Write a Program to  Printing Number (what computer thinks is a number and what is a number)
    cout<<4;
    cout<<4+3;
    cout<<"4+3";
    /*
    Q3: Output:
        4
        7
        4+3
    */
    
    /*
    # Variable and their Declaration
    Question 04 : Write a Program to Print the Variable integer Number.?
    */

    int x;
    x = 7;
    cout<<"The value of X = "<<x<<endl;
    
    /*
    Q4: Output:
       The value of X = 7
    */

    // Question 05: Write the Program to change the variable Number.?

    int y;
    y = 7;
    y = 10;
    y = 19;
    cout<<"The Value of Y = "<<y<<endl;

    /*
    Q5: Ouput:
        The Value of Y = 19
    */

   
   /*
   Question 06: Write a Program Variable in C++& Updation of Variables.?
   */
    int a = 5;
    cout<<"The value of a = "<<a<<endl;
    a = 7;
    a = a+7;
    cout<<"The value of a = "<<a<<endl;
    a = a-20;
    cout<<"The value of a = "<<a<<endl;
    
    /*
    Q6: Ouput:
        The value of a = 5;
        The value of a = 14;
        The value of a = -7
    */

   /*
   Question 7: Write a Program Variable in C++& Updation of Variables.?
   
   */
   int b;
   b=19;
   cout<<"The value of b = "<<b<<endl;
   b = b+10;
   cout<<"The value of b = "<<b<<endl;

   /*
   Q7: Output
    The value of b = 19
    The value of b = 29
   
   */

    /*
    # Arithmetic Operations on int data types.
    Question 08: Write a Program to Create the Simple Calculator using Arthmetic operation.?
    */
    int x=10;
    int y=5;
    cout<<"The value of a+b = "<<a+b<<endl;
    cout<<"The value of a-b = "<<a-b<<endl;
    cout<<"The value of a*b = "<<a*b<<endl;
    cout<<"The value of a/b = "<<a/b<<endl;

    /*
    Q9: Output:
        The value of a+b = 15
        The value of a-b = 5
        The value of a*b = 50
        The value of a/b = 2
    */

    /*
    # Increment - Decrement Operator and commets.?
    Question 10: Write a Program to Increment - Decreament Operator.?

    */
    int x = 5;
    x++;
    cout<<"The value of X = "<<x<<endl; // 6
    x--;
    cout<<"The value of  X = "<<x<<endl; // 5
    ++x;
    cout<<"The value of X = "<<x<<endl; // 6
    --x;
    cout<<"The value of X = "<<x<<endl; // 5

    /*
    Q9: Output:
        The value of X = 6
        The value of X = 5
        The value of X = 6
        The value of X = 5
    */

    /*
    Question 10: Write a Program to take two integer  a and b b:a>b and find the remainder when a is divided by b using module Operator.?
    */
    int a = 9;
    int b = 2;
    int rem = a%b;
    cout<<"The Remainder of Number =  "<<rem<<endl;


    /*
    Q10: Output:
        The Remainder of Number = 1
    
    */

   /*
    Question 11: Write a Program to take two integer  a and b b:a>b and find the remainder when a is divided by b without using module Operator.?
   
   */
    int a=10;
    int b=3;
    int q = a/b;
    int rem = a-(b*q);
    cout<<"The Remainder of Number = "<<rem<<endl;

    /*
    Q11: Output:
        The Remainder of Number = 1
    */

    /*
    # float data types

    Question 12: Write a Program to Print the float data types.?
    */ 

    cout<<5/2<<endl; // 2
    cout<<5.0/2<<endl; // 2.5
    cout<<5/2.0<<endl; // 2.5 
    cout<<5.0/2.0<<endl;  // 2.5

    /*
    Q13: Output:
        2
        2.5
        2.5
        2.5
    */

   /*
   Question 14: Write a Program to Arithmetic operation on float data types.?

   */
    
    float a = 5;
    float b = 2;
    cout<<"The value of a+b = "<<a+b<<endl; // 7
    cout<<"The value of a-b = "<<a-b<<endl; // 3
    cout<<"The value of a*b = "<<a*b<<endl; // 10
    cout<<"The value of a/b = "<<a/b<<endl; // 2.5
    
    /*
    Q14: Output:
        The value of a+b  = 7;
        The value of a-b  = 3;
        The value of a*b  = 10;
        The value of a+b  = 2.5;
    */

    /*
    Question 15: Write a Program to calculating percentage of 5 Subjects.?
    */
    float x1 = 90;
    float x2 = 92;
    float x3 = 95;
    float x4 = 91;
    float x5 = 98;
    float percentage = (x1+x2+x3+x4+x5)/5;
    cout<<"The percentage of marks = "<<percentage<<endl;

    /*
    
    Q15: Output
    The percentage of marks = 93.2
    */
    
    /*
    Boolean data types.?
    Question 16: Write a Program to print the Boolean data types.?
    
    */
    bool x = true;
    cout<<(7<4)<<endl; // 0
    cout<<(7>4)<<endl; //1

    /*
    
    Q16: Output:
     0
     1
    */

   /*
   Question 17 : find the output these program.?

    #include<iostream>
    using namespace std;
    int main(){
    int a = 0,b = 5;
    // cout<<b<<endl;
    cout<<a<<endl;
    }

    Q17: Output 0
   
   */

   /*
   Ques: 18: Write a program to find the simple interest.?
   */
    float p,r,t,si;
    p = 100;
    r = 10;
    t = 2;
    si = (p*r*t)/100;
    cout<<"The value of Simple Interest = "<<si<<endl;
  
    /*
    Q19: Output:
        The value of Simple Interest = 20
    */
    
    /*
    Question 20: Predict the output :
    
    int main(){
    float a = 5, b = 2; 
    int c; 
    c = a % b; 
    cout<<c;
    return 0;
    }
    
    Q20: Output Error
    */

    /*
    
    MCQ 1
    If a is an integer variable, a = 5 / 2 ; will return a value 
    (1) 2.5 
    (2) 3 
    (3) 2 
    (4) 0

    Output 2

    MCQ 2

    What will be the value of d if d is a float after the operation 
    d = 2 / 7.0? 
    (1) 0 
    (2) 0.2857 
    (3) Cannot be determined 
    (4) None of the above

    Option 2 0.2857

    */


    return 0;
}