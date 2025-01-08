// 1-------This is basiclly the syntax of C++

// #include <iostream>
// using namespace std;
// int main(){
// cout<<"Hi Hirak ";
// return 69 ;
// }

// 2-------In order To print text on new lines we use,
//\ncharacter or we use <<endl;

/*#include <iostream>
using namespace std;
int main()
{
    cout << "Hi Hirak\nHow are your?";
    return 69;
}*/

// 3-------Comments

// #include <iostream>
// using namespace std;
// int main()
//{
// cout << "You are doing great"; // This is a comment in comment we use // character OR /**/
//  return 0;
//}

// 4-------Now , Lets discuss about variables

/*#include <iostream>
using namespace std;
int main(){
  int x=11;
  int e,r,t,c,v=7;
  cout<<x; //Here x is a variable, which we declare inside a main or outside a main fuction
  cout <<e,r,t,"\n";        // We can declare as many variables as we want
return 69 ;
} */

// 5-------Now, Lets dicuss about data types

/*#include <iostream>
using namespace std;
int main(){
int x=11; // This is an integer datatype which takes whole number as input and shows as output

float q=2.33333; // This is a float datatype which takes whole with decimal numbers

char c='a'; // This is a character datatype which inputs only a single character, but use it under '' Quotes

double f = 7.555555555;  // This is similar to float but it has more precision than float

cout<<x<<endl;
cout<<q<<endl;
cout<<c<<endl;
cout<<f<<endl;
return 69 ;
} */

// 6------- About Operators

// There are mainly 4 types of operators
// Arithmetic
// Assignment
// Logical
// Comparison

// Pre Increment
//  About increment and Decrement
//  ++a , a++ Are two differnet things
/*#include <iostream>
using namespace std;
int main ()
{
    int a, b;
    a=7;
    b =++a; //Here a will be increment to 1 then the value will be stored to b
    cout<<a <<" and "<< b;
return 0;
}*/
// Post Increment
/*#include <iostream>
using namespace std;
int main()
{
    int a, b;
    a = 7;
    b = a++;                   // Here a will not be incremented here the value of a will be sent to b whcih is 7
    cout << a << " and " << b; // Now a will increment here.. Not b... B will be = 7
    return 0;
}*/
// Similarly we have Decrementer

// Terneray Operator
/*#include <iostream>
using namespace std;
int main()
{ // Here it will check whether a>b or not as its not then b+a will run and put into c
    int a = 5;
    int b = 66;
    int c = (a > b) ? a - b : b + a; // Ternerary Operator
                                     //    If true not false
    cout << c << "\n";
    int x = (2, 3, 4); // Here the last value will be assigned to x which is 4....
    cout << x;
    return 0;
}*/

// 7------- Strings

// Strings are basically the sum of characters which we can use to take input and print output
// In order to use the strings we must include its header file
// #inlude <string>

/*#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str, ee, hh;
    ee = "juebv";
    str = "kdbvhhdivbdfv"; // If we use char we wont be able to use this amount of characters
    // cout << str << endl;
    // cout << ee + str<<endl; // we can add two strings together with the help of +
    // cout<<  str.length()<<endl; // With this we get to know the size of the string
    // getline(cin, hh); //This helps you to take input from keyboard including the space
    //cout << ee;
    ee.clear(); //With this we cleared everything that was inside of ee
    cout << ee; //No output will be shown

    return 69;
}*/

// 8 -------Math

// IN c++ without the use of operators we can perform various mathematic operatons
// We have to include its header file which is #include <cmath>

/*#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x, y, z = 4;
    cout << sqrt(x) << endl;
    cout << round(y) << endl;
    cout << log(z);
    return 69;
} */

// 9------- Now lets dicuss about conditional statements

// if, if.else, if.else.if.else......

// Example of if statement

/*#include <iostream>
using namespace std;
int main()
{
    int x = 4;
    cout << "Type the Number: - ";
    cin >> x;

    if (x < 7)
    {

        cout << "7 is greater than " << x;
    }

    return 69;
}*/

// Example of if else statement

/*#include <iostream>
using namespace std;
int main()
{
    int x = 4;
    cout << "Type the Number: - ";
    cin >> x;

    if (x < 7)
    {

        cout << "7 is greater than " << x;
    }

    else
    {
        cout << "You Inputted the wrong number";
    }

    return 69;
}*/

// Example of if else if else statement

/*#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Type your age:- ";
    cin >> a;

    if (a < 18)
    {
        cout << "You are not eligible to vote";
    }

    else if (a >= 18 && a<=100)
    {
        cout << "You are eligible to vote";
    }

    else
    {
        cout << "How can u be alive?";
    }

    return 69;
}*/

// 10------- Switch Statements
// In the switch statements we use various cases and if the condition matches the cases then
// code will be executed

/*#include <iostream>
using namespace std;
int main()
{
    float z, y;
    char opera;
    cout << "Type the first number: - ";
    cin >> z;
    cout << "Type the second number: - ";
    cin >> y;
    cout << "Type your operator (+,-,/,*)";
    cin >> opera;

    switch (opera)
    {
    case '+':
        cout << "The sum is:" << z + y << endl;
        break;
    case '-':
        cout << "The substraction is:" << z - y << endl;
        break;
    default:
        cout << "Hirak Dalle!!!!!!!!!!!";
        break;
    }

    return 69;
}*/

// 11------- Array

/*#include <iostream>
#include <string>
using namespace std;
int main(){
      int x[] = {1,2,3,4}; // Arrays are created to store various types of data in a singlr place

      cout<<x[3]<<endl; // We can create as many arrays as we want...

      string car[] = {"vv"};
      car[0] = {"hh"};   // We can also change the value of a string like this
      cout<<car[0]<<endl;
      cout<<sizeof(car); // With this we can get the array size





return 69 ;
}*/

// 12------- Structure
// Structure allows a user to use different datatypes uner a single structure
// We can create as many structures as we want
// In strct we cannot use a function
/*#include <iostream>
using namespace std;
int main()
{
    struct
    {
        string name;
        int age;
    } people;
    people.name = "Hirak";
    people.age = 19;
    cout << people.name << endl; // Here both the values are outputting to the terminal
    cout << people.age;

    return 0;
}*/

// Union ----IMP----
/*#include <iostream>
using namespace std;

int main()

{
    union people // Here we have to give name of union here
    {
        char name;
        int age;
    };
    union people person; //Here the accessing is different than struct
    person.age = 6;
    person.name = 'a';
    //cout<<person.age;//garbage value as i can only use one member at a time in union
    cout<<person.name;
    return 0;
}*/

// 13------- Pointer
// Pointers are used to get address and dereference of a variable

/*#include <iostream>
using namespace std;
int main()
{
    int q = 7;   // A simple int variable q where value = 7
    int *w = &q; // A pointer is made of *w where the value is the address of q
    cout << *w << endl;
    // * = Value of the variable
    // It will be used to get the value of another variable
    cout << &w << endl;
    // & = Address of variable
    // It will be used to get the address of another variable --- Address means where it will be stored in RAM
    int **c = &w; // Pointer to Pointer --- It means it will store the address of another pointer
                  // Bit, remember to use both ** --- It will mean pte to ptr
    cout << &w << endl;
    cout << *w;
    return 69;
}
// Pointers with array-- --IMP-- --
#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3};
    int *p = a;
    /*cout << *p << endl;   // Here its on 0 index
    cout << *p++ << endl; // Its still on 0 as its post incre...
    cout << *++p;
                   // Its on index 2 as after the execution of above line we reached index 1 now
                   //  With pre incre it got added 1....
    cout<<*p<<endl;
    cout<<*p+1<<endl;
    cout<<*p+2<<endl;
    return 0;
}*/

/*#include <iostream>
using namespace std;

int main() {
    int x,y;
    cout<<"Type the number on Dice";
    cin>>x;
    cout<<"Type the number on Dice";
    cin>>y;
    if(x+y>6){
        cout<<"YES";

    }
    else if (x+y<6){
        cout<<"No";
    }
    return 0;
}*/
// Chef wants to become fit for which he decided to walk to the office and return home by walking. It is known that Chef's office is

// X km away from his home.

// If his office is open on
// 5
// 5 days in a week, find the number of kilometers Chef travels through office trips in a week.

/*#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        cout<<x*5*2<<endl;


    }
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main(){

        int x;
        cin>>x;
        if(1<=x&&x<100){
            cout<<"Easy\n";
        }
         else if (100<=x&&x<200){
            cout<<"Medium\n";
        }
       else if (200<=x&&x<=300){
        cout<<"Hard\n";

    }
    return 0;

}*/

// Functions ----Imp----

/*#include <iostream>
using namespace std;
void commit(int a, int b)
{
    if (a == 7 && b == 7)
    {
        cout << "Pls Commit\n";
    }
    else
    {
        cout << "Nothing\n";
    }
}
int main()
{
    commit(7, 7); // Do not need to print cout as its already being said in the commit func
    return 0;
}*/
/*#include <iostream>
using namespace std;
int sum(int a, int b) //A and B are formal para
{
    int c = a + b; // Variables that we use inside a func are formal para
    return c;
}

int main()
{
    int sum1, sum2; //Sum1, Sum2 are actual para
    cout << "Type your number:-"; //these are passed to the formal para
    cin >> sum1 >> sum2;
    cout << "The sum Is:-" << sum(sum1, sum2);
    return 69;
}*/

// Function Prototyping

/*#include <iostream>
using namespace std;
                       // Here I removed The value from this place and put it at end of the program
int sum(int a, int b);// -- Acceptable // If i now run this it wont work // Therefore we take ourselves to Function Prototyping
//int sum( int a,b); // -- Unacceptable // The Syntax is Function Function name (Arguments)

int main()
{
    int sum1, sum2;
    cout << "Type your number:-";
    cin >> sum1 >> sum2;
    cout << "The sum Is:-" << sum(sum1, sum2);
    return 69;
}
int sum(int a, int b)
{
    int c = a + b;
    return c;
}*/

//

/*#include <iostream>
using namespace std;
int main(){
     int x;
     cin>>x;
     if (x>100){
        cout<<x-10;
     }
     else{
        cout<<x;
     }
return 69 ;
}*/

/*#include <iostream>
using namespace std;
int main(){
        int x;
        cin>>x;

        if(x>=67&&x<=45000){
            cout<<"Yes\n";
        }
        else {
        cout<<"No";
    }
return 69 ;
}*/

/*#include <iostream>
using namespace std;
int main(){
    int x,y;
        cin>>x>>y;
        if(x>y){
            cout<<"A";
        }
        else {
        cout<<"B";
    }
return 69 ;
}*/

// A simple Function using strings
/*#include <iostream>
// #include <string>
using namespace std;
string myfunction("Hello World");
int main()
{
    cout << myfunction;

    return 69;
}*/
// We can do the above code in this way also
/*#include <iostream>
using namespace std;
void myfunc()
{
    cout << "Hiiii\n";
}
int main()
{
    myfunc(); //Didt write cout as myfunc already has...
    return 0;
}*/
/*#include <iostream>
using namespace std;
int add(int a, int b)
{
    int c = a + b;
    return c;
}
int main()
{
    int num1, num2;
    cout << "Type your number:-\n";
    cin >> num1 >> num2;
    cout << "The sum is:-" << add(num1, num2);
    return 69;
}*/

// Call by value and call by reference
// Here this will not swap the variables as we are passing the copies of x and y to a and b
/*#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x, y;
    x = 3;
    y = 4;
    cout << x << " " << y << endl;
    swap(x, y);
    cout << x << " " << y;
    return 0;
}*/
// Now using call be reference using reference variable
// Here the a and b is acting as a reference to x and y...
/*#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x, y;
    x = 3;
    y = 4;
    cout << x << " " << y << endl;
    swap(x, y);
    cout << x << " " << y;
    return 0;
}*/
// We can do the above call by reference using ptr also
/*#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x, y;
    x = 3;
    y = 4;
    cout << x << " " << y << endl;
    swap(x, y);
    cout << x << " " << y;
    return 0;
}
* /
    // Now lets dicuss sbout inline function
    // But remember to use inline only when the func is small or doesnt do much like this func
    // Only does the product... So for gigher level of fucn it is not recommended
    // And do not use in conditional , loops etc...
    /*#include <iostream>
    using namespace std;
    inline int pro(int a, int b) // WE include a keyword inline just to reduce the stress and increase memeory efficiency
    {
        return a * b;
    }
    int main()
    {

        int a, b;
        cout << "Type your number:-\n";
        cin >> a >> b;
        cout << "The product is:-\n"
             << pro(a, b) << endl;
        cout << "The product is:-\n"
             << pro(a, b) << endl; // Here it will increase the storage and pressure on RAM if we do as this
        cout << "The product is:-\n"
             << pro(a, b) << endl;
        cout << "The product is:-\n"
             << pro(a, b) << endl;
        cout << "The product is:-\n"
             << pro(a, b) << endl;
        cout << "The product is:-\n"
             << pro(a, b) << endl;
        cout << "The product is:-\n"
             << pro(a, b) << endl;
        cout << "The product is:-\n"
             << pro(a, b);

        return 69;
    }*/

// Default argu
// The values that we pass inside a func is called as default argu
// In this the b is a default argu
// Rememeber that default args must be in right most corner of the func
// As if i put this before a the program will not work
/*#include <iostream>
using namespace std;
int add(int a, int b = 7)
{
    return a + b;
}
int main()
{
    cout << add(2);
    return 0;
}*/

// Online C++ compiler to run C++ program online
/*#include <iostream>
using namespace std;
int main() {

    //cout << "Hello world!";
    int x;
    cin>>x;
    if(x*4<=1000&&x<1000){
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){

    int x,y;
        cin>>x>>y;
        if(x>y){
            cout<<x-y<<endl;
        }
       else if(x==y){
        cout<<0;
    }
        else if(y==0){
            cout<<x;
        }
    return 0; }*/

// Factorial of a number using recursive function....

/*#include <iostream>
using namespace std;
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n* factorial(n-1); // Formula To  find the factorial of a number

}
int main(){
    int a;
    cout<<"Enter the number ";
    cin>>a;

    cout<<"The factorial is "<<factorial(a);
return 69 ;
}*/

//  Fibonacci Series

/*#include <iostream>
using namespace std;
int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2)+fib(n-1); // The Formula Of Fibonacci Series
}
int main(){
  int a;
  cout<<"Type the Position on which the number is ";
  cin>>a;
  cout<<"The position of number is " <<fib(a);
return 69 ;
}*/

/*  #include <iostream>
  using namespace std;
  int main(){
    int n,x,y;
      cin>>n>>x>>y;
      if(n>x&&n>y*2)
      {
          cout<<"Yes";
      }
     else{

      cout<<"No";}
  return 69 ;
  }*/

// My first function program without any help...

/*#include <iostream>
using namespace std;
int greatest(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int x, y, z;
    cout << "Type the height :-\n";
    cin >> x >> y >> z;
    cout << "The greatest among is " << greatest(x, y, z);
    return 69;
}*/

// Another function

/*#include <iostream>
using namespace std;
int posorneg (int a)
{
    if (a % 2 == 0)
    {
        return a;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int x;
    cout << "Type the number:- \n";
    cin >> x;
    cout << "The number is positive which is " <<posorneg(x);
    return 69;
}*/

// VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVIIIIIIIIIIIIIIIIIIIIIIIIIII
// Now, lets discuss about the hearbeat of the c++
// The object oriented programming (OOPs)

/* Lets discuss about some terminologies of the (OOPs)

 1- CLASSES
 Basic template for creating objects

 2- OBJECT
 Basic runtime entities

 3- DATA CAPSULISATION AND ENCAPSULISATION
 Wrapping data and into single unit

4- INHERITENCE
Properties of one class which can be inherited into others

5- POLYMORPHISM
Ability to take more than one forms

6- DYNAMIC BINDING
Code which will execute is not known unti the program runs

7- MESSAGE PASSING
Object.message(information) call format
*/

// 1- Classes

/*#include <iostream>
using namespace std;
class employee // A class is a keyword which has to be declared
{
private: // This cannot be directly accessed
    int a, b;

public: // This can be directly accessesd as the name suggests
    int c, d;
    void setdata(int a1, int b1);
    void getdata()
    {
        cout << "The value of a is :" << a << endl;
        cout << "The value of b is :" << b << endl;
        cout << "The value of c is :" << c << endl;
        cout << "The value of d is :" << d << endl;
    }

}; // A semicolon is required in a class

void employee ::setdata(int a1, int b1) // The syntax to access the private class ... It should be declared outside the main func....
{
    a = a1;
    b = b1;
}
int main()
{
    // In c++ we use struct to hold different kind of data into a single struct..
    // But, say if we want to protect the data then we cannot use the struct...
    // Therefore, we take ourselves to the classes....

    employee hirak;    // An employee is created as an object as its a class
    hirak.c = 7;       // Syntax to initialize the public class
    hirak.d = 77;
    hirak.setdata(9, 6);
    hirak.getdata();

    return 69;
}*/

/*#include <iostream>
using namespace std;
class add
{
public:
    void input(void);
};
void add ::input(void)
{
    int a, b;
    cout << "Type the numbers: - " << endl;
    cin >> a >> b;
    cout << "The sum of a and b is: - " << a + b;
}

int main()
{
    add hirak;
    hirak.input();
    return 69;
}*/

/*#include <iostream>
using namespace std;
float circle(float r)
{
    float c;
    return c = 3.14 * r * r;
}
int main()
{
    int a;
    cout << "Type the radius of the circle:- ";
    cin >> a;
    cout << "The area of the circle is:- " << circle(a);
    return 69;
}*/

/*#include <iostream>
using namespace std;
class rectangle
{
public:
    void area(void);
};
void rectangle ::area(void)
{
    float l, b;
    cout << "Type the l and b: \n";
    cin >> l >> b;
    cout << "The area of the rectangle is: " << l * b;
}
int main()
{
    rectangle hirak;
    hirak.area();

    return 69;
}*/

/*#include <iostream>
using namespace std;
class employee
{
    int id;
    int salary;

public:
    void setid(void)
    {
        salary = 111;
        cout << "Enter the id of the employee ";
        cin >> id;
    }
    void getid(void)
    {
        cout << "The id of the employee is " << id << endl;
    }
};
int main()

{
    // employee hirak;  // Here there is only one emp.. But it will be difficult to use this when
    // hirak.setid();   // we have hundreds of emp.. Therefore we use arrays...
    // hirak.getid();

    employee people[7];
    for (int i = 0; i < 7; i++)
    {
        people[i].setid();
        people[i].getid();
    }

    return 69;
}*/

// 2------- Friend Functions

/*#include <iostream>
using namespace std;
class calculator
{
private:
    int a, b;

public:
    friend void display(calculator add);
};
void display(calculator add)
{
    add.a = 7;
    add.b = 7;
    cout << add.a + add.b;
}

int main()
{
    calculator add;
    display(add);
    return 0;
}*/

// 3-------  Friend classes and members

// As the friend func is used to use the private data of the class
// But suppose we want to allow hundered of fuc inside the class then we cant just simply write
// Therefore we use the friend class calculator;
// Here this will give permisiion to all the func to use which are in the calculator class

/*#include <iostream>
using namespace std;
class sum
{
public:
    void summ(void);
};

void sum ::summ(void)
{

    int a, b;
    a = 8;
    b = 7;
    cout << "The sum of a and b is" << a + b;
}

int main()
{
    class hirak;
    hirak.summ();

    return 69;
}*/

/*#include <iostream>
using namespace std;
class Y;
class X
{
    int data;

public:
    void setvalue(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};
class Y
{
    int num;

public:
    void setvalue(int value)
    {
        num = value;
    }
    friend void add (X, Y);// A frnd func hass been made so that to access the pvt data
};

void add( X o1, Y o2){
    cout<<"Summing The Data "<<o1.data + o2.num; // It Asscessed The Private Dta theref
    // We will use the frnd Function
}
int main()
{     X a;
    a.setvalue(4);
      Y b;
      b.setvalue(6);
      add (a, b);


    return 69;
}*/

// A Trick

/* Trick to swap the num
int temp =a;

a=b;
b= temp; */

/*#include <iostream>
using namespace std;
int main(){
  int temp,a,b;
  a=6,b=7;
  temp =a;
  a=b;
  b=temp;
  cout<<a<<endl;
  cout<<b;
return 69 ;
}*/

// 4------- Constructors

//  A constructor is a special memeber func
//  With same name as the class
//  Used to initialize the object of the class
//  It is autonmatically invoked or called whwenever a object is created

// VVV A constr name should be = to the class name

/*#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(void); // Constructor Declaration

    void printnum()
    {
        cout << "The number is " << a+b;

    }
};
complex ::complex(void)
{
    a = 10;
    b = 0;
}
using namespace std;

int main()
{
    complex c;
    c.printnum();
    return 69;
}*/

/*#include <iostream>
class complex
{
    int a, b;

public:
    complex(void); // Constructor Declaration

    void printnum()
    {
        std ::cout << "The number is \n" << a + b;
    }
};
complex ::complex(void)
{
    a = 11;
    b = 0;
   std:: cout<<"Simply It Will Run\n";
}
using namespace std;

int main()
{
    complex c;
    c.printnum();
    return 69;
}*/

/*#include <iostream>
using namespace std;
class num
{
    int x, y;

public:
    void showdata()
    {
        cout << "The sum of x and y is :" << x + y;
    }
    num(void) //    Here this is an inline  constructor , it is declared inside the class
    {
        x = 5; // It should have a similar name of class
        y = 7;
    }
};

int main()
{
    num hirak;
    hirak.showdata();
    return 69;
}*/

/*#include <iostream>
using namespace std;
class complex
{
    int x, y;

public:
    void showdata()
    {
        cout << "The complex of x and y is " << x << "+" << y << "i";
    }
    complex(void)
    { // Inline constructor
        x = 7;
        y = 5;
    }
};
int main()
{
    complex hirak;
    hirak.showdata();
    return 69;
}*/

// Now lets talk about paramarized construction
// We will use the above examp...

/*#include <iostream>
using namespace std;
class complex
{
    int x, y;

public:
    void showdata()
    {
        cout << "The complex of x and y is " << x << "+" << y << "i";
    }
    complex(int a, int b) // Here its a paramarized onstructor
    {
        x = a; // It passes the value of a to x and vice versa
        y = b;
    }
};
int main()
{
    complex hirak(4, 6); // This is known as implicit call
    hirak.showdata();
    return 69;
}*/

// Formula to count no of handshakes..
// Using Functionss....

/*#include <iostream>
using namespace std;
int handshakes(int n)
{

    return n * (n - 1) / 2;
}
int main()
{
    int x;
    cout << "Type the no. of people: ";
    cin >> x;
    cout << "The no. of handshakes made is:" << handshakes(x);
    return 69;
}*/

// The no of handshakes using class

/*#include <iostream>
using namespace std;
class people
{
private:
    int n;

public:
    void handshakes()
    {
        cout << "Type the no. of people:";
        cin >> n;
        cout << "The no. of handshakes made are:" << n * (n - 1) / 2;
    }
};
int main()
{
    people hirak;
    hirak.handshakes();
    return 69;
}*/

// The no. of handshakes using cconstructors

/*#include <iostream>
using namespace std;
class people
{
private:
    int n;

public:
    void handshakes()
    {
        // cout << "Type the no. of people:";
        // cin >> n;
        cout << "The no. of handshakes made are:" << n * (n - 1) / 2;
    }
    people()
    { // An inline default constructor
        n = 30;
    }
};
int main()
{
    people hirak;
    hirak.handshakes();
    return 69;
}*/

// 5------- Dynamic Initialization Of objects using constructors

/*#include <iostream>
using namespace std;
int main()
{

    return 69;
}*/

// 6-------- Copy Constructors

/*#include <iostream>
using namespace std; // Always remeber if u nget an error like expects 1 argument 0 provided then
class number
{ // A deafult constructor is required
    int a;

public:
    number()
    {
        a = 0;
    } // A default cons...
    number(int num)
    {
        a = num;
    }
    /*number(number &obj) // Here this is a copy constructor which copies one value and passes to anot..
    {
        cout << "The copy constructor called!!!!" << endl;
        a = obj.a;
    }  */
// Without this a copy comstruc can aslo run as compiler will provide its won copy cons
/*   void display()
   {
       cout << "The number is" << a << endl;
   }
};
int main()
{
   number x, y, z(45);
   x.display();
   y.display();
   z.display();
   number z1(z); // Without the copy cons it will aslo run....
   z1.display();

   return 69;
}*/

/*#include <iostream>
using namespace std;
class num
{
    int a;

public:
    num()
    {
        a = 6;
    }
    num(int number)
    {
        a= number; // In order to assing values to the objects we must do this
    }
    void print()
    {
        cout << "The number is:-  " << a << endl;
    }
};
int main()
{
    num x, y(77);
    x.print();
    y.print();
    num z1(x); // A copy constructor
    x.print();

    return 69;
}*/

// 7------- Destructor
//  Never takes a argument nor returns value
// A destructor is not very commonly used in programming...
/*#include <iostream>
using namespace std;
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when the constructor is called" << count << endl;
    }
    ~num()// This is the syntax for a destr....
    {
        cout << "This is the time when my destructor is called" << count << endl;
        count--;
    }
};
int main()
{
   cout<<"We are inside our main func"<<endl;
    return 69;
}*/

// 8------- Inheritance
// To increase the resualibility of program we use inheritance
// Suppose i have a class and want to make another class with same functions in previous class
// Then what would i do? Will i make another class with same functions of another class?
// No. With the help of inheritance this can be done easily..
// As it focuses the DRY(Don't Repeat Yourselves)...

// V- Suppose there is class of name employee then i want to make another class of name programmer
// Which will contain the functions of employee...
// With the help of inheritance this can be done...
// Employee class will be known as Base Class whereas the programmer class will be known as Derived Class

/* V- Types Of Inheritance
1- Single -
    If a derived class is from a only one base class then it is Single...
2- Multiple - Papa Zayada
    A Derived class with more than one base class is called as Multiple... 2 baap Ek baccha
3- Herarchial - Papa Ekkk
    Several Derived Class from only one base class... 1 baap 2 bacche
4- Multilevel -
    Deriving A class from a derived class... Different Level
5- Hybrid -
    It is the combination of multiple and multilevel Inheritance
*/

// 9------- Inheritanve Syntax And Visibility

/*#include <iostream>
using namespace std;
// Base Class
class employee
{

public:
    int id;
    float salary;
    employee(int n)
    {
        id = n;
        salary = 34.77;
    }
    employee() {}
};
// Derived Class Syntax
// Class {{Derived Class Name}}: {{Visibility Mode}} {{Base Class Name}}
//{
// Members, Methods etc...
// Note: By default visibi is Private
//}
// Creation of Derived Class from Base Class
class programmer : employee
{   public:

    int language = 77;
    void get(){
        cout<<"Badwaaa\n";
    }
};
int main()
{
    employee hirak(3);
    cout << hirak.salary<<endl;
    programmer pankaj;
    cout<<pankaj.language<<endl;
    pankaj.get();
    return 69;
}*/

// An exam of Single Inheritance

/*#include <iostream>
using namespace std;
class add
{
public:
    void sum()
    {
        int x, y;
        cin >> x >> y;
        cout << "The sum of x and y is:-" << x + y << endl;
    }
};
class mul : public add
{
public:
    void mukt()
    {
        int n, m;
        cin >> n >> m;
        cout << "The mul of n amd m is:-" << n * m << endl;
    }
};
int main()
{
    add hirak;
    mul hirak2;
    hirak2.sum();
    hirak2.mukt();
    return 69;
}*/

// 10-------  Protected Access Modifier
/*
      Access Modifiers   Pub Derivation  Pri Derivation   Pro Derivation
   1-  Private Members - Not Inherited    - Not In          -Not Inherited
   2-  Protected Mem   - Protected        - Private         -Protected
   3-  Public Mem      - Same             - Private         -Protected

*/

/*#include <iostream>
using namespace std;
class base
{
protected:
    int a;

private:
    int b;
};
class derive : base
{
};
int main()
{

    return 69;
}*/

// 11------- Multilevel Inheritance

/*#include <iostream>
using namespace std;
class base1
{
public:
    void name()
    {
        cout << "My name is SarathChandra Bala";
    }
};
class der1 : public base1
{
    void name2()
    {
        cout << "My name is Pradip Kumar Bala";
    }
};
class der2 : public der1
{
    void name3()
    {
        cout << "My name is Hirak Bala";
    }
};
int main()
{
    base1 hirak1;
    der1 hirak2;
    der2 hirak3;
    hirak3.name();

    return 69;
}*/

// 12------- Multiple Inheritance

//  The syntax is different from Single or multilevel

/*#include <iostream>
using namespace std;
class base1
{
public:
    int base1int;

public:
    void getbase1int(int a)
    {
        base1int = a;
    }
};
class base2
{
public:
    int base2int;

public:
    void getbase1int(int b)
    {
        base2int = b;
    }
};

// Now look at the syntax
class derive : public base1, public base2
{
public:
    void show()
    {
        cout << "The value of base1 is:" << base1int << endl;
        cout << "The value of base2 is:" << base2int << endl;
        cout << "The sum of base1 and base2 is:" << base1int + base2int << endl;
    }
};

int main()
{
    derive hirak;
    hirak.base1int = 23;
    hirak.base2int = 7;
    hirak.show();
    return 69;
}*/

// An Exercise given Harry of Multiple Inheritance

/*#include <iostream>
using namespace std;
class simplecalculator
{
public:
    int a, b;
    char opera;
    void getdata()
    {   // If we use switch statement it will be more beneficial but i already made in the switch...
        cout << "Type the two numbers:" << endl;
        cin >> a;
        cin >> b;
        cout << "Type the operator:" << endl;
        cin >> opera;
        if (opera == '+')
        {
            cout << "The sum of the two numbers is:" << a + b << endl;
        }
        else if (opera == '-')
        {
            cout << "The sub of the two numbers is:" << a - b << endl;
        }
        else if (opera == '/')
        {
            cout << "The divison of the two numbers is:" << a / b << endl;
        }
        else
        {
            cout << "The multiplication of the two numbers is:" << a * b << endl;
        }
    }
};
int main()
{
    simplecalculator hirak;
    hirak.getdata();
    return 69;
}*/

/*#include <iostream>
using namespace std;
class cal
{
public:
    char opera;
    int a, b;
    void getdata()
    {
        cout << "Type the numbers:" << endl;
        cin >> a >> b;
        cout << "Type your operator:" << endl;
        cin >> opera;
    }
    void showdata()
    {
        if (opera == '+')
        {
            cout << "The sum is:" << a + b << endl;
        }
        else if (opera == '-')
        {
            cout << "The sub is:" << a - b << endl;
        }
    }
};
int main()
{
    cal hirak;
    hirak.getdata();
    hirak.showdata();
    return 69;
}*/

// 13------- Ambiguity Resolution

/*#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << "How r u?\n";
    }
};
class base2
{
public:
    void greet()
    {
        cout << "Kese Ho?\n";
    }
};
class derive : public base1, public base2
{
    int a;

public:
    void greet()
    {
        base2::greet(); // Here it will use the greet of base1..With this trhe ambiguity will be resolved
    }
};
int main()
{
    base1 obj1;
    base2 obj2;
    derive d;
    obj1.greet();
    obj2.greet();
    d.greet(); // Here it should run as i simply derived it from two bases
    return 69; // But it says ambious. Why? Bcoz it says which greet should i use?
} // Whether base1 or base2? So we use ambguity resolution....*/

// 14------- Virtual Base Class

/* Suppose i have class A through which i made two derived classes B and C..In B and C we have a as member
   Now, with the help of B and C i made another class D... So, whom will it inherit A of class B or A of class C?
   To remove this ambiguity we use Virtual Base Class...
*/

/*#include <iostream>
using namespace std;
class student
{
protected:
    int rollno;

public:
    void setnumber(int a)
    {
        rollno = a;
    }
    void printnum(void)
    {
        cout << "Your roll no is:" << rollno << endl;
    }
};
class test : virtual public student
{
protected:
    float maths, physics;

public:
    void setmarks(float m, float x)
    {
        maths = m;
        physics = x;
    }
    void printmarks(void)
    {
        cout << "Your marks for Maths is:" << maths << endl;
        cout << "Your marks for Physics is:" << physics << endl;
    }
};
class sports : virtual public student
{
public:
    float score;
    void setscore(float s)
    {
        score = s;
    }
    void printscore(void)
    {
        cout << "Your PT score is:" << score << endl;
    }
};
class result : virtual public test, public sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        printmarks();

        printscore();
        cout << "Your total score is:" << total << endl;
    }
};
int main()
{
    result hirak;
    hirak.setnumber(77);
    hirak.setmarks(77.4, 69.0);
    hirak.setscore(77);
    hirak.display();

    return 69;
}*/

// 15-------Constructors In Derived Class

/*
Case1
Class B: Public A{
     First A will run then B (Order Of Execution Of The Constructurs)
};
Case2
Class A: Public B, Public C{
    B will run Then C then A....
};
Case3:
Class B: Public C, Virtual Public A{
     A will execute first then C then B
     };
*/

/*#include <iostream>
using namespace std;
class base1
{
    int data;

public:
    base1(int t)
    {
        data = t;
        cout << "Base1 Constructor Called\n";
    }
    void printdata1()
    {
        cout << "The value of data is:" << data << endl;
    }
};
class base2
{

public:
    int data2;
    base2(int x)
    {
        data2 = x;
        cout << "Base2 Constructor Called\n";
    }
    void printdata2()
    {
        cout << "The value of data is:" << data2 << endl;
    }
};
class derive : public base1, public base2
{
    int derive1, derive2;

public:
    derive(int a, int b, int c, int d) : base1(a), base2(b)
    {
        derive1 = c;
        derive2 = d;
        cout << "Derive Class Constructor Called\n";
    };
    void printdata3(void)
    {
        cout << "The value of derived1 is:"
             << derive1 << endl;
        cout << "The value of derived2 is:"
             << derive2;
    }
};
int main()
{
    derive hirak(1, 2, 3, 4);
    hirak.printdata1();
    hirak.printdata2();
    hirak.printdata3();
    return 69;
}*/

/*#include <iostream>
using namespace std;

int main()
{
    cout << "Generating the number\n";
    cout << "Asking CHAT GPT for the information\n";
    cout << "Gathering information from the NASA's satellite\n";
    cout << "Your number is:7";

    return 69;
}*/

// 16-------Initialization In Constructors
/*
 Syntax
 constructor(argument): Initialization{
    Body Of tHe Code;
 }
*/

/*#include <iostream>
using namespace std;
class test
{
    int a, b;

public:
    test(int i, int j) : a(i), b(j) // I could have also don a=i and b=j in the body which i did in above code
    {
        cout << "The value of a is:" << a << endl;
        cout << "The value of b is:" << b;
    }
};
int main()
{
    test t(4,6);

    return 69;
}
*/

// 17------- Revisiting Pointers

/*#include <iostream>
using namespace std;
int main(){
int t =10;
int *w=&t;
cout<<*w; // this will give 10 . if without *address of t..
return 69 ;*/

// Now , new keyword in pointer
/*#include <iostream>
using namespace std;

int main()
{
    int *p = new int(7); // I just made an int and assigned a value to it
    cout << *p;
    return 69;
}*/
// Delete Keyword

/*#include <iostream>
using namespace std;
int main()
{
    int *arr = new int[4];
    arr[0] = 1;
    arr[1] = 2;
    cout << arr[0];
    return 69;
}*/

// 18------- Pointers To Object And Array

/*#include <iostream>
using namespace std;
class complex
{
public:
    int real, imaginary;

public:
    void getdata()
    {
        cout << "The real is:" << real << endl;
        cout << "The imaginary is:" << imaginary << endl;
    }
    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{
    complex a;
    complex *ptr = &a; // Now i will make a ptr which will point to a ... Now if i remove the a. then...
    // a.setdata(7, 77); // Here it will run easily ..
    // a.getdata();
    //(*ptr).setdata(7, 77); // Here i created a pointer and pointed it to object which is a... Remember to use ()...
    //(*ptr).getdata();
    // Now lets discuss arrow operator...
    ptr->setdata(7, 69); // Here its a arrow operator Its up to u whether u use it or not.. It functions the same
    (*ptr).getdata();
    return 69;
}*/

// 19------- Array Of Objects Using Pointers

/*#include <iostream>
using namespace std;
class shop
{
    int id;
    float price;

public:
    void setdata(int a, int b)
    {
        id - a;
        price = b;
    }
    void getdata()
    {
        cout << "Code of this item is:" << id << endl;
        cout << "The price of this item is:" << price << endl;
    }
};
int main()
{
    int size = 3;
    int p;
    float q;
    // int *ptr= &size;
    //  int *ptr = new int[66];
    // 1- General item  // Here i made a size and assigned 3.. Which means i have made 3 no. of arrays using ptr
     //  2- Hardware item
     //  3- Veggies item

shop *ptr = new shop[size];
shop *ptrtemp = ptr;
for (int i = 0; i < size; i++)
{
    cout << "Enter Id and Price of: " << i + 1 << endl;
    cin >> p >> q;
    ptr->setdata(p, q);
    ptr++;
}
for (int i = 0; i < size; i++)
{
    cout << "Item Number: " << i + 1 << endl;
    ptrtemp->getdata();
    ptrtemp++;
}

return 69;
}*/

// 20------- This Pointer
// This is a keyword which is a ptr which points to the object which
// invokes the member function

/*#include <iostream>
using namespace std;
class A
{
    int a; // Here the  name is similar to the setvalue

public:
    void setdata(int a) // Both have same name
    {
       this-> a = a; // Here the  name is similar to the setvalue
    }
    void getdata()
    {
        cout << "The value of a is " << a;
    }
};
int main()
{
    A a;
    a.setdata(7); // Now, if i run this Garbage Value will come
    a.getdata(); // To remove this we use this pointer
    return 69;
}*/

// 21------- Polymorphism...

// 1------- Polymorphism
/*  Polymorphism in this Poly means Bohut and Morphism means form
    Simply put -- One name Multiple forms
    ex Function Overloading

    Two Types:-
    1- Compile Time :-
    It is achieved with the help of Function and Operator Overloading
    Hume phele se pata chal jata he kee kon sa phela function/operator execute hoga
    2- Run Time Polymorphism
    IT is achieved with the help of virtual functions
*/

// 22- Pointers To Derived Class

/*#include <iostream>
using namespace std;
class base
{
public:
    int var1 = 77;
    void display()
    {
        cout << "Displaying The Base Class " << var1 << endl;
    }
};
class derived : public base
{
public:
    int var2 = 69;
    void display()
    {
        cout << "Displaying The Derived Class " << var2 << endl;
    }
    void display()
    {

        display();
    }
};
int main()
{
    base *ptr;      // Created a pointer which points to the object of base class
    base obj;       // Here i created an object of base
    derived obj2;   // Here i created an object of derived class
    ptr = &obj2;    // Base class pointer points to the object of derived class
    ptr->display(); // But if i run the display func of derived class it will not run
                    // As the ptr is of the base class
                    // The display func of base class will run
    derived *ptr2;
    ptr2 = &obj2;
    ptr2->display();
    return 69;
}*/

// 23------- Virtual Fucntions
// Now, in above i told that only the func of base class will run even if if point a ptr of base class to the obj of derived class
//  But if i want to run the func of derived class , we will discuss in this virtual functions
/*#include <iostream>
using namespace std;
class base
{
public:
    int var1 = 77;
    virtual void display() // Here i added virtual key.. Now only the derived class func will run
    {
        cout << "Displaying The Base Class " << var1 << endl;
    }
};
class derived : public base
{
public:
    int var2 = 69;
    void display()
    {
        cout << "Displaying The Derived Class " << var2 << endl;
    }
};
int main()
{
    base *ptr;
    base obj;
    derived obj2;
    ptr = &obj2;
    ptr->display();

    return 69;
}*/

// 24------- Virtual Functions Example

/*#include <iostream>
using namespace std;
class codewithhirak
{
protected:
    char title[30];
    float rating;

public:
    codewithhirak(int a);
};
int main()
{

    return 69;
}*/

// 25------- Abstract Base Class
/* It mush Have One Pure Virtual Functions
   Now, The Pure Virtual Func is used to make abstract base class
   The Abstract Class is a class in which we will make different classes from that class and their func will run i.e Derived Classes
   and also abstract base class cannot be used to make objects..

*/
/*#include <iostream>
using namespace std;

int main(){

return 69 ;
}
*/

// 27------- File I/O
/*
    In c++ a person can interact with the file and can read and write from the file
    Any program in c++ can be used to interact with our files
    What are files?
    Files are the collection of data which is located in the memory
    In c++ if we want to use the concept of files we use
*/
/*#include <iostream>
#include <string>
#include <fstream> // Helps us to use the concept of files
// The useful classes for working with files in c++ are:-
//  1- fstreambase - Base class
//  2- ifstream - Derived from fstreambase
//  3- ofstream - Derived from fstreambase
//  These classes can be used from their header file which is <fstream>


 There are two ways to open a file
 1- Using the cnstructor
 2- Using the memeber func open() of the class



*/

// 28------- File I/O [Read and Writing A File]

/*#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string name;
    int x;
    ofstream out("Write.txt"); // Used To Write Operations In The Files
    cout << "Enter Your name--";
    getline(cin, name);
    out << name;
    out.close(); // This is used to close a file if the read or write is being done from the same file
    ifstream in("Read.txt"); // Udes To Read Operations From The Files
    in >> x;
    cout<<x;
    return 69;
}*/

// 29------- File I/O open() and eof()

/*#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ofstream out;
    out.open("Write.txt"); // Another Technique To Open the file
    out << "Heeyooo";
    out.close();
    ifstream in;
    string h;
    in.open("Read.txt");
2    while (in.eof() == 0) // This will help to read 100 to infinite lines from the file
    {
        getline(in, h);
        cout << h << endl;
    }
    in.close();
    return 69;
}*/

// 30------- Template
/* 1- It is also known as paramerized classes
   2- It follows the DRY(Do not repeat yourself) principle

   Syntax :-
   template<class T> T can be int float char etc...
   class vector{
    t*arr;
    public:
    vector(t*arr){
        //code
    };
   };
*/

// Writing First Template
// Suppose you have to have values in int, float , double, char..
// So, will u make different classes for these?
// No, with the help of the template this can be done..

/*#include <iostream>
using namespace std;
template <class h> // now, where ever is int and i want different data type i will use h ...
class vector       //  Later, i will specify the data taype of h...
{
public:
    int size;
    h *arr;
    vector(int m)
    {
        size = m;
        arr = new h[size];
    };
    h dotproduct(vector &v)
    {
        h d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    };
};

int main()
{
    vector<float> v1(3); // If i use double then double value will be used...
    v1.arr[0] = 1.56;    // Here its in int but what if i want this in float?
    v1.arr[1] = 2.66;    // Therefore we use template
    v1.arr[2] = 2;

    vector<float> v2(3);
    v2.arr[0] = 0;
    v2.arr[1] = 2.78;
    v2.arr[2] = 3.34;

    float a = v1.dotproduct(v2);
    cout << a << endl;

    return 69;
}*/

// My First Template

/*#include <iostream>
using namespace std;
template <class h>
class sum
{
public:
   h x, y;
   void data()
   {
      cout << "Type the numbers:-\n";
      cin >> x >> y;
      float a = x + y;
      cout << "The sum is:- " << a;
   };
};
int main()
{
   sum<double> hirak; // The declaration of an object using template is done after declaring the template

   hirak.data();

   return 69;
}*/

// 31- Templates With Multiple Parameters
//  Suppose if u want to make custom 2 datatypes then the syntax will be:
/*#include <iostream>
using namespace std;
template <class t1, class t2>
class myclass
{
public:
    t1 data1;
    t2 data2;
    myclass(t1 a, t2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << endl
             << this->data2;
    }
};
int main()
{
    myclass<int, float> obj1(7, 5.757);
    obj1.display();
    return 69;
}*/

/*#include <iostream>
#include <cmath>

using namespace std;
template <class h>
class math
{
public:
    h x, y;
    math(h a, h b)
    {
        x = a;
        y = b;
    };
    void result()
    {

        cout << log(x) << endl
             << log(y);
    }
};
int main()
{
    math<float> hirak(2.34, 5.67);

    hirak.result();

    return 69;
}*/

// 32------- Templates With Default Parameters
/*
    In the above code at line 2276 i created a template and passed the parameters..
    This can be done when declaring the template.....
    I will show u with the above code itself...
*/

/*#include <iostream>
#include <cmath>

using namespace std;
template <class h = double> // Here i just assigned h float.. Earlier i did this in the main funcc...
class math
{
public:
    h x, y;
    math(h a, h b)
    {
        x = a;
        y = b;
    };
    void result()
    {

        cout << log(x) << endl
             << log(y);
    }
};
int main()
{
    math<> hirak(2.34, 5.67); // Angular Bracket is empty as no parameters is being passed bcoz i did it in the templa itself

    hirak.result();

    return 69;
}*/

// 33-------Templates With Functions

/*#include <iostream>
using namespace std;
template <class h = float, class g = float>
g add(h a, g b) // Here i can change the values of a and b using templates....
{
    return a + b;
}
int main()
{
    float a;
    a = add(3.56, 4.53456);
    cout << a;
    return 69;
}*/

// 34------- Templates Overloading

/*#include <iostream>
using namespace std;
template <class h>
class hirak
{
public:
    h data;
    hirak(h a)
    {
        data = a;
    }
    void display()
    {
        cout << data;
    }
};
int main()
{
    hirak<float> obj(3.894);
    obj.display();
    return 69;
}*/

// While Loop
/* A tip-- In the bracket of while always put a false condition..
    and outside the bracket of loop a true condition...
    See in Line--- 2425
*/

/*#include <iostream>
#include <string>
using namespace std;

int main()
{
    string password = "hello";
    string input;

    cout << "Enter the password: "<<flush;
    cin >> input;

    while (input != password)
    {
        cout << "Password Denied" << endl;
        cout << "Enter the password: ";
        cin >> input;
    }

    cout << "Password Accepted" << endl;
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i < 5; i++)
    {
        cout << "Hello "<< i << endl;

        if (i == 2)
            break;
    }

    return 69;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int t, x = 7;

    cout << "Enter the number: ";
    cin >> t;

    while (t != x)
    {
        cout << "Password Denied\n";
        cout << "Enter the number: ";
        cin >> t;
    }
    cout << "Password Accepted";
    return 69;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the value: ";
    cin >> num;
    while (num % 3 != 0)
    {
        cout << "Not divisible by 3\n";
 9      cout << "Enter the value: ";
        cin >> num;
    }

    cout << "Divisible by 3";

    return 69;
}*/

/*#include <iostream>
using namespace std;
int main()
{
   int x;
   cout << "Enter the number:- ";
   cin >> x;
   while (x % 2 != 0)
   {
      cout << "The number is odd\n";
      cout << "Enter the number again:- ";
      cin >> x;
   }
   cout << "The number is even";
   return 69;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Type number:";
    cin >> x;
    while (x > 7)
    {
        cout << "It is not smaller than 7\n";
        cout << "Type number:";
        cin >> x;
    }
    cout << "It is smaller than 7";
    return 69;
}*/

// Array

/*#include <iostream>
using namespace std;
int main()
{
    int marks[4] = {1, 2, 3, 4};

    int i=0;
    i < 4;
    while (i < 4)
    {
        cout << marks[i];
        i++;
    }

    return 69;
}*/

// 2- dimensional Array

/*#include <iostream>
#include <string>
using namespace std;
int main()
{
   // string animals[2][3]; // Here the first Bracket is for Rows and the second bracket is for Columns in multi arraysss
    string animals[2][3] = {
        {"Fox", "Panther", "Cheetah"},    // Here i have 3 animals which represent the columns
        {"Tiger", "Leopard", "Penguin"}}; // And two brackets which represent the rows...
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << animals[i][j] << " ";
        }
        cout << endl;
    }

    return 69;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int array[2][3] = {
        {2, 3, 4},
        {5, 6, 7}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 69;
}*/

// Calculator Created with object to ptr, template and class....

/*#include <iostream>
using namespace std;
template <class h, class k>
class calculator
{
public:
    h x, y;
    k opera;
    void setdata(void)
    {
        cout << "Enter the two numbers: \n";
        cin >> x >> y;
        cout << "Enter the operator: ";
        cin >> opera;
    }

    void getdata(void)
    {
        switch (opera)
        {
        case '+':
            cout << x + y;
            break;
        case '-':
            cout << x - y;
            break;
        case '*':
            cout << x * y;
            break;
        case '/':
            cout << x / y;
            break;
        default:
            cout << "Sahi Operator Daal Benchod";
            break;
        }
    }
};
int main()
{

    calculator<float, char> obj;
    calculator<float, char> *ptr;

    ptr->setdata();
    ptr->getdata();
    return 69;
}*/

/*#include <iostream>
using namespace std;
class cat
{
public:
    void meow()
    {
        cout << "Meowwwww" << flush;
    }
    void angry()
    {
        cout << "Araaahahaaa ";
    }
};
int main()
{

    cat *ptr;
    ptr->meow();

    return 69;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "I love c++\n";
    }

    return 69;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int count(7);
    int i{0};
    while (i < count)
    {
        cout << "lckjxd\n";
        i++;
    }

    return 69;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    char array[] = {'a', 'b', '\0'};
    cout << array;

    char array2[] = {"dkjcnsnm"};

    cout << array2;
    return 69;
}*/

/*#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    const char *ptr = {"fjenf"};
    cout << ptr;

    return 69;
}*/

/*#include <iostream>
using namespace std;
int main(){
    int a;
    a=6;
    cout<<a++<<endl;
    cout<<a<<endl;
    cout<<++a;
return 69 ;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int data = 7;
    int &refdata = data;
    cout << data << endl;
    cout << refdata;
    return 69;
}*/

/*#include <iostream>

using namespace std;
int main(){

    cout<<isalpha('c');
return 69 ;
}
*/

/*#include <iostream>
#include<string>
using namespace std;
int main(){
  string ch ("Hi how are u?");
   string hh ("KJBHB");
   cout<< ch + hh;
return 69 ;
}
*/

/*#include <iostream>
using namespace std;
int add(int a, int b)// The variable declariation is parameters
{
    return a + b;
}
int main()
{
    cout << add(4, 7);// Passing values to func is arguments...
    return 69;
}*/

/*#include <iostream>
using namespace std;
int max(int a, int b);

int main()
{
    cout << "The greatest no. is:" << max(21, 20);
    return 69;
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int a = 6;
    int &b(a);
    cout << b;
    return 69;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int a = 7;
    long int b = 5;
    char f = 'a';
    cout << "The size of int is: " << sizeof(a) << endl;
    cout << "The size of long int is: " << sizeof(b) << endl;
    cout << "The size of char is: " << sizeof(f) << endl;
    return 69;
}*/

/*#include <iostream>
using namespace std;
class cyc
{
public:
    float pi, r, h;


    cyc(float x, float y)
    {   pi = 3.14;
        r = x;
        h = y;
    }
    void getdata()
    {
        cout << pi * r * r * h;
    }
};
int main()
{
    cyc hirak(3.454, 5.6);
    cout<<sizeof(cyc)<<endl;
    cout<<sizeof(float)<<endl;
    hirak.getdata();
    return 69;
}*/

/*#include <iostream>
#include <string>
using namespace std;
string name;
int age;

class player
{
    public:
    void setdata()
    {
        cout << "Type the name of the player:";

        getline(cin, name);

        cout << "Type the age:";
        cin >> age;
    }
};
class derive : public player
{
public:
    void getdata()
    {
        cout << "The player name is " << name << " and age is " << age;
    }
};
int main( )
{
    player *hirak = new player;
    hirak->setdata();
    derive hirak2;
    derive *obj = &hirak2;
    obj->getdata();

    delete hirak;

    return 0;
}*/

/*#include <iostream>
using namespace std;
class hirak
{
public:
    hirak() = default;
    int add(int a, int b)
    {
        return a + b;
    }
};
class hirak2 : public hirak
{
public:
    int add(int a, int b)
    {

        return a + b;
    }
};
int main()
{

}*/

/*#include <iostream>
using namespace std;
int main()
{
    cout << "Hello ";
    cout<<"Added new things";
    return 0;
}*/

// Traversing in An array----
/*#include <iostream>
using namespace std;
int main()
{
    int l, a[7];
    cout << "Type the length of the array ";
    cin >> l;
    cout << "Accessing the array ";
    for (int i = 0; i <= l - 1; i++)
    {
        cin >> a[i];
    }
    cout << "Travesing the array ";
    for (int i = 0; i <= l - 1; i++)
    {
        cout << a[i];
    }

    return 0;
}*/

// Revesiting The OOPS AFTER 3RD SEM

/*#include <iostream>
using namespace std;
class animal
{
public:
    string name;

public:
    int age;
    void info()
    {
        cout << "Type the name of the dog ";
        cin >> name;
    }
    void setage()
    {

        cout << "Type the age of the dog ";
        cin >> age;
    }

    void result()
    {
        cout << "The dog name is " << name << " and age is " << age;
    }
};

int main()
{
    animal mydoggo;
    mydoggo.info();
    mydoggo.setage();
    mydoggo.result();

    return 0;
}*/

// at func length func nesting of member func

/*#include <iostream>
#include <string>
using namespace std;

class binary
{
    private:
    string a;
    public:
    void read()
    {
        cout << "Type the binary ";
        cin >> a;
        che_bin(); //Nesting of member func We can declare a func inside other func before it is called However this
    }              // Is not working as i intended too...
    void che_bin()
    {
        for (int i = 0; i < a.length(); i++) // The length func gets the length of the string
        {
            if (a.at(i) = '1' && a.at(i) == '0') // Then on based on the length we use at func which will go through
            {
                cout << "It is binary"; // all the length that means indices and print
                exit(69);               // Exit or return is necessary otherwise it will behave unappropriately
            }
        }


        cout << "Not Binary"; // used outside as if at the lenght is 3880of a string then at given index 0 it is 3
        exit(77);             // Then it will not go through the rest of the indexs as 3 itself is not a binary...
    }
};
int main()
{
    binary number;
    number.read();
    //number.che_bin();
    return 0;
}*/

// Static Data Member

/*#include <iostream>
using namespace std;
class emp
{
    int id;
    // int count=0; //Here if i use it this and want to calculate the total number of employees both the emp will show 1-1-1
    // This is where static comes into play as the int count is being used by all the object separately
    // Now if we want to use it as a whole like class's variable then we have to use static
    // This will help us to count the emp number

    static int count;
    /*  The count variable is shared among all objects of the emp class not as separately that we say earlier,
        allowing you to keep track of the total number of employees across all instances.


public:
    void setdata(int a)
    {
        id = a;
        count++; // Here i am doing post incre as i want to increase the count whernever i create a new obj it will be +1
        cout << "The employee id is " << id << " and the employee number is " << count << endl;
    }
    void static getcount()
    {
        // cout<< id; //This is wrong as it is a int not static
        cout << "The count is " << count; // This is a static function..
    }                                     // Static func has only acces to static variabled and static members
};
int emp ::count; // The declaration of static is done outside of the class as a static member ...
                 // Here i am not talking about static variable
                 // No need to intialize static as it is already = 0
int main()
{
    emp hirak;
    emp sanjit;
    emp smriti;
    hirak.setdata(3);
    sanjit.setdata(4);
    smriti.setdata(7);
    emp::getcount(); // Declaration of static func not static member
    return 0;
}*/

// Objects using arrays

/*#include <iostream>
using namespace std;
class emp
{
    int id;
    int salary;
    static int count;

public:
    void setid_get()
    {
        cout << "Enter the id ";
        cin >> id;
        count++;
        cout << "The id is " << id << " and salary is " << 1000 << endl;
        // count++; This is also correct
        cout << "The number of employee is " << count << endl;
    }
};
int emp ::count;
int main()
{
    emp hirak[4];               // Here i created an object which contains 4
    for (int i = 0; i < 4; i++) // Initialized with a for loopp
    {
        hirak->setid_get(); // Printing the func using a loop
                            //  Helpful when u have 1000 things
    }

    return 0;
}*/

/*Friend Functions

1- Not a part of class that means its just a normal func that has access to only private mem
2- Cannot be called from object of the class
3- Usually contains object as arguments
4- Can be declared in publis or private section of the class


#include <iostream>
using namespace std;
class add // In the friend func we have to pass an argument related to the class
{
   int a, b;

public:
   add(int x, int y)
   {
      a = x;
      b = y;
   }
   friend void calculate(add obj); Also declare it to the class
};
void calculate(add obj) //Here i created an argument related to the class
{
   cout << obj.a + obj.b;
}

int main()
{
   add hirak(2, 3); //Now create an object of the class
   calculate(hirak); //Then pass the obj to the func
   return 0;
}
// Friend Classes

/*#include <iostream>
using namespace std;

class variable
{
    int a, b;

    friend class cal;
};
class cal
{
public:
    int add(variable add1)
    {
        add1.a = 7;
        add1.b = 56;
        return add1.a + add1.b;
    }
};
int main()
{
    variable add1;
    cal sum;
    cout << sum.add(add1);

    return 0;
}*/

/*#include <iostream>
using namespace std;
class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "The point is "
             << " (x+y) " << x + y << endl;
    }
    friend void distance(point X, point Y);
};
void distance(point X, point Y)
{

    int dist = 2 * (X.x + Y.y) + 2 * (X.y + Y.y);
    cout << "The dist is " << dist;
};
int main()
{
    point X(3, 4);
    point Y(2, 34);
    X.display();
    Y.display();
    distance(X, Y);
    return 0;
}*/

// Constructor Overloading

/*#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int x, int y) // Same like func overloading
    {
        a = x;
        b = y;
    }
    complex(int c ) // Create as many as possible but the argument should be different
    {
        a = c;
        b = 99;
    }
    void print()
    {
        cout << "Tour complex number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    complex a1(2, 3); // Now the input that matches the arguments that constructor will be called
    a1.print();
    complex b1(7);
    b1.print();
    return 0;
}
*/

// Copy Constructor

/*#include <iostream>
using namespace std;
class data
{
    int a;

public:
    data()
    {

    } // Here this is a default const
    data(int x)
    {
        a = x;
    }
    void show()
    {
        cout << "The number is " << a << endl;
    }
};
int main()
{
    data aa(4); // If u dont assign a value u will need a default const
    aa.show();

    data cc(aa); // Here with this syntax the value of aa will be copied to cc
    cc.show();   // The c++ provides inbuilt copy const, but u can also make it on your own, If u dont have a copy then c++ uses its own

    return 0;
}*/

// Inheritance

/* Base class public mem are only inherited
   Private mem in base cannot be inherited
   Under the Visibility mode
    - If publically, then public mem of base will be publically inherited
      If private, then public mem of base will be private in derive
 Syntax
    class derive : Visiblity base class name {

    };

*/

//  Access Modifier
//  I have saved a image in the md file at the last of the line

// Multilevel Inheritance

/*#include <iostream>
using namespace std;
class student
{
protected:
    int rollno;

public:
    void setnum(int a)
    {
        rollno = a;
    }
    void getnum()
    {
        cout << "The roll number is " << rollno << endl;
    }
};
class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void setmarks(float a, float b)
    {
        maths = a;
        physics = b;
    }
    void getmarks()
    {
        cout << "The marks for maths are " << maths << endl;
        cout << "The marks for physics are " << physics << endl;
    }
};

class result : public exam
{
    float percent;

public:
    void display()
    {
        setnum(2);
        getnum();
        cout << "Your percentage is " << (maths + physics) / 2 << endl;
    }
};

int main()
{
    result hirak;
    hirak.setmarks(77.7, 88.3);
    hirak.getmarks();
    hirak.display();
    return 0;
}*/

// Multiple Inheritance
/*#include <iostream>
using namespace std;
class base1
{
protected:
    int base1var;

public:
    void getbase1(int a)
    {
        base1var = a;
    }
};
class base2
{
protected:
    int base2var;

public:
    void getbase2(int x)
    {
        base2var = x;
    }
};
class derive : public base1, public base2 //Syntax for Multiple inh
{
public:
    void show()
    {
        cout << "The sum of these numbs are " << base1var + base2var;
    }
};
int main()
{
    derive hirak;
    hirak.getbase1(3);
    hirak.getbase2(4);
    hirak.show();
    return 0;
}*/

/*#include <iostream>
using namespace std;
class calculator
{
private:
    int a, b;

public:
    calculator() {
        a=0;
        b=0;
    }
    calculator(int x, int y)
    {
        a = x;
        b = y;
    }

public:
    void display()
    {
        cout << "The sum is " << a + b<<endl;
        cout << "The mul is " << a * b<<endl;
        cout << "The sub is " << a - b<<endl;
        cout << "The divide is " << a / b<<endl;
    }
};
class scientific
{
};
class derive : public calculator, public scientific
{
public:
    derive() {}
    void shown()
    {
        cout << "All done";
    }
};
int main()
{
    calculator obj(10, 10);
    derive obj2;
    obj2.display();
    obj2.shown();

    return 0;
}*/

// Ambiguity Resolution
// If u have same name of functions in the classes and u make a derive class from those classes and if u
// Call the function of the classes from the object made from the derive there will be an ambguity
/*#include <iostream>
using namespace std;
class greetings
{
public:
    void greet()
    {
        cout << "Good Morning\n";
    }
};
class greetings2
{
public:
    void greet()
    {
        cout << "Good Evening\n";
    }
};
class derive : public greetings, public greetings2
{
public:
    void greet() //Here a func of derive
    {
        greetings2::greet(); //That calls the func of the base class
        //This is the main synatx
    }
};
int main()
{
    greetings obj;
    greetings2 obj2;
    obj.greet(); // No Ambiguity as i am calling that func from its own class
    derive obj3;
    obj3.greet(); // Ambiguity as dont know which func to call from greetings or greet2?
    return 0;
}*/

/*#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {

        sum = sum + i;
    }
    cout << sum;
    return 0;
}*/

// Virtual Base Class
/* Suppose u have class A that contains an int a now two classes have derived from A which are the
   class B and class C and both of them have the a..
   Now, a class D has been derived from class B and Class C..
   If u call the a of class D whom will it call?
   As now there are two copies of a in class D one from the class B and the class C..
   This is where the virtual vase class comes into the play..
   Now, i will declare the class A as virtual as whenever this type of ambuity comes into play
   only one copy will be shared
*/

/*#include <iostream>
using namespace std;
class student
{
protected:
    int roll;

public:
    void set(int x)
    {
        roll = x;
    }
    void print()
    {
        cout << "Your roll number is " << roll << endl;
    }
};
class test : virtual public student
{ // Here this is the syntax
protected:
    float math;
    float physics;

public:
    void setmarks(float m, float n)
    {
        math = m;
        physics = n;
    }
    void getmarks()
    {
        cout << "Your result is " << math << " and " << physics << endl;
    }
};
class sports : virtual public student
{
protected:
    float score;

public:
    void setscore(int a)
    {
        score = a;
    }
    void print()
    {
        cout << "Your PT score is " << score << endl;
    }
};
class result : public test, public sports
{
private:
    float total;

public:
    void display()
    {
        student::print(); // Ambiguity
        getmarks();
        print();
        cout << "Your total is " << math + physics + score << endl;
    }
};
int main()
{
    result hirak;
    hirak.set(23);
    hirak.setmarks(2.23, 2.33);
    hirak.setscore(80);
    hirak.display();
    return 0;
}*/

// Derived Class constructor

/* Order of Execuiton of constructor

1- class a : public b{
            First B then A
};

2- class a : public b, public x{
            First B then X then A
};

3- class a : public class c , virtual public x{
            First X as virtual classes have high priority then C then A
};
*/

/*#include <iostream>
using namespace std;
class base
{
protected:
    int a;

public:
    base(int x)
    {
        a = x;
    }

public:
    void display()
    {
        cout << "Your number is " << a;
    }
};

class derive : public base
{
};
int main()
{
    base hirak(1);
    hirak.display();
    derive->display(); //Error at this line
    return 0;
}*/
// Wasnt able to understand the derived class const

//  Initialization List / Section
/*  Syntax
    constructor ( arguments ) : initialization section {
        code;
    }

*/
/*#include <iostream>
using namespace std;
class test
{
    int a, b;

public:
    test(int i, int j) : a(i), b(j) // Initialization Section
    {
        // a = i; I can also do like this
        // b = j;
        cout << "Value of a " << a << endl;
        cout << "Value of b " << b;
    }
};
int main()
{
    test t(2, 4);
    return 0;
}*/

// Ptr to objects and this ptr

/*#include <iostream>
using namespace std;
class test
{
public:
    void display()
    {
        cout << "You have been failed";
    }
};
int main()
{
    test abhishek;         // Just a simple object of class test
    abhishek.display();    // This is similar to
    test *ptr = &abhishek; // Here i created a ptr that points to that obj

    ptr->display(); // This and

    (*ptr).display(); // This can also be used instead of arrow operator
                      //  Here the * is used to dereference, whereas if we use ->
                      // This can be done  easily.

    return 0;
}*/

// Array of Objects
// Wasnt able to understand
// 51,52 NO. Vids of Harry
/*#include <iostream>
using namespace std;
class shop
{
    int id;
    float price;

public:
    void getdata(int a, int b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "Code of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};
int main()
{
    shop *ptr = new shop[2];

    return 0;
}*/

// This Pointer
/*#include <iostream>
using namespace std;
class nigen
{
    int age;

public:
    void setage(int age)
    {
        // age = age; here if i do like this and run it garbage value will come
        this->age = age; // This ptr points to variable that is beinge created
                         //  Now the erroe will be gone
    }
    void getage()
    {
        cout << "Ypur age is " << age;
    }
};
int main()
{
    nigen hirak;
    hirak.setage(3);
    hirak.getage();
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()

{
    int a;
    cout << "Enter the number ";
    cin >> a;
    for (int i = 1; i <= 10; i++)
    {
        cout << i * a << endl;
    }

    return 0;
}*/

// Ptr to derived class
// A ptr of base class will run the members of its base class only.
// Even if the ptr is of base class and pointing to the derive class the member func of base class will
// run not the derived ones.
/*#include <iostream>
using namespace std;
class base
{
public:
    void display()
    {
        cout << "Hello\n";
    }
};
class derive : public base
{
public:
    void display()
    {
        cout << "Hi\n";
    }
};
int main()
{
    base hirak;         // Here i created an object of class base
    base *ptr = &hirak; // And a ptr of class base and pointing it to the object of class base
    ptr->display();     // Now i am accessing the display of class base using the ptr
    derive hirak2;
    ptr = &hirak2;   //    Here i have pointed the ptr of base class to the obj of derived class
    ptr->display();

    return 0;
}*/
// Virtual Func
// With virtual func we achieve the run time polymorphism
/* Now in the above ptr to derived class we learned that if a ptr is of base class and pointing to
object of derived class and when we call the func only the base class would run.
As the ptr is of base class thats why its running the func of the base class.
Now if we want to run the func of derive even if the ptr is of base then we use the virtual fucn.
*/

/*#include <iostream>
using namespace std;
class base
{
public:
    int a = 1;
    virtual void display() // Just apply the virtual keyword
    {                      // Now its saying if the ptr is of base class and pointing the object
                           // to class derive then use its func
        cout << "1 The number is " << a;
    }
};
class derive : public base
{
public:
    int b = 2;
    void display()
    {
        cout << "The number is " << b;
    }
};
int main()
{
    base *ptr;
    derive obj;
    ptr = &obj;
    ptr->display(); // Similar situation like above running the func of base class.
                    // Now to change we use virtual
    return 0;
}*/

// Files
/* In order to use the files concept we include a header file which is #include <fstream>
With this we use the classes of files also which means we can use some more tools which are
fstreambase
ifstream- Derived from fstreambase
ofstream- Derived from fstreambase

In order to use files u will have to open the file first. Primilarly there are tw ways to poen a file in c++
1- By using a constructor
2- By using the member func open() of the class


*/

/*#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream out;         // Helps to write into the file
    out.open("File.txt"); // Opening the file
    out << "Hi";          // Writing into it
    out.close();         // Now closing it as a best practice

    ifstream in;
    in.open("File.txt");
    string h;
    in >> h;
    cout << h;
    in.close();
    return 0;
}*/

// Template
/* An object is a teamplate of class and for class a template is a template
We use template as if u want to make classes for int, float , char then u will have to
make various classes which destroys the DRY principle.
Thus we use the template


#include <iostream>
using namespace std;
template <class h > // Declaration of template
//template <class h , class x > U can have multiple parameters
class vector
{

    h a; // Use that h where ever u want to tell the compiler that i will give its type in the main

public:
    void display()
    {
        cout << "Enter the number ";
        cin >> a;
        cout << "The number is " << a;
    }
};

int main()
{
    vector<float> hirak; // Type class name the initialize the type then object
    hirak.display();
    return 0;
}*/

// Template with default args

/*#include <iostream>
using namespace std;
template <class h = int, class k = float> //Just specify the type
class hirak
{
    h a;
    k b;

public:
    hirak(h x, k y) //Constr is also using template as if i used some type then it would have
                    //not made any sense as then i am limiting myself but with template i
                    //i can assisgn the type
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << "The value is \n"
             << a;
        cout << "The value is " << b;
    }
};
int main()
{
    hirak<> obj(4, 6.55); //But leave the template blank as we have already said the type
    obj.display();
    return 0;
}*/

// Template Function
// I can also use templates in func also
/*#include <iostream>
using namespace std;
template <class h, class t>
float funcavg(h a, t b)
{
    float avg = (a + b) / 2.0;
    return avg;
}
int main()
{
    float a = funcavg(2, 3.43);
    cout << a;
    return 0;
}*/

/*#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
};
int main()
{
    int a = 4, b = 7;
    swap(a, b);
    cout << a << endl;
    cout << b;

    return 0;
}*/

// STL
/*  The STL stands for standard template library. Its a library that contains various components.
    The components include containers, algorithms, iterators.
    We use STL to save time and not to reinvent the wheel.
    It was introuced by two people from HP.
*/

// Containers
/* Containers are of three types-
   1- Sequence Containers
        They store data in linear fashion
        Most popular ones are vectors, lists, deques.

   2- Associative Containers
        These are used for fast searching, deletion, access.
        Most popular ones are map, multimap, set, multiset
        Stores data in tree like structure.
   3- Derived Containers
        Derived from the above containers and helps in real world modeling

When to use which?
    1- Sequence
    Vectors have fast random access but insertion and deletion at the middle is slow but its fast at the end.
    Lists have slow random access but insertion and deletion at middle or end is fast.

    2-Associative
    All operation are fast except random access.

    3-Derived
    It depends as its real world modelling to understand more watch cwh's DS series.
*/

// Iterators
/* Iterators are used to access elements presented in the given list, map etc.
As below to acess the elements of a vector i do

for (int i = 0; i < v.size(); i++)
{
    v[i];
}

But we can also use iterator to get the elements as
vector<int> :: iterator it;
for (it.begin(); it != v.end(); it++)
{
    cout<<*it;
}

Here this we we can access the elements of a vector, maps, list, sets easily
*/

// Range based loops
/* When we declare iterators trhe code becomes more big and complex so to ensure that its less and easily understandable,
we use range based loops as
for (int &value  : v) --The value that i a get from a vector v, set v , map v it will act as a copy that means i am getting a
{
        cout<<value; // copy of the vector v, set v , map v not the real value. To get real use reference
}

    for(int &value  : v){
        cout<<value;
    }
*/

// Variable reference to a func

/*#include <iostream>
using namespace std;
void display(int &a)
{
    cout << "The value is " << a;
}
int main()
{
    int c;
    c = 77;
    display(c);
    return 0;
}*/

// Vector
// A vector is a dynamically resizable array
/*#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i]<<endl;
    }
    cout << endl;
};
int main()
{
    int a;
    cout << "Enter the size u want ";
    cin >> a;
    vector<int> vec1;
    for (int i = 0; i < a; i++)
    {
        int b;
        cout << "Enter the elements u want to insert ";
        cin >> b;
        vec1.push_back(b);
    };
    vec1.pop_back();

    display(vec1);
    return 0;
}*/

// Most common vector member func

/*#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1;
    for (int i = 0; i < 4; i++)
    {
        int b;
        cout << "Enter the elements ";
        cin >> b;
        v1.push_back(b); // Used to push the element at the end of the vector.
    }

    v1.pop_back();                                       // Used to remove the last element from the vector
    cout << "Accesing the front " << v1.front() << endl; // Access first element

    cout << "Accessing the end " << v1.back() << endl; // Access last element

    for (int i = 0; i < v1.size(); i++) // Returns the size of the vector
    {
        cout << "Elements after pop back " << v1[i] << endl;
    }
    cout << endl;

    v1.clear(); //Clears the whole vector elements

    for (int i = 0; i < v1.size(); i++) // Returns the size of the vector
    {
        cout << "Elements after clear " << v1[i] << endl;
        }
    cout << endl;
    cout << "Its empty";

    return 0;
}*/

// Practicing vectors

/*#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int a;
    cout << "Enter the size of the vector ";
    cin >> a;
    vector<int> v1;
    for (int i = 0; i < a; i++)
    {
        int b;
        cout << "Enter the elements ";
        cin >> b;
        v1.push_back(b);
    }
    cout << v1.size() << endl;     // Gives the number of elements it has currently in the vector
    cout << v1.capacity() << endl; // Gives no of elemts we can store as vector is resizable array

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << endl;
    }

    cout << v1.front() << endl;
    cout << v1.back();
    return 0;
}*/

// List
// If u want insertion and deletion faster then use the linked list
// But if u want t5he access to be fast then use array.
// Its a thumb rule.
/*#include <iostream>
#include <list>

using namespace std;
void display(list<int> &ls)
{
    list<int>::iterator itr;
    for (itr = ls.begin(); itr != ls.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
}
int main()
{

    list<int> list1; // Here its an empty length of list
    // list1.push_back(1);
    // list1.push_back(2);
    // list1.push_back(0);
    // list1.push_back(5);
    // list1.push_back(4);
    list1.assign({2, 55, 6, 3, 5}); // I can also do this. Its similar to above.
    display(list1);
    // Sorting the elements
    list1.sort();
    display(list1);
    // Removing the elements
    list1.pop_back();
    list1.pop_front();
    list1.remove(2);
    // Reversing the elements
    list1.reverse();
    display(list1);

    list<int> list2(4); // But here it has 4 elements in it but without any values
    list2.push_back(1);
    list2.push_back(4);
    list2.push_back(4);
    list2.push_back(3);
    display(list2);

    return 0;
}*/

// Vectors and lists using iterators, auto and range based loops
/*#include <iostream>
#include <vector>
#include <list>

using namespace std;
void display(vector<int> &v1)
{
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << endl;
    }
}

int main()
{
    vector<int> v;
    v.assign({1, 2, 3, 4, 5});
    display(v);
    for (int &value : v)
    {
        cout << value << endl;
    }
    vector<int>::iterator itr;
    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << endl;
    }
    list<int> l;
    l.assign({2, 3, 4, 78});
    // list<int>::iterator it;
    for (auto it = l.begin(); it != l.end(); it++) // I can also use the auto keyword. With auto keyword i dont have to declare the
    {
        cout << *it << " "; // iterarator like i did above. Compiler will simply understand that it is of list
    }
    l.sort();
    l.reverse();
    l.remove(3);
    for (int &value : l)
    {
        cout << value << " ";
    }

    return 0;
}*/

// Maps
// Map is an associative array
// Which has a key and a value, with the help of the key we get our values
// This is a normal map in which it will be stored in sorted means which is implemented with the the
// Red black trees it is a data str
/*#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> maps;
    maps["Hirak"] = 99;
    maps["Suraj"] = 69;
    maps["Pankaj"] = 77;

    // We can also use the insert fucn
    maps.insert({{"Loda", 55}, {"Bsdk", 88}}); // Here two curly bracks has been used to signify it as a pair

    /*for (const auto &value : maps) // Here maps have a key and that key points to the value
    {                              // Auto keyw and const is used as a best practice in these range based loops
        cout << value.first << " " << value.second << " " << endl;
    }

    maps.erase("Bsdk"); // Its taking a key as a value so that it can be deleted not the velue itself

    // Another method
    map<string, int>::iterator itr;
    for (itr = maps.begin(); itr != maps.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }

    // Therfore to access the key we have to use the first and
    // to access the value we use the second

    int loda = maps.empty(); // It will return a value therefore needs to be couted
    cout << loda << endl;    // Returns 0 as it is not empty
    auto begin1 = maps.begin();
    cout << begin1->first << " " << begin1->second << endl;

    int it = maps.size();
    cout << it << endl;

    return 0;
}*/

// Sets
/*In the maps we have keys and that refers or points to its values. Similarly we have sets just remove the values part and we get set.
A set is a collections of keys, it can be strings,numbs,vect etc. In short collection of elements. The sets will cout the elements
in sorted order just like maps.
*/

/*#include <iostream>
using namespace std;
#include <set>
void dispy(set<string> &ss)
{
    set<string>::iterator itr;
    for (itr = ss.begin(); itr != ss.end(); itr++) // The end refers last itr ka agla itr so if u want last itr use --itr
    {
        cout << *itr << endl;
    }

    for (auto &value : ss)
    {
        cout << value << endl;
    }
}

void display(set<int> &ss)
{
    for (auto &value : ss)
    {
        cout << value << endl;
    }
}
int main()
{
    set<string> s; // U can use unordered_set <string > s also if u dont want it in sorted way, invlude it in header file too
    s.insert({"e", "j", "a"});
    s.find("a");
    // display(s);

    set<int> s2;
    for (int i = 0; i < 4; i++)

    {
        int a;
        cout << "Enter elements ";
        cin >> a;
        s2.insert(a);
    }
    display(s2);
    auto st = s2.max_size(); // or use size to get no of elements stored
    cout << st;
    return 0;
}*/

// Stack
/*A lifo data structure which means last in first out, we also have filo first in last out.
Mainly three operations-
1- Push- Dalna at top
2- Pop- Nikalna from top
3- Top- Top element ko dekhna
*/

/*#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);
    s.push(5);
    s.push(4);

    while (!s.empty()) // Jab tak khali na ho jae
    {
        cout << s.top(); // Top ke value print karo
        s.pop();         // Phir use pop karo aur agli value do
    }

    cout << endl;
    return 0;
}*/

// Queue
/*A fifo data structure which means first in first out
Mainly three operations-
1- Push- at end
2- Pop- from top
3- Front- Top element ko dekhna
*/
/*#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(22);
    q.push(5);
    q.push(99);

    while (!q.empty()) // Jab tak khali na ho jae
    {
        cout << q.front()<<endl; //Front ke value do
        q.pop(); //Jab vo value mil jae use nikal do aur agli value do tab tak karo jab tak queue empty na ho jae
    }
    cout << endl;
    return 0;
}*/

// Inbuilt Sort

// It takes two para first the address where the sorting should start second the end of the elements's next address
/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // int a[n];
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        // cin>>a[i];
    }
    // sort(a, a + n);
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << endl;
        // cout<<a[i];
    }
    return 0;
}*/

// Lower Bound N Upper Bound
// Touse this frst u have to sort
// Lower- This finds a element u want or a element greater than that
// For ex- 7 if its present then 7 either greater than 7 such as 9
// Upper- This will find only the gratest element
// For ex- 7 then gives 8 or 8 then gives 9, even if the 8 is  present it is excluded in upper.
// For arrays
/*#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    cout << "Type the size of the array: ";
    cin >> a;
    int x[a];
    cout << "Enter " << a << " integers: ";
    for (int i = 0; i < a; i++)
    {
        cin >> x[i];
    }
    sort(x, x + a);
    cout << "Sorted array:" << endl;
    for (int i = 0; i < a; i++)
    {
        cout << x[i] << endl;
    }
    int *ptr = lower_bound(x, x + a, 5);
    cout << "Pointer value: " << *ptr << endl; // Corrected line
    return 0;
}*/

// For vectors
/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int a;
    cout << "Enter the elements ";
    cin >> a;

    vector<int> v(a);
    for (int i = 0; i < a; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < a; i++)
    {
        cout << v[i]<<endl;
    }
    auto itr = lower_bound(v.begin(), v.end(), 6); //Or u can use lower_bound also
    cout << *itr<<endl;
    return 0;
}*/

// Function Objects/Functors
// A func that's been wrapped in a class, so that it can be available like an object

// Assignment= 1
/*#include <iostream>
using namespace std;
class result
{
    string name;
    float marks1, marks2, marks3, marks4, marks5;
    int oops, ds, se, wb, py;

public:
    void setname()
    {
        cout << "-------------------SETTING NAME----------------------\n";
        cout << "Enter your name ";
        cin >> name;
    }
    void setmarks()
    {
        cout << "----------------------SETTING MARKS-------------------\n";
        cout << "Type the marks of oops ";
        cin >> marks1;
        cout << "Type the marks of ds ";
        cin >> marks2;
        cout << "Type the marks of se ";
        cin >> marks3;
        cout << "Type the marks of wb ";
        cin >> marks4;
        cout << "Type the marks of py ";
        cin >> marks5;

        cout << "-------------------DISPLAYING RESULT----------------------\n";
    }
    void get_result()
    {
        cout << "The name of the student is " << name << endl;
        cout << "The marks of oops are " << marks1 << endl;
        cout << "The marks of ds are " << marks2 << endl;
        cout << "The marks of wb are " << marks4 << endl;
        cout << "The marks of py are " << marks5 << endl;
        cout << "The marks of se are " << marks3 << endl;
    }
};
int main()
{
    result hirak;
    hirak.setname();
    hirak.setmarks();
    hirak.get_result();
    return 0;
}*/

// Assignemt 2

/*#include <iostream>
using namespace std;
int x;
class library
{
    int book_no;
    char book_title[20];
    float price;
    void total_cost(int a)
    {
        cout << "The total_cost of the book is: " << x * price;
    }

public:
    void input()
    {
        cout << "-------------------------GETTING THE INFORMATION OF THE BOOK------------------------\n";
        cout << "Enter the number of the book: ";
        cin >> book_no;
        cout << "Type the title of the book: ";
        cin >> book_title;
        cout << "Enter the price of the book: ";
        cin >> price;
        cout << endl;
    }
    void purchase()
    {
        cout << "\n-------------------------------CALCULATING THE TOTAL_COST-------------------------\n";

        cout << "Enter the number of books u want to purchase of this no " << book_no << " is ";
        cin >> x;
        total_cost(x);
        }
};
int main()
{
    library hirak[2];
    for (int i = 0; i < 2; i++)
    {
        hirak[i].input();
    }
    for (int i = 0; i < 2; i++)
    {
        hirak[i].purchase();
    }

    return 0;
}*/

// Algorithms

/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    int n;
    cout << "Type the size ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cout << "The elements are ";
        cin >> v[i];
    }

    /*In case of array it will become ( v , v+b)

     int b;
     cout << "Type the size of the array ";
     cin >> b;
     int arr[b];
     for (int i = 0; i < b; i++)
     {
         cout << "Type the elements ";
         cin >> arr[i];
         cout << "The elements are "
              << arr[i] << endl;
     }

     reverse(arr , arr + b);*/

// 1- auto itr = *min_element(v.begin() + 2, v.end()); This will return an iteratr so we use * operator in case of array will return ptr
//  cout << itr << endl;                           By doing +2 it will not consider the first two elements

// 2- auto itr2 = *max_element(v.begin(), v.end());
// cout << itr2;

// 3- int sum = std::accumulate(v.begin(), v.end(), 0); It is used to calculate the sum of the vector however my compiler doesnt support
//  cout<<sum; Takes three argu begin , end , initial sum means it will add it to the sum of the vector, suppose vector = 25,
//                                            initial sum = 5, then sum of vector = 30

// 4- auto num = count(v.begin(), v.end(), 3); // Takes three begin , end and number to be counted
//  cout << num;

/*5- reverse(v.begin(), v.end());
for (auto &rev : v)
{
    cout << rev << " ";
}*/

/*6- sort(v.begin(), v.end());
for (auto &rev : v)
{
    cout << rev << " ";
}*/

/* To reverse a string
string st = "hjkdskjnjndj";
reverse(st.begin(), st.end());
cout<<st;

return 0;
}*/

// he first array problem i solved without much of a help
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 1)
        {
            count++;
        }
        else if (a[i] == 0)
        {
            count = 0;
        }

        cout << a[i] << " ";
    }
    if (count >= 4)
    {
        cout << "Yes\n";
    }
    cout << count;
    return 0;
}*/

// MemoryManagement- New and Delete
// The new operator is used to dynamically allocate memory for an object or an array of objects on the heap.
// The delete operator is used to deallocate memory that was previously allocated with new,
// It is used to release the memory occupied by a single object or an array of objects on the heap.

// This all happens in the heap during runtime.
/*#include <iostream>
using namespace std;
int main()
{
    int size;
    //cin >> size;

    int *myarr = new int[size]; // Here dynamically allocation of memeory is taking space;
    for (int i = 0; i < size; i++)
    {
        //cin >> myarr[i];
    }
    for (int i = 0; i < size; i++)
    {
        //cout << myarr[i];
    }
    delete[] myarr; // Here dynamically deallocation of memeory is taking space;
    int * ptr = new int(33);
    //*ptr = 40; U can also do this
    cout<<*ptr;
    delete ptr;
    return 0;
}*/

// Memory Management- Stack and Heap
// In computer memory management, the stack and the heap are two distinct regions
// where data is stored during the execution of a program.
// Stack's size is fixed where heap is'nt
// In stack we dont have to allocate or deallocate memory but in heap we have to do it manually.

/*#include <iostream>
using namespace std;
int main()
{
    int *p = new int;   // This will be made on the heap but
    *p = 44;            // The value will be stored in stack and the pointer will be pointing its address whcih is in the heap
    cout << *p << endl; // Then the pointer is pointing on the heap where the address is stored
    int a = 10;         // Stored in stack
    cout << a;
    delete p; // When i delete this the address on heap will be gone but on the stack the pointer will still be pointing to the heap
    p = NULL; // This is know as dangling pointer. To remove this we do this
    int size;
    cin>>size;

    int *arr = new int [size]; //Can also declare an array
    return 0;

}*/

// Memory Managaement-- Smart Pointers
/*#include <iostream>
#include <memory>
#include<execution>
using namespace std;
int main()
{


    return 0;
}*/

// Exception Handling
/*Exceptions are errors that may come in our program and to handle it we use exception handling methods.
 */
/*#include <iostream>
#include <exception>
#include <string>
using namespace std;
class printer
{
private:
    string name;
    int avai_paper;

public:
    printer(string name, int paper) : name(name), avai_paper(paper)
    {
    }

    void print(string txt)
    {
        auto required = txt.length() / 10; // Here i have creadted that required paper can only have 10 chars in a paper
        if (required > avai_paper)         // If the available paper is less than throw exception
            throw "Not Enough/n";          // Like this. I can also change the throw to an int

        cout << "Printing: " << txt;
        avai_paper -= required; // After printing out substract the available from required
    }
};

int main()
{
    printer hirak("HP", 10); // Here i have 10 available papers
    try
    {
        hirak.print("Hello my name is Hirak and i am a Data Scientist\n");
        hirak.print("Hello my name is Hirak and i am a Data Scientist\n"); // Now i will tey to run this code using try and catch block
        hirak.print("Hello my name is Hirak and i am a Data Scientist\n");
    }
    catch (...) // This is called a default handler
    {
        cout << "Exception Handeled "; // If there is an exception then print this
    }

    return 0;
}*/

/*#include <iostream>
#include <exception>
#include <string.h>
using namespace std;
void print(string s)
{
    if (s.length() > 10)
        throw runtime_error("Exception");
    cout << s;
}
int main()
{
    try
    {
        print("Hirakbala");
    }

    catch (...)
    {
        cout << "Exception Occured";
    }

    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    string arr[] = {"Hirak", "Suraj", "Lund"};
    string name = "Lund jee";
    for (int i = 0; i < 3; i++)
    {
        cout << "Hi " << arr[i] << endl;
        cout << "Hi" + name;
    }

    return 0;
}*/

/*Multithreading
Ability of multiple parts of the one program to execute at the same time
To achieve this
1- Multitasking
2- Real Multithreading*/
/*#include <iostream>
#include <thread>
using namespace std;
void func1()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "*" << endl;
    }
}

void func2()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "$" << endl;
    }
}
int main()
{
    std::thread(func1);
    return 0;
}*/
/*



*/

// DSA
/*



*/

// Sum of even num
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    int sum = 0;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        i++;
    }
    cout << sum;
    return 0;
}*/
// Sum of n nums
/*#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int sum = 0;
    int n;
    cin >> n;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    cout << sum;
    return 0;
}
*/
// Fact
/*#include <iostream>
using namespace std;
int main()
{

    int i = 1;
    int n;
    cin >> n;
    int fact = 1;
    while (i <= n)
    {
        fact = i * fact;
        i++;
    }
    cout << fact;
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    // If u want to take enter, tab, space as an input the use get func
    // int a;
    // a = cin.get(); //The value u get is according to ASCII Table
    // cout << a;

    char a;
    // cin >> a;
    if (a > 'a' && a < 'z')
    {
        cout << "LowerCase\n";
    }
    else if (a > 'A' && a < 'Z')
    {
        cout << "UpperCase\n";
    }

    int i = 1;
    int n;
    cin >> n;
    int sum = 0;
    // int fact = 1;
    while (i <= n)
    {
        // sum = sum + i;
        // fact = fact * i;
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        i++;
    }
    cout << sum;

    return 0;
}*/

// Patterns

/*#include <iostream>
using namespace std;
int main()
{
    int i = 1; // 1 phlee row se chalu
    int n;
    cin >> n;
    while (i <= n-2) // Kab tak row chalega till i!=n
    {
        int j = 1;     // 1 column se
        while (j <= n) // Kab tak chalge jab tak j!=n
        {
            cout << "*";
            j++; // Jese he 1st column done age bad jaa
        }
        cout << endl;
        i++; // Same jese he 1st orw done age bad jaa
    }

    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int n;
    cin >> n;
    int count =1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count; // or j to get another pattern or n-j+1
            count++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int n;
    cin >> n;
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        int value = i;
        while (j <= i)
        {
            // cout << count; //* for different pattern or i
            // count++;
            // cout << value;
            // value++;
            cout << i - j + 1;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int n;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            // char ch = 'A' + j - 1; //or 'A' + i - 1;
            //  cout << ch;

            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int n;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char a = 'A' + i - 2 + j;
            cout << a;
            a++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int n;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        int space = i - 1;
        while (space)
        {
            cout << " ";
            space--;
        }

        while (j <= n - i + 1)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}*/

// Bitwise Operators
/*#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = 6;
    // cout << (a & b) << endl;
    // cout << (a | b) << endl;
    // cout << (~a) << endl;
    // cout << (a ^ b);
    // cout << (17 >> 1) << endl;
    // cout << (19 >> 2) << endl;
    // cout << (17 << 1) << endl;
    // cout << (19 << 2) << endl;
    return 0;
}*/

// Prime Num
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Type the num u want to check the primt of: ";
    cin >> n;
    bool isPrime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            // cout << "Not a prime num";
            isPrime = false;
            break;
        }
    }

    if (isPrime == true)
    {
        cout << n << " is a prime number." << endl;
    }
    else
        cout << "Not a prime num";
    return 0;
}*/

// Count o's in n..
// The code is fine but its giveing the binary representation on which the bumber zero is
/*#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    int n;
    cin >> n;
    while (n != 1)
    {
        if ((n & 1) == 0)
        {
            count++;
        }
        n = n >> 1;
    }

    cout << count;

    return 0;
}*/

// Sum of num

/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int modulus = 0;
    int sum = 0;

    while (n > 0)
    {
        modulus = n % 10;
        sum += modulus;

        n = n / 10;
    }
    cout << sum;
    return 0;
}*/

// Power of
/*#include <iostream>
#include <math.h>
using namespace std;
int powerof(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {

        ans *= a;
    }

    return ans;
}
int main()
{
    int b, c;
    cin >> b >> c;
    cout << pow(b, c);
    return 0;
}*/

// OddnEven
/*#include <iostream>
using namespace std;
void o_e(int a)
{
    if (a % 2 == 0)
    {
        cout << "Number is even";
    }
    else
        cout << "Number is odd";
}
int main()
{
    int a;
    cin >> a;
    o_e(a);

    return 0;
}*/

// NCR
/*#include <iostream>
using namespace std;
int fact(int a)
{
    int ans = 1;
    for (int i = 1; i <= a; i++)
    {
        ans *= i;
    }
    return ans;
}

int ncr(int a, int b)
{
    int num = fact(a);
    int denm = fact(b) * fact(a - b);
    return num / denm;
}
int main()
{
    int c, d;
    cin >> c >> d;
    cout << ncr(c, d);
    return 0;
}*/

// Counting Num
/*#include <iostream>
using namespace std;
void count(int a)
{
    for (int i = 1; i <= a; i++)
    {
        cout << i << endl;
    }
}
int main()
{
    int b;
    cin >> b;
    count(b);
    return 0;
}*/

// A prime num
/*#include <iostream>
using namespace std;

void isPrime(int num)
{
    bool prime = true;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            prime = false;
            break;
        }
    }

    if (prime == false)
    {
        cout << "Not a prime num";
    }

    else
        cout << "A prime num";
}
int main()

{
    int a;
    cin >> a;
    isPrime(a);

    return 0;
}*/

// Sum n reverse
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int modulus = 0;
    int reverse = 0;
    // int modulus = 1;
    // int sum = 0;
    while (n > 0)
    {
        modulus = n % 10;
        // sum += modulus;
        reverse = reverse * 10 + modulus;
        n /= 10;
    }
    // cout << sum;
    cout << reverse;

    return 0;
}
*/

// Check if a num is palindrome or not
/*#include <iostream>
using namespace std;
void palindrome(int n)
{
    int original = n;
    int modulus = 0;
    int reverse = 0;
    while (n > 0)
    {
        modulus = n % 10;
        reverse = reverse * 10 + modulus;
        n /= 10;
    }

        if (reverse == original)
    {
        cout << "The number is a palindrome";
    }

    else
        cout << "The number is not a palindrome";
}
int main()
{
    int n;
    cout << "Type the num: ";
    cin >> n;
    palindrome(n);

    return 0;
}*/

// Initialise a 1lakh array to a single num
/*#include <iostream>
using namespace std;
int main()
{
    int size = 100000;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        array[i] = 4;
    }
    cout<<array[900];
    return 0;
}*/

// Addition of num in for loop and of array
/*#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    /*for (int i = 0; i <= 4; i++)
    {
        sum += i;
    }
        cout<<sum;

    int size;
    cin >> size;
    int array[6];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
        sum += array[i];
        cout << array[i] << " ";
    }
    cout << sum;

    return 0;
}*/

// Min And Max in an array
/*#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[10];
    int maxi = INT32_MIN;
    int mini = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }

        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    cout << "Maxixmum value is: " << maxi << endl;
    cout << "Minimum value is: " << mini;

    return 0;
}*/

// Linear Search
/*#include <iostream>
using namespace std;
int main()
{
    bool search = false;
    int key;
    cout << "Enter the element u want to search for: ";
    cin >> key;
    int arr[10] = {5, -7, 14, -5, 33};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
        if (arr[i] == key)
        {
            search = true;
            break;
        }
    }

    if (search == true)
    {
        cout << "Yes it is present\n";
    }

    else
        cout << "No it is not present\n";

    return 0;
}*/

// Reverse am array

/*#include <iostream>
using namespace std;

void reverse(int array[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(array[start], array[end]);
        start++;
        end--;
    }
}
void print(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}
int main()
{
    int arr[4] = {-2, -44, -5, -5};
    int brr[5] = {4, 5, 6, 7, 4};
    reverse(arr, 4);
    reverse(brr, 5);
    print(arr, 4);
    print(brr, 5);

    return 0;
}*/

// Swap alternate elements
/*#include <iostream>
using namespace std;
void reverse_alternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void print(int array[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
int main()
{
    int array[4] = {1, 2, 3, 4};
    int brrrr[5] = {2, 3, 4, 5, 6};
    reverse_alternate(array, 4);
    reverse_alternate(brrrr, 5);
    print(array, 4);
    print(brrrr, 5);
    return 0;
}*/

// Find unique element using xor
/*#include <iostream>
using namespace std;
int main()
{
    int ans = 0;
    int arra[10] = {1, 1, 2, 2, 5,  4};
    for (int i = 0; i < 6; i++)
    {
        ans = ans ^ arra[i];
    }
    cout << ans;

    return 0;
}*/

// Duplicate and unique using unordered map
// U can use simple map if u want the result in sorted manner
/*#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<int, int> count;
    int array[1] = { 1};
    for (int i = 0; i < 1; i++)
    {
        count[array[i]]++;
    }

    for (auto &unique : count)
    {
        if (unique.second >= 2) //(unique.second >= 2) for duplicate
        {
            cout << unique.first << " ";
        }

        if (unique.second == 1)
        {
            cout << NULL;
        }
    }

    return 0;
}*/

// Practice Session
/*#include <iostream>
using namespace std;
int main()
{
    bool isprime = true;
    int n;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isprime = false;
            break;
        }
    }

    if (isprime == true)
    {
        cout << "The number is prime";
    }
    else
        cout << "The number is not prime";

    return 0;
}*/

/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mod = 0;
    int sum = 0;
    while (n > 0)
    {
        mod = n % 10;
        //sum = sum * 10 + mod; For reverse
        sum = sum +mod; //For sum
        n = n / 10;
    }
    cout << sum;
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    //int fact = 1; For fact
   // int fact =0;  For sum
    for (int i = 1; i <= n; i++)
    {
        //fact = fact * i; For fact
        //fact = fact + i; For sum
    }

    //cout << fact;
    return 0;
}*/

/*#include <iostream>
using namespace std;
void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (end >= start)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void print(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i];
    }
}
int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    reverse(array, 5);
    print(array, 5);
    return 0;
}*/

/*#include <iostream>
#include <map>
using namespace std;
int main()
{
    int array[7] = {1, 1, 2, 2, 3, 4, 5};
    map<int, int> map1;
    for (int i = 0; i < 7; i++)
    {
        map1[array[i]]++;
    }
    for (auto &unique : map1)
    {
        if (unique.second == 1)
        {
            cout << unique.first << " ";
        }
    }

    return 0;
}*/

// intersection Of two arrays using maps
/*#include <iostream>
#include <map>
using namespace std;
int main()
{
    int array[5] = {1, 2, 2, 2};
    int array2[5] = {2, 2};
    map<int, int> map1;
    map<int, int> map2;
    for (int i = 0; i < 4; i++)
    {
        map1[array[i]]++;
    }
    for (int i = 0; i < 2; i++)
    {
        map2[array2[i]]++;
    }
    for (auto &inter : map1)
    {
        for (auto &inter2 : map2)
        {
            if (inter.first == inter2.first)
            {
                cout << inter.first << " ";
            }
        }
    }

    return 0;
}*/

// Using loops
/*#include <iostream>
using namespace std;
int main()
{
    int array[4] = {1, 2, 2, 2};
    int array2[2] = {2, 2};
    int element;
    for (int i = 0; i < 4; i++)
    {
        element = array[i];

        for (int j = 0; j < 2; j++)
        {
            if (element == array2[j])
            {
                element = array2[j];
                array2[j] = -1;
                cout << element << " ";
                break;
            }
        }
    }

    return 0;
}*/

// Insertion of sorted arrays
/*#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main()
{
    int array[5] = {1, 2, 0, 2, 1};
    int array2[5] = {1, 2, 2, 5, 1};
    unordered_map<int, int> map1;
    unordered_map<int, int> map2;
    int n = sizeof(array) / sizeof(array[0]);
    int x = sizeof(array2) / sizeof(array2[0]);
    sort(array, array + n);
    sort(array2, array2 + x);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < x; i++)
    {
        cout << array2[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        map1[array[i]]++;
    }
    for (int i = 0; i < x; i++)
    {
        map2[array2[i]]++;
    }

    for (auto &inter : map1)
    {
        for (auto &inter2 : map2)
        {
            if (inter.first == inter2.first)
            {
                cout << inter.first << " " << endl;
                ;
            }
        }
    }

    return 0;
}*/

/*#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int array[5] = {1, 4, 3, 5, 6};
    int max = INT32_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    cout << max << " ";
    return 0;
}*/

// Binary Search

/*#include <iostream>
using namespace std;
int binary(int array[], int n, int c)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    while (end >= start)
    {
        if (c == array[mid])
        {
            return mid;
        }

        else if (c > array[mid])
        {
            start = mid + 1;
        }

        else
            end = mid - 1;

        mid = (start + end) / 2;
    }

    return -69;
}
int main()
{
    int array[6] = {1, 2, 3, 4, 5, 6};
    int array2[5] = {7, 8, 9, 10, 11};
    int result = binary(array, 6, 2);
    cout << result << endl;
    int result2 = binary(array2, 5, 67);
    cout << result2 << endl;
    return 0;
}*/

// number of occurnces using linear search
/*
#include <iostream>
using namespace std;
int occurences(int array[], int size, int key)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == key)
        {
            count++;
        }
    }

    return count;
}
int main()
{
    int array[5] = {1, 2, 5, 5, 5};
    int result = occurences(array, 5, 5);
    cout << result;
    return 0;
}
*/

// First/left and last/right element in an array
/*#include <iostream>
using namespace std;
int first(int array[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (end >= start)
    {
        if (array[mid] == key)
        {
            ans = mid;
            end = mid - 1;

        }
        else if (key > array[mid])
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int last(int array[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (end >= start)
    {
        if (array[mid] == key)
        {
            ans = mid;


            start = mid + 1;
        }
        else if (key > array[mid])
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int array[5] = {5, 5, 5, 4, 5};
    cout << first(array, 5, 5) << endl;
    cout << last(array, 5, 5);
    return 0;
}*/

// first and last element
/*#include <iostream>
#include <algorithm>
using namespace std;
int first(int array[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (end >= start)
    {
        if (array[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }

        else if (key > array[mid])
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int last(int array[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (end >= start)
    {
        if (array[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }

        else if (key > array[mid])
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int array[5] = {1, 3, 2, 5, 3};
    sort(array, array + 5);
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " " << endl;
    }

    cout << first(array, 5, 3) << " ";
    cout << last(array, 5, 3);

    return 0;
}*/

// Max using linear search
/*#include <iostream>
using namespace std;
int main()
{
    int array[5] = {1, 2, 6, 4, 5};
    int max = INT32_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    cout<<max;

    return 0;
}*/

// Max using binary search
/*#include <iostream>
using namespace std;
int max(int array[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (end > start)
    {
        if (array[mid] < array[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int main()
{
    int array[4] = {1, 2, 6, 4};
    cout << max(array, 6);

    return 0;
}*/

// Search in sorted and rotated array in an array --Wrong ans
/*#include <iostream>
using namespace std;
int search(int array[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (e >= s)
    {
        if (array[mid] == key)
        {
            return mid;
        }

        else if (key > array[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return mid;
}
int main()
{
    int array[5] = {4, 5, 1, 2, 3};
    cout << search(array, 5, 5);
    return 0;
}*/

// sqrt of a num
// If u wnat to know a sqrt use pow or brute force
/*#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x = 25;
    // cout<<pow(25,0.5);
    for (int i = 0; i < 30; i++)
    {
        if (x == pow(i, 2.0))
        {
            cout << i;
        }
    }

    return 0;
}*/

// But do this using binary search
// Here we have only calculated for the integer part
/*#include <iostream>
using namespace std;
int square(int n)
{
    int ans = 0;
    int start = 0;
    int end = n;
    int mid = start + (end - start) / 2;

    while (end >= start)
    {
        int sq = mid * mid;
        if (sq == n)
        {
            return mid;
        }
        else if (sq < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    cout << square(36);
    return 0;
}*/

/*#include <iostream>
using namespace std;

void reverse(int array[], int n)
{
    int start = 0;
    int end = n - 1;
    while (end >= start)
    {
        swap(array[start], array[end]);

        start++;
        end--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    int array[6]  = {1,2,3,4,5,6};
    reverse(array, 6);
    return 0;
}*/

/*#include <iostream>
using namespace std;
void sorting(int array[], int n)
{
    int s = 0;
    int e = n - 1;
    while (e >= s)
    {
        if (array[s] == 0)
        {
            s++;
        }
        else if (array[e] == 1)
        {
            e--;
        }

        else
        {
            swap(array[s], array[e]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}
int main()
{
    int array[7] = {1, 1, 1, 0, 0, 0, 0};
    sorting(array, 7);
    return 0;
}*/

/*#include <iostream>
using namespace std;
int binary(int array[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (end >= start)
    {
        if (array[mid] == key)
        {
            return mid;
        }

        else if (key > array[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
            mid = start + (end - start) / 2;
    }
     return mid;
}
int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    cout << binary(array, 5, 2);
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    bool ispresent = false;
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int x;
    cout << "Enter the element u want to search for: ";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == x)
        {
            ispresent = true;
        }
    }
    if (ispresent == true)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No";
    }

    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int max = INT32_MIN;
    int array[6] = {1, 2, 9, 4, 5, 6};
    for (int i = 0; i < 6; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    cout << max;
    return 0;
}*/

// Will do
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    int total = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= 2)
        {
            cout << 1;
        }
        else if (a[i] > 2)
        {
            a[i] / 2;
            total += a[i];
            cout << a[i];
        }
    }
    return 0;
}*/

// Selection Sort
/*#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int array[6] = {6, 5, 4, 3, 2, 1};
    for (int i = 0; i < 6 - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < 6; j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
        }
        swap(array[min], array[i]);
    }
    // sort(array , array+6);
    for (int i = 0; i < 6; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int array[5] = {5, 4, 3, 2, 1};
    for (int i = 0; i < 5 - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (array[j] < array[min]){
                min = j;}
        }
        swap(array[min], array[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}*/

// Bubble Sort
/*#include <iostream>
using namespace std;
int main()
{
    int array[6] = {6, 4, 5, 3, 2, 1};
    for (int i = 0; i < 6 - 1; i++)
    {
        for (int j = 0; j< 6 - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}*/

// Revisiting selection sort
/*#include <iostream>
using namespace std;
int main()
{
    int array[5] = {5, 5, 3, 2, 1};
    int min = 0;
    for (int i = 0; i < 5 - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (array[min] > array[j])
            {
                min = j;
            }
            swap(array[min], array[i]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}*/

// Revisiting Bubble Sort
/*#include <iostream>
using namespace std;
int main()
{
    int array[6] = {7, 4, 4, 2, 1, 6};
    for (int i = 0; i < 6 - 1; i++)
    {
        for (int j = 0; j < 6 - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}*/

// STL
/*#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    // For array
    /*array<int, 4> a = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
    {
        cout << a[i] << " ";
    }
    cout << a.front() << endl;
    cout << a.back() << endl;
    cout << a.at(3) << endl;
    cout << a.empty();

    // I wrote all the necessary stl's that i need in my copy now, i shall write the algorithm
    vector<int> v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(8);

    sort(v.begin(), v.end());
    for (auto &it : v)
    {
        cout << it << " ";
    }

    cout << binary_search(v.begin(), v.end(), 2);

    rotate(v.begin(), v.begin() + 2, v.end());
    for (auto &it : v)
    {
        cout << it << " ";
    }

    return 0;
}*/

// Reverse an array after that position
/*#include <iostream>
using namespace std;
int main()
{
    // code for reverse an array
    int array[5] = {1, 2, 3, 4, 5};
    int s = 0;
    int e = 5 - 1;
    while (e >= s)
    {
        swap(array[s], array[e]);
        s++;
        e--;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }

    // code for reverse an array after position
    int array[6] = {1, 2, 3, 4, 5, 6};
    int n;
    cout << "Enter the position u want to reverse after ";
    cin >> n;
    int s = n + 1;
    int e = 6 - 1;
    while (e >= s)
    {
        swap(array[s], array[e]);
        s++;
        e--;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}*/

// Merge 2 sorted arrays

/*#include <iostream>
#include <algorithm>
using namespace std;
void merge1(int arr1[], int m, int arr2[], int n, int arr3[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
            // or k++
        }

        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < m)
    {
        arr3[k++] = arr1[i++];
    }
    while (j < n)
    {
        arr3[k++] = arr2[j++];
    }
}

void print(int array[], int m)
{
    for (int i = 0; i < m; i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    // Using merge func with algorithm
    int a[3] = {1, 2, 3};
    int b[2] = {4, 5};
    int c[5] = {0};
    merge(a, a + 3, b, b + 2, c);
    for (int i = 0; i < 5; i++)
    {
        cout << c[i] << " ";
    }

    // Manually using loops
    int a[4] = {2, 2, 3, 4};
    int b[3] = {5, 6, 8};
    int c[7] = {0};
    merge1(a, 4, b, 3, c);
    print(c, 7);
    return 0;
}*/

/*#include <algorithm>
#include <iostream>
void merge1(int a[], int n, int b[], int m, int c[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (a[i] > b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }

    while (i < n)
    {
        c[k++] = a[i++];
    }

    while (j < m)
    {
        c[k++] = b[j++];
    }
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
}
using namespace std;
int main()
{
    int array[4] = {4, 3, 2, 1};
    int array2[3] = {7, 6, 5};
    int array3[100] = {0};
    merge(array, array + 4, array2, array2 + 3, array3);
    sort(array3, array3 + 7);
    for (int i = 0; i < 7; i++)
    {
        cout << array3[i] << " ";
    }

    merge1(array, 4, array2, 3, array3);
    print(array3, 7);

    return 0;
}*/

// Move zeros to right-- Wrong
/*#include <iostream>
using namespace std;
void move(int a[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s != e)
    {
        if (a[s] != 0)
        {
            s++;
        }
        else if (a[s] == 0 && a[s + 1] != 0)
        {
            swap(a[s], a[s + 1]);
        }
    }
}
void print(int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
}
int main()
{
    int array[5] = {0, 1, 3, 0, 2};
    move(array, 5);
    print(array, 5);
    return 0;
}*/

// Rotate an array by k
/*#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int arr[5] = {};
    int k = 2;
    for (int i = 0; i < 5; i++)
    {
        int newi = (i + k) % 5;
        arr[newi] = array[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}*/
/*
    HackerRank
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iomanip>
using namespace std;

int main()
{
    int intValue;
    long longValue;
    char charValue;
    float floatValue;
    double doubleValue;

    // Read input
    std::cout << "Enter int, long, char, float, and double separated by spaces: ";
    std::cin >> intValue >> longValue >> charValue >> floatValue >> doubleValue;

    // Output the read values
    std::cout << intValue << std::endl;
    std::cout << longValue << std::endl;
    std::cout << charValue << std::endl;
    std::cout << std::fixed << std::setprecision(3) << floatValue << std::endl;
    std::cout << std::fixed << std::setprecision(9) << doubleValue << std::endl;

    return 0;
}*/

/*#include <iostream>
#include <cmath>
using namespace std;

void functionn(int *a, int *b)
{
    int c = *a + *b;
    cout << c << endl;
    int d = abs(*b - *a);
    cout << d;
}

int main()
{
    int a, b;
    cin >> a >> b;
    functionn(&a, &b);
    return 0;
}*/

/*#include <iostream>
using namespace std;
void max(int array[], int n)
{
    int max = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    cout << max << endl;
    ;
}

void min(int arra[], int s)
{
    int min = INT32_MAX;
    for (int i = 0; i < s; i++)
    {
        if (arra[i] < min)
        {
            min = arra[i];
        }
    }
    cout << min << endl;
}
int main()
{
    int array[5] = {1, 2, 3, 6, 5};
    int array2[4] = {0, 2, 3, 4};
    max(array, 5);
    min(array2, 4);
    return 69;
}*/

/*#include <iostream>
using namespace std;
void reverse(int array[], int n)
{
    int s = 0;
    int e = n - 1;
    while (e >= s)
    {
        swap(array[s], array[e]);
        s++;
        e--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    reverse(array, n);
    return 69;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int array[6] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i += 2)
    {
        swap(array[i], array[i + 1]);
    }
    for (int i = 0; i < 6; i++)
    {
        cout << array[i] << " ";
    }

    return 69;
}*/

/*#include <iostream>
#include <map>
using namespace std;
int main()
{
    int array[5] = {2, 1, 3, 3, 3};
    map<int, int> map1;
    for (int i = 0; i < 5; i++)
    {
        map1[array[i]]++;
    }

    for (auto &unique : map1)
    {
        if (unique.second ==1)
        {
            cout << unique.first << " ";
        }
    }

    return 69;
}*/

/*#include <iostream>
#include <map>
using namespace std;
int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int arra[4] = {1, 2, 5, 4};
    map<int, int> map1;
    map<int, int> map2;
    for (int i = 0; i < 5; i++)
    {
        map1[array[i]]++;
    }
    for (int i = 0; i < 5; i++)
    {
        map2[arra[i]]++;
    }

    for (auto &dup : map1)
    {
        for (auto &dup2 : map2)
        {
            if (dup.first == dup2.first)
            {
                cout << dup.first << " ";
            }
        }
    }

    return 69;
}*/

/*#include <iostream>
using namespace std;
bool present = false;
void linear(int array[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == key)
        {
            present = true;
            break;
        }
    }
}
int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    linear(array, 5, 7);
    if (present == true)
    {
        cout << "Present";
    }
    else if (present == false)
    {
        cout << "Absent";
    }
    return 69;
}*/

/*#include <iostream>
#include <algorithm>
using namespace std;
int binarysearch(int array[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (e >= s)
    {
        if (array[mid] == key)
        {
            return mid;
        }
        else if (array[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    int array[5] = {1, 4, 3, 2, 5};
    sort(array, array + 5);
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }

    cout << binarysearch(array, 5, 7);
    return 69;
}*/

// first n last pos and number of occurences
/*#include <iostream>
using namespace std;
int firstpos(int array[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans;
    while (e >= s)
    {
        if (array[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (array[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastpos(int array[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans;
    while (e >= s)
    {
        if (array[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (array[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int array[5] = {1, 2, 2, 2, 2};
    cout << firstpos(array, 5, 2)<<endl;
    cout<<lastpos(array,5,2);
    return 69;
}*/

// Occurences using maps
/*#include <iostream>
#include <map>
using namespace std;
int occurences(int array[], int n, int key)
{
    map<int, int> map1;
    for (int i = 0; i < n; i++)
    {
        map1[array[i]]++;
    }
    if (map1.find(key) != map1.end())
    {
        return map1[key];
    }
    return -1;
}
int main()
{
    int array[5] = {1, 2, 3, 3, 3};
    cout << occurences(array, 5, 7);
    return 69;
}*/

// Sqrt using Binary Search
/*#include <iostream>
using namespace std;
int squr(int n)
{
    int s = 0;
    int e = n;
    int ans;
    int mid = s + (e - s) / 2;
    while (e >= s)
    {
        if (mid * mid == n)
        {
            return mid;
        }
        else if (n > mid * mid)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {

            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Type the squr u wnat of:";
    cin >> n;
    cout << squr(n) << endl;
    cout << "Completed";
    return 69;
}*/

// Selection Sort
/*#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int array[5] = {7, 5, 8, 4, 2};
    for (int i = 0; i < 5 - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (array[min] > array[j])
                min = j;
        }

        swap(array[min], array[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }

    return 69;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int array[8] = {8, 7, 4, 5, 6, 3, 2, 1};
    for (int i = 0; i < 7; i++)
    {
        int min = i;
        for (int j = i + 1; j < 8; j++)
        {
            if (array[min] < array[j])
            {
                swap(array[min], array[j]);
            }
        }
    }
    for (int i = 0; i < 8; i++)
    {
        cout << array[i] << " ";
    }

    return 69;
}*/

// Bubble Sort
/*#include <iostream>
#include <map>
using namespace std;
int main()
{

    int array[5] = {3, 4, 2, 1, 5};
    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }

    return 69;
}*/

// Merge Two Sorted Arrays
/*#include <iostream>
#include <algorithm>
using namespace std;
void merge(int array[], int n, int array2[], int m, int array3[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (array[i] < array2[j])
        {
            array3[k] = array[i];
            i++;
            k++;
        }
        else
        {
            array3[k] = array2[j];
            j++;
            k++;
        }
    }

    while (i < n)
    {
        array3[k] = array[i];
        k++;
        i++;
    }

    while (j < m)
    {
        array3[k] = array2[j];
        j++;
        k++;
    }
}
int main()
{
    int array1[5] = {2, 4, 1, 3, 5};
    int array2[4] = {8, 6, 7, 9};
    sort(array1, array1 + 5);
    sort(array2, array2 + 4);
    int array3[9] = {0};

    merge(array1, 5, array2, 4, array3);
    for (int i = 0; i < 9; i++)
    {
        cout << array3[i];
    }

    return 69;
}*/

// Square in an array

/*#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int array[5] = {5, 4, 3, 2, 1};
    for (int i = 0; i < 5; i++)
    {
        array[i] = array[i] * array[i];
    }
    sort(array, array + 5);

    for (int i = 0; i < 5; i++)
    {

        cout << array[i] << " ";
    }

    return 69;
}*/

// Char Arrays
/*#include <iostream>
#include <string>
#include <map>
using namespace std;

int palindrome(char arr[], int size) // To check Palindrome
{
    int s = 0;
    int e = size - 1;
    while (e >= s)
    {
        if (arr[s] != arr[e])
        {
            return -1;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 7;
}
void reverse(char arr[], int size) // To reverse
{
    int s = 0;
    int e = size - 1;
    while (e >= s)
    {
        swap(arr[s++], arr[e--]);
    }
}
int getlength(char arr[]) // To get length
{
    int count = 0;
    for (int i = 0; i < arr[i] != '\0'; i++)
    {

        count++;
    }
    return count;
}
int main()
{
    char name[10];
    cout << "Enter Your name: ";
    cin >> name;
    int length = getlength(name);
    cout << "The length of this name is: " << length << endl;
    reverse(name, length);
    cout << "Reverse of this name is: " << name << endl;
    cout << "Is it a palindrome?: ";
    cout << palindrome(name, length);

    string s;
    s = "Hirak";
    s.push_back('b');
    cout << s << endl;
    s.pop_back();
    cout << s;

    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) // To replace
    {
        if (s[i] == '_')
        {
            s[i] = '@';
        }
    }
    cout << s;

    char a = 'D'; // Upper to lower
    char lower;
    lower = a + ('d' - 'D');
    cout << lower;

    string s = "Hello"; // To removes occurences of substring from a string
    string part = "ll";
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    cout << s;

    int array[5] = {1, 2, 2, 3, 1}; // To check whether an array of elements's count is odd or even
    map<int, int> map1;
    int ans = 0;
    for (int i = 0; i < 5; i++)
    {
        map1[array[i]]++;
    }
    for (auto &odd : map1)
    {
        if (odd.second % 2 != 0)
            ans = odd.first;
    }

    cout << ans;
    return 69;
}*/

// 2D Arrays
/*#include <iostream>
#include <algorithm>
using namespace std;
void max_min(int array[][3], int n, int m) // Min and Max in a 2D Array
{

    int max = INT32_MIN;
    int min = INT32_MAX;
    int row;
    int column;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (max < array[i][j])
            {
                max = array[i][j];
                row = i;
            }
            if (min > array[i][j])
            {
                min = array[i][j];
                column = j;
            }
        }
    }
    cout << max << endl;
    cout << min << endl;
    cout << row << endl;
    cout << column;
}
bool linear(int arr[][3], int n, int m, int target) // Hve to pass column as an argument otherwise an error
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

void sum1(int array[][3], int m, int n) // To calculate the sum of columns in a 2D array
{

    for (int j = 0; j < m; j++) // To make sum of rows just change the loop's i and j
    {
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += array[j][i];
        }
        cout << sum << " ";
    }
}
int main()
{
    // Taking row wise input
    int array[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> array[i][j];
        }
    }
    // taking column wise input
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> array[j][i];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array[j][i] << " ";
        }
        cout << endl;
    }

    if (linear(array, 3, 3, 1))
    {
        cout << "Present";
    }
    else
    {
        cout << "Not Present";
    }

    // sum1(array, 3, 3);
    // max_min(array, 3, 3);

    return 69;
}*/

// 2D Arrays Binary Search
/*#include <iostream>
using namespace std;
bool binary(int arra[][4], int row, int column, int target)
{
    int s = 0;
    int e = (row * column) - 1;
    int mid = s + (e - s) / 2;
    while (e >= s)
    {
        int element = arra[mid % column][mid / column];
        if (element == target)
        {
            return true;
        }
        else if (element > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }
    return false;
}
int main()
{
    int array2[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> array2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << array2[i][j] << " ";
        }
        cout << endl;
    }
    if (binary(array2, 3, 4, 6))
    {
        cout << "Element Present";
    }
    else
    {
        cout << "Element Absent";
    }

    return 69;
}*/

// Maths For DSA
/*#include <iostream>
#include <vector>
using namespace std;
int gcd_hcf(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else if (b > a)
        {
            b = b - a;
        }
    }
    return a;
}

int main()
{
    cout << gcd_hcf(55, 88);

    return 69;
}*/

// Pointers
/*#include <iostream>
using namespace std;
int main()
{
    // int a = 8;
    // int *p = &a;
    //  cout << p << endl;  // Giving address where a is located
    //  cout << a << endl;  // Value of a
    //  cout << *p << endl; // Dereference operator gives value of the address which is located inside the ptr
    //  cout << &a;         // Address of gives address where a is located
    //  int array[3] = {1, 2, 3};
    //  cout << array << endl;     // Both of these will have same address
    //  cout << &array[0] << endl; // Same address as array but only the first elemnt will be same
    //  int i = 2;
    //  cout << i[array] << endl; // Both will return 3
    //  cout << array[i] << endl; // Same
    //  for (int i = 0; i < 3; i++)
    //{
    //   cout << i[array] << endl; // 1,2,3
    // }
    // int temp[10];
    // int *ptr = &temp[0];
    //  cout << *ptr; //Any garbage value
    // cout << sizeof(temp) << endl;
    // cout << sizeof(ptr);
    int array[5] = {1, 2, 3, 4, 5};
    char arr[6] = "Hirak";
    cout << array << endl; //This will give address as mentioned above
    cout << arr << endl; //But this will give the whole output i.e. Hirak
    int *ptr = &array[0];
    cout << ptr << endl; //Address of array[0] will bne printed
    char *ptr2;
    ptr2 = &arr[0];
    cout << ptr2;// But whole char array will be printed until it doesnt get the null character

    return 69;
}*/

// Pointers With Functions
/*#include <iostream>
using namespace std;
void print(int *p)
{
    *(p) = *p + 1; // Incrementing the addresses's value which is stored in a ptr
}
int main()
{
    int value = 6;
    int *p = &value;
    print(p);
    cout << *p << endl;
    cout << value;

    return 69;
}*/

// Squares Of Numbers =>10
/*#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= 10)
        {
            cout << arr[i] * arr[i] << " " << endl
        }
    }

    return 69;
}*/

// Keywords In c++
/*#include <iostream>
using namespace std;
#define pi 3.14 // A macro
int a = 9;      // A global variable, but can be cganged at nay part and also a bad practice
inline int max1(int a, int b)
{
    return (a > b) ? a : b; // Here an inline func, this body will get replaced with
}
void print(int *arr, int n, int start = 0)
{ // Here a default args, de diya toh le lunga varna default chala dunga
    for (int i = start; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{

    float area;
    area = pi * 8 * 8; // Before compilation the pi gets replaces to 3.14, which allows to take no space in the memeory
                       // cout << area << endl;
                       // cout << a << endl;
    int a = 6, b = 9;
    // cout << max1(a, b); // This func call, reducing the func overhead
    int array[5] = {1, 2, 3, 4, 5};
    print(array, 5, 0); // Can work even if i dont send 0 as an ars, as in the signature i have set start as defaut arg
    return 69;
}
*/

// Recursion
/*#include <iostream>
using namespace std;
void saydigit(int n, string *arr)
{
    if (n == 0)
        return;

    int digit = n % 10;
    n /= 10;
    saydigit(n, arr);
    cout << arr[digit] << " ";
}
int fibo(int n) // Fibo series
{

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibo(n - 1) + fibo(n - 2);
}
int fact(int n) // Factorial
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int pow(int n) // Power of 2
{
    if (n == 0)
    {
        return 1;
    }
    return 2 * pow(n - 1);
}
int main()
{
    int n = 5;
    // cout<<fact(n);
    // cout << pow(6);
    // cout << fibo(5);
    string arr[6] = {"Zero", "One", "Two", "Three", "Four", "Five"};
    // saydigit(544, arr);
    return 69;
}*/

// More Recursion
/*#include <iostream>
using namespace std;
bool sort(int *arr, int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
        return false;
    else
    {
        sort(arr + 1, size - 1);
        return true;
    }
}
bool binary(int arr[], int s, int e, int key)
{
    int mid = s + (e - s) / 2;

    if (s > e)
        return false;
    if (arr[mid] == key)
        return true;
    if (arr[mid] > key)
        return binary(arr, s, mid - 1, key);
    else
        return binary(arr, mid + 1, e, key);
}
bool linear(int *arr, int size, int key)
{
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }

    else
    {
        return linear(arr + 1, size - 1, key);
        return true;
    }
}
int main()
{
     int array[5] = {1, 2, 3, 4, 5};

     if (linear(array, 5, 2))
     {
         cout << "Present";
     }
     else
     {
         cout << "False";
     }
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    if (binary(arr, 0, 6, 10))
    {
        cout << "Present";
    }
    else
    {
        cout << "Absent";
    }
    int arr[5] = {5, 4, 3, 4, 5};
    if(sort(arr , 5)){
        cout<<"Sorted";
    }
    else{
        cout<<"Not Sorted";
    }
    return 69;
}*/

// More More Recursion --Not correct did it myself using recursion
/*#include <iostream>
using namespace std;
bool left(int *arr, int s, int e, int key)
{
    int mid = s + (e - s) / 2;
    if (s > e)
        return -1;
    if (arr[mid] == key)
    {

        int ans = left(arr, s, mid - 1, 2);
        if (ans != -1)
        {
            return ans;
        }
        else
        {
            return mid;
        }
    }
    else if (arr[mid] > key)
    {
        return left(arr, s, mid - 1, 2);
    }
    else
    {
        return left(arr, mid + 1, e, 2);
    }
}
int main()
{
    int array[5] = {1, 1, 2, 3, 4};
    int ans = left(array, 0, 4, 2);
    cout << ans;
    return 69;
}*/

/*#include <iostream>
using namespace std;
int palin(string arr, int s, int e)
{
    if (s >= e)
    {
        return true;
    }
    if (arr[s] != arr[e])
    {
        return false;
    }
    else
    {
        return palin(arr, s + 1, e - 1);
    }
}
int rev(char *arr, int s, int e)
{
    if (s > e)
        return 0;

    std::swap(arr[s++], arr[e--]);

    return rev(arr, s, e);
}
int main()
{
    char arr[5] = {'H', 'i', 'r', 'a', 'k'};
    rev(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    string name = "aba";
    int ans = palin(name, 0, name.length() - 1);
    if (ans)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 69;
}*/

// Merge Sort
/*#include <iostream>
using namespace std;

void mergearray(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1of_first = mid - s + 1;    // Length of first sorted array
    int lenof_sec = e - mid;           // Length of second sorted array
    int *arr1 = new int[len1of_first]; // Creating two arrays
    int *arr2 = new int[lenof_sec];

    // Copying values from main array to newly created two arrays
    int main_arrays = s; // Left elements of main array start from 's'
    for (int i = 0; i < len1of_first; i++)
    {
        arr1[i] = arr[main_arrays++];
    }

    main_arrays = mid + 1; // Right elements of main array start from 'mid + 1'
    for (int i = 0; i < lenof_sec; i++)
    {
        arr2[i] = arr[main_arrays++];
    }

    // Merge the two sorted arrays
    int index_of_first_array = 0;
    int index_of_second_array = 0;
    main_arrays = s;

    while (index_of_first_array < len1of_first && index_of_second_array < lenof_sec)
    {
        if (arr1[index_of_first_array] < arr2[index_of_second_array])
            arr[main_arrays++] = arr1[index_of_first_array++];
        else
        {
            arr[main_arrays++] = arr2[index_of_second_array++];
        }
    }

    // Copy the remaining elements of arr1, if any
    while (index_of_first_array < len1of_first)
    {
        arr[main_arrays++] = arr1[index_of_first_array++];
    }

    // Copy the remaining elements of arr2, if any
    while (index_of_second_array < lenof_sec)
    {
        arr[main_arrays++] = arr2[index_of_second_array++];
    }

    // Free the allocated memory
    delete[] arr1;
    delete[] arr2;
}

void merge(int *arr, int s, int e)
{
    if (s >= e)
        return;

    int mid = s + (e - s) / 2;

    merge(arr, s, mid);
    merge(arr, mid + 1, e);
    mergearray(arr, s, e);
}

int main()
{
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    merge(arr, 0, size - 1);

    // Print the sorted array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}*/

// Again doing megrge sort for its better understanding
/*#include <iostream>
using namespace std;
void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];
    int index_ofmain = s;
    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[index_ofmain++];
    }
    index_ofmain = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        arr2[i] = arr[index_ofmain++];
    }
    index_ofmain = s;
    int i = 0;
    int j = 0;
    while (i < len1 && j < len2)
    {
        if (arr1[i] < arr2[j])
            arr[index_ofmain++] = arr1[i++];
        else
            arr[index_ofmain++] = arr2[j++];
    }
    while (i < len1)
    {
        arr[index_ofmain++] = arr1[i++];
    }
    while (j < len2)
    {
        arr[index_ofmain++] = arr2[j++];
    }

    delete[] arr1;
    delete[] arr2;
}
void sort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    sort(arr, mid + 1, e);
    sort(arr, s, mid);
    merge(arr, s, e);
}
int main()
{
    int array[5] = {1, 9, 3, 0, 5};
    sort(array, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }

    return 69;
}*/

// Quick Sort
/*#include <iostream>
using namespace std;
int partition(int *arr, int s, int e)
{
    int pivot = arr[s];
    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
            cnt++;
    }

    int rightpivot_index = cnt + s;
    std::swap(arr[rightpivot_index], arr[s]);
    int i = s;
    int j = e;
    while (i < rightpivot_index && j > rightpivot_index)
    {
        while (arr[i] < pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < rightpivot_index && j > rightpivot_index)
            std::swap(arr[i++], arr[j--]);
    }
    return rightpivot_index;
}
void sort(int *arr, int s, int e)
{
    if (s >= e)
        return;
    int pi = partition(arr, s, e);
    sort(arr, s, pi - 1);
    sort(arr, pi + 1, e);
}
int main()
{
    int arr[7] = {5, 7, 6, 4, 2, 3, 1};
    sort(arr, 0, 6);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 69;
}*/

// Permutations Of an array
/*#include <iostream>
using namespace std;
void solve(int array[], int num, int index)
{
    if (index == num)
    {
        for (int i = 0; i < num; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;

        return;
    }
    for (int i = index; i < num; i++)
    {
        std::swap(array[index], array[i]);
        solve(array, num, index + 1);
        std::swap(array[index], array[i]);
    }
}
int main()
{
    int array[2] = {1, 2};
    solve(array, 2, 0);

    return 69;
}*/

// Singly Linked List
/*#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *ptr;
    node(int value) : data(value), ptr(NULL)
    {
    }
};

void inserthead(node *&head, int d)
{
    node *node2 = new node(d);
    node2->ptr = head;
    head = node2;
}
void insertleaf(node *&leaf, int d)
{
    node *node3 = new node(d);
    leaf->ptr = node3;
    leaf = node3;
}
void deletebyvalue(node *&head, int value)
{
    if (head == NULL)
        return;
    if (head->data == value)
    {
        node *temp = head;
        head = head->ptr;
        delete temp;
        return;
    }
    node *current = head;
    node *previous = NULL;
    while (current != NULL && current->data != value)
    {
        previous = current;
        current = current->ptr;
    }

    if(current ==NULL){
        return;
    }

    previous->ptr = current->ptr;
    delete current;
}
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->ptr;
    }
}
int main()
{
    node *node1 = new node(5);
    node *head = node1;
    node *leaf = node1;
    inserthead(head, 6);
    insertleaf(leaf, 67);
    deletebyvalue(head , 67);
    print(head);
    return 69;
}*/

// Doubly LinkedList
/*#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int value) : data(value), next(NULL), prev(NULL)
    {
    }
};
void insert_at_head(node *&head, int d)
{
    if (head == NULL)
    {
        node *node2 = new node(d);
        head = node2;
    }
    else
    {
        node *node2 = new node(d);
        node2->next = head;
        head->prev = node2;
        head = node2;
    }
}
void insert_at_leaf(node *&leaf, int d)
{
    if (leaf == NULL)
    {
        node *node3 = new node(d);
        leaf = node3;
    }
    else
    {
        node *node3 = new node(d);
        leaf->next = node3;
        node3->prev = leaf;
        leaf = node3;
    }
}
void print(node *&head)
{
    int cnt = 0;
    node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        cout << temp->data << " ";

        temp = temp->next;
    }
    cout << endl;
    cout << "The length of list is: " << cnt << endl;
}
void delete_value(node *&head, int value)
{
    if (head == NULL)
    {
        return;
    }
    node *current = head;
    if (current->data == value)
    {
        head = current->next;
        if (head != NULL)
        {
            head->prev = NULL;
        }
        delete current;
        return;
    }

    while (current != NULL && current->data != value)
    {
        current = current->next;
    }

    if (current == NULL)
        return;
    if (current->next != NULL)
    { // If the node to be deleted is not the last node
        current->next->prev = current->prev;
    }
    if (current->prev != NULL)
    { // If the node to be deleted is not the head node
        current->prev->next = current->next;
    }

    delete current; // Delete the node
}
int main()
{
    node *node1 = new node(5);
    node *head = node1;
    node *leaf = node1;
    insert_at_head(head, 6);
    insert_at_head(head, 1);
    insert_at_head(head, 4);
    insert_at_leaf(leaf, 9);
    insert_at_leaf(leaf, 0);
    print(head);
    delete_value(head, 6);
    print(head);
    return 69;
}*/

// Middle And Reverse Of A LinkedList
/*#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *ptr;
    node(int value)
    {
        data = value;
        ptr = NULL;
    }
};

void addleaf(node *&leaf, int d)
{
    if (leaf == NULL)
    {
        node *node2 = new node(d);
        leaf = node2;
        return;
    }
    else
    {
        node *node2 = new node(d);
        leaf->ptr = node2;
        leaf = node2;
    }
}
void print(node *&head)
{

    if (head == NULL)
        return;
    else
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->ptr;
            node *node2 = new node(7);
        }
        cout << endl;
    }
}
int print2(node *&head)
{
    int cnt = 0;

    node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->ptr;
    }
    cout << endl;

    return cnt;
}
node *middle(node *&head)
{
    int ans = print2(head) / 2;
    node *temp = head;
    for (int i = 0; i < ans; i++)
    {
        temp = temp->ptr;
    }

    return temp;
}
node *reversee(node *&head)
{

    node *current = head;
    node *previous = NULL;
    node *forward = NULL;
    if (head == NULL || head->ptr == NULL)
    {
        return head;
    }
    else
    {

        while (current != NULL)
        {
            forward = current->ptr;
            current->ptr = previous;
            previous = current;
            current = forward;
        }
    }
    return previous;
}
int main()
{
    node *node1 = new node(7);
    node *leaf = node1;
    node *head = node1;
    addleaf(leaf, 9);
    addleaf(leaf, 11);
    addleaf(leaf, 5);
    addleaf(leaf, 2);
    print(head);
    head = reversee(head);
    print(head);
    int len = print2(head);
    cout << len;
    node *pos = middle(head);
    cout << pos->data;
    return 69;
}*/

// Reverse A Linkedlist By K Group
/*#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *ptr;
    node(int value)
    {
        data = value;
        ptr = NULL;
    }
};

void addleaf(node *&leaf, int d)
{
    if (leaf == NULL)
    {
        node *node2 = new node(d);
        leaf = node2;
        return;
    }
    else
    {
        node *node2 = new node(d);
        leaf->ptr = node2;
        leaf = node2;
    }
}
void print(node *&head)
{

    if (head == NULL)
        return;
    else
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->ptr;
            node *node2 = new node(7);
        }
        cout << endl;
    }
}
node *reversee(node *&head, int k)
{
    int cnt = 0;
    node *current = head;
    node *prev = NULL;
    node *forward = NULL;
    while (current != NULL && cnt < k)
    {
        forward = current->ptr;
        current->ptr = prev;
        prev = current;
        current = forward;
        cnt++;
    }
    if (forward != NULL)
    {
        head->ptr = reversee(forward, k);
    }
    return prev;
}
int main()
{
    node *node1 = new node(7);
    node *leaf = node1;
    node *head = node1;
    addleaf(leaf, 9);
    addleaf(leaf, 11);
    addleaf(leaf, 5);
    addleaf(leaf, 2);
    print(head);
    head = reversee(head, 2);
    print(head);
    return 69;
}*/

// Delete duplicates of a Sorted Linked List
/*#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int value) : data(value), next(NULL)
    {
    }
};

void insertathead(node *&head, int data)
{
    if (head == NULL)
    {
        node *node2 = new node(data);
        head = node2;
    }
    else
    {
        node *temp = new node(data);
        temp->next = head;
        head = temp;
    }
}
void print(node *&head)
{

    if (head == NULL)
        return;
    else
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

node *deleteduplicate(node *&head)
{
    node *curr = head;
    while (curr != NULL && curr->next != NULL)

    {
        if (curr->data == curr->next->data)
        {
            node *temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}
int main()
{
    node *node1 = new node(7);
    node *head = node1;
    insertathead(head, 7);
    insertathead(head, 6);
    insertathead(head, 6);
    insertathead(head, 5);
    print(head);
    node *duplicate = deleteduplicate(head);
    print(duplicate);
    return 69;
}*/

// Delete Duplicatea From Unsorted LinkedList
/*#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int value) : data(value), next(NULL)
    {
    }
};

void insertathead(node *&head, int data)
{
    if (head == NULL)
    {
        node *node2 = new node(data);
        head = node2;
    }
    else
    {
        node *temp = new node(data);
        temp->next = head;
        head = temp;
    }
}
void print(node *&head)
{

    if (head == NULL)
        return;
    else
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}
node *duplicate(node *&head)
{
    node *current = head;
    while (current != NULL && current->next != NULL)
    {   node *forward = current->next;

        while (forward != NULL && forward->next != NULL)
        {
            if (current->data == forward->next->data)
            {
                node *temp = forward->next;
                forward->next = forward->next->next;
                delete temp;
            }
            else
            {
                forward = forward->next;
            }
        }
        current = current->next;
    }
    return head;
}
int main()
{
    node *node1 = new node(4);
    node *head = node1;
    insertathead(head, 3);
    insertathead(head, 5);
    insertathead(head, 2);
    insertathead(head, 3);
    insertathead(head, 2);
    insertathead(head, 4);
    insertathead(head, 2);
    print(head);
    node *dup = duplicate(head);
    print(dup);
    return 69;
}*/

// Remove Element From LL
/*#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int value) : data(value), next(NULL)
    {
    }
};

void insertathead(node *&head, int data)
{
    if (head == NULL)
    {
        node *node2 = new node(data);
        head = node2;
    }
    else
    {
        node *temp = new node(data);
        temp->next = head;
        head = temp;
    }
}
void print(node *&head)
{

    if (head == NULL)
        return;
    else
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}
node *remove(node *&head, int value)
{
    if (head == NULL)
        return NULL;
    while (head != NULL && head->data == value)
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }

    node *current = head;
    while (current != NULL && current->next != NULL)
    {
        if (current->next->data == value)
        {
            node *temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
        else
        {
            current = current->next;
        }
    }
    return head;
}
int main()
{

    node *node1 = new node(4);
    node *head = node1;
    insertathead(head, 3);
    insertathead(head, 3);
    insertathead(head, 4);
    insertathead(head, 2);
    print(head);
    node *remove1 = remove(head, 2);
    print(remove1);
    return 69;
}*/

// Sort 0,1,2
/*#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int value) : data(value), next(NULL)
    {
    }
};

void leaff(node *&leaf, int data)
{
    if (leaf == NULL)
    {
        node *node2 = new node(data);
        leaf = node2;
    }
    else
    {
        node *node2 = new node(data);
        leaf->next = node2;
        leaf = node2;
    }
}
void print(node *&head)
{

    if (head == NULL)
        return;
    else
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}
node *sort012(node *&head)
{
    int zero = 0;
    int one = 0;
    int two = 0;
    node *current = head;
    while (current != NULL)
    {
        if (current->data == 0)
            zero++;
        else if (current->data == 1)
            one++;
        else
            two++;

        current = current->next;
    }

    current = head;
    while (current != NULL)
    {
        if (one != 0)
        {
            current->data = 1;
            one--;
        }
        else if (zero != 0)
        {
            current->data = 0;
            zero--;
        }
        else
        {
            current->data = 2;
            two--;
        }
        current = current->next;
    }
    return head;
}
int main()
{
    node *node1 = new node(1);
    node *leaf = node1;
    node *head = node1;
    leaff(leaf, 0);
    leaff(leaf, 1);
    leaff(leaf, 1);
    leaff(leaf, 2);
    leaff(leaf, 2);
    leaff(leaf, 1);
    leaff(leaf, 0);
    leaff(leaf, 2);
    print(head);
    node *sorting = sort012(head);
    print(sorting);
    return 69;
}*/

// Check Palindrome
/*#include <iostream>
#include <vector>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};
void inst_head(node *&head, int data)
{
    if (head == NULL)
    {
        node *node2 = new node(data);
        head = node2;
    }
    else
    {
        node *node2 = new node(data);
        node2->next = head;
        head = node2;
    }
}
void print(node *&head)
{

    if (head == NULL)
        return;
    else
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

bool reverse1(vector<int> v)
{
    int size = v.size();
    int s = 0;
    int e = size - 1;
    while (e >= s)
    {
        if (v[s] != v[e])
            return false;

        else
        {
            s++;
            e--;
        }
    }
    return true;
}
bool palin(node *&head)
{
    vector<int> v;
    node *temp = head;
    while (temp != NULL)
    {
        v.push_back(temp->data);
        temp = temp->next;
    }
    return reverse1(v);
}
int main()
{
    node *node1 = new node(0);
    node *head = node1;
    inst_head(head, 1);
    inst_head(head, 1);
    inst_head(head, 0);
    print(head);
    if (palin(head))
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 69;
}*/

// Middle of the linkedlist
/*#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};
void insert_at_head(node *&head, int data)
{
    node *node2 = new node(data);
    node2->next = head;
    head = node2;
}
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
node *middle(node *head)
{
    node *fast = head->next;
    node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
int main()
{
    node *node1 = new node(5);
    node *head = node1;
    insert_at_head(head, 6);
    insert_at_head(head, 2);
    insert_at_head(head, 9);
    print(head);
    node *getmid = middle(head);
    cout << getmid->data;
    return 69;
}*/

// Create a stack using stl and class
/*#include <iostream>
#include<stack>
using namespace std;
class stack
{
public:
    int *arr;
    int size;
    int top;
    stack(int size_of_arr)
    {
        arr = new int[size_of_arr];
        top = -1;
        size = size_of_arr;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow\n";
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow\n";
        }
    }

    void peek()
    {
        if (top >= 0)
        {
            cout << arr[top] << endl;
        }
        else
        {
            cout << "No Element\n";
        }
    }

    void empty()
    {
        if (top == -1)
        {
            cout << "No Element\n";
        }
        else
        {
            cout << "Element Present\n";
        }
    }
};
int main()
{

    stack s(5);
    s.push(5);
    s.push(2);
    s.push(3);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.peek();
    s.empty();

    stack<int> s;
    s.push(4);
    s.push(2);
    s.push(5);
    s.push(1);
    cout << s.top() << endl;
    cout << s.empty() << endl;
    cout << s.size() << endl;
    cout << "Printing the stack" << " ";
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }


    return 69;
}*/

// Reverse of string using stack
/*#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string name = "Hirak";
    stack<char> s;
    char ch;
    for (int i = 0; i < name.length(); i++)
    {
        ch = name[i];
        s.push(ch);
    }
    string ans = "";
    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    cout << ans;
    return 69;
}*/

// Valid Paranthesis
/*#include <iostream>
#include <stack>
using namespace std;

bool areParenthesesBalanced(string brack)
{
    stack<char> s;
    char ch;

    for (int i = 0; i < brack.length(); i++)
    {
        ch = brack[i];
        if (ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
        else
        {
            if (s.empty()) // If no opening brack then stack empty
            {
                return false;
            }
            else if ((ch == ')' && s.top() == '(') ||
                     (ch == '}' && s.top() == '{') ||
                     (ch == ']' && s.top() == '['))
            {
                s.pop();
            }
            else
            {
                return false; // If there is one or two unbalanced then return false
            }
        }
    }
    return s.empty(); // If stack gets empty this means all are balcnced
}

int main()
{
    string brack = "{([])}";
    if (areParenthesesBalanced(brack))
    {
        cout << "Parentheses are balanced" << endl;
    }
    else
    {
        cout << "Parentheses are not balanced" << endl;
    }
    return 0;
}*/

// Insert Elemnet at the bottom of stack
/*#include <iostream>
#include <stack>
using namespace std;
void  solve(stack<int> &s, int x)
{
    if (s.empty())
    {
        s.push(x);
        return;
    }
    else
    {
        int num = s.top();
        s.pop();
        solve(s, x);
        s.push(num);
    }
}
int main()
{
    stack<int> s;
    s.push(4);
    s.push(5);
    s.push(2);
    solve(s, 7);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 69;
}*/

// Queue
/*#include <iostream>
using namespace std;
class queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;
    queue(int size_if_elemnt)
    {
        arr = new int[size_if_elemnt];
        size = size_if_elemnt;
        front = 0;
        rear = 0;
    }
    void push(int elemnt)
    {
        if (front == size)
        {
            cout << "Full\n";
        }
        else
        {
            arr[rear] = elemnt;
            rear++;
        }
    }
    void pop()
    {
        if (front == rear)
        {
            cout << "No Elem\n";
        }
        else
        {
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
    }
    void emptyy()
    {
        if (front == rear)
            cout << "Full\n";
            else{
                cout<<"Not Full\n";
            }
    }
    void frontttt()
    {
        if (front == rear)
            cout << "No Elem\n";
        else
        {
            cout << arr[front];
        }
    }
};
int main()
{ Implent using Stl
  queue<int> q;
  q.push(2);
  q.push(4);
  cout << q.front() << endl;
  cout << q.back();
  q.pop();
  cout << q.front() << endl;
  cout << q.back();
    queue s(5);
    s.push(5);
    s.push(2);
    s.push(3);
    s.frontttt();
    s.pop();
    s.frontttt();
    s.emptyy();
    return 69;
}*/

// ReverseA Queue
/*#include <iostream>
#include <stack>
#include <queue>
using namespace std;
void rev(queue<int> &q)
{
    stack<int> s;
    while (!q.empty())
    {

        int elem = q.front();
        q.pop();
        s.push(elem);
    }
    while (!s.empty())
    {
        int elem = s.top();
        s.pop();
        q.push(elem);
    }
}
int main()
{
    queue<int> q;
    q.push(5);
    q.push(4);
    q.push(1);
    q.push(2);
    rev(q);
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 69;
}*/

// Reverse A Queue By K Elemnts
/*#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main()
{
    queue<int> q;
    stack<int> s;
    q.push(5);
    q.push(1);
    q.push(3);
    q.push(2);
    int k;
    cout << "By how many elemnts:";
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int elem = q.front();
        q.pop();
        s.push(elem);
    }
    while (!s.empty())
    {
        int elm = s.top();
        s.pop();
        q.push(elm);
    }

    int size = q.size() - k;
    while (size--)
    {
        int el = q.front();
        q.pop();
        q.push(el);
    }
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 69;
}*/

// Interleave the first half of queue with second half
/*#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> old;
    queue<int> neww;
    old.push(5);
    old.push(4);
    old.push(3);
    old.push(2);
    old.push(1);

    int half = old.size() / 2;
    for (int i = 0; i <= half; i++)
    {
        neww.push(old.front());
        old.pop();
    }

    while (!neww.empty())
    {

        old.push(neww.front());
        neww.pop();
        if (neww.empty())
        {
            break;
        }
        old.push(old.front());
        old.pop();
    }

    while (!old.empty())
    {
        cout << old.front() << " ";
        old.pop();
    }
    return 69;
}*/

// Find Highest Differnce In An Array
/*#include <iostream>
#include <climits>
using namespace std;
int main()
{

    int arr[5] = {1, 2, 3, 4, 6};
    int maxi = INT32_MIN;
    int min = INT32_MAX;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        else if (arr[i] > maxi)
            maxi = arr[i];
    }
    cout << maxi << " " << min;
    int result = maxi - min;
    if (result % 2 == 0)
        cout << "Even\n";
    else
        cout << "Odd";
    return 69;
}*/

// Rotate An Array By K Elements
/*#include <iostream>
void reverse(int *arr, int start, int end)
{
    while (end >= start)
    {
        std::swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void rotate(int *arr, int n, int k)
{
    k = k % n;
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
}
using namespace std;
int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    rotate(arr, 5, 3);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 69;
}*/

// Copy array elemts to another
/*#include <iostream>
using namespace std;
int main()
{
    int cnt = 0;
    int arr[5] = {1, 2, 3, 5, 5};
    int arr2[5];
    for (int i = 0; i < 5; i++)
    {
        arr2[cnt] = arr[i];
        cnt++;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << " ";
    }

    return 69;
}*/

// Copy string to char
/*#include <iostream>
using namespace std;
int main()
{

    string name = "Hirak";

    char cha[5];
    for (int i = 0; i < name.length(); i++)
    {
        cha[i] = name[i];
    }
    for (int i = 0; i < cha[i] != '\0'; i++)
    {
        cout << cha[i] << " ";
    }

    return 69;
}*/

// Remove Vowels
/*#include <iostream>
using namespace std;
int main()
{
    char name[] = "aeioubcda";
    string ans = " ";
    for (int i = 0; i < name[i] != '\0'; i++)
    {
        if (name[i] != 'a' && name[i] != 'e' && name[i] != 'i' && name[i] != 'o' && name[i] != 'u' &&
            name[i] != 'A' && name[i] != 'E' && name[i] != 'I' && name[i] != 'O' && name[i] != 'U')
        {
            ans += name[i];
        }
    }
    cout << ans;
    return 69;
}*/

// Mereg string alternatiely
/*#include <iostream>
using namespace std;
int main()
{
    string name = "Hirak";
    string name2 = "Bala";
    string result = "";
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < name.length() && j < name2.length())
    {
        result += name[i++];
        result += name2[j++];
    }
    while (i < name.length())
        result += name[i++];

    while (j < name2.length())
        result += name2[j++];
    cout <<result;
    return 69;
}*/

// Reverse Vowels
/*#include <iostream>
using namespace std;
bool check(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    else
        return false;
}
string rev(string &name)
{
    int s = 0;
    int e = name.length();
    while (e > s)
    {
        if (check(name[s]) && char(name[e]))
            std::swap(name[s++], name[e++]);

        else
        {
            s++;
            e--;
        }
    }
    return name;
}
int main()
{
    string name = "hirak bali";
    cout << rev(name);

    return 69;
}*/

// Product Of Array Elemnts Excpet Itself
/*#include <iostream>
using namespace std;
int main()
{ // 1st approach-- Gives TLE
    int arr[4] = {1, 2, 3, 4};
    int pro = 1;
    for (int i = 0; i < 4; i++)
    {
        pro *= arr[i];
    }
    cout << pro << endl;
    int *ans = new int[4];
    for (int i = 0; i < 4; i++)
    {
        // ans[i] = pro / arr[i];
    }
    for (int i = 0; i < 4; i++)
    {
        // cout << ans[i] << " ";
    }
    delete[] ans;

    // 2nd Approach
    int *left = new int[4];
    int *right = new int[4];
    left[0] = 1;
    right[3] = 1;
    for (int i = 1; i < 4; i++)
    {
        left[i] = left[i - 1] * arr[i - 1];
    }
    for (int i = 2; i >= 0; i--)
    {
        right[i] = right[i + 1] * arr[i + 1];
    }
    int ans[4];
    for (int i = 0; i < 4; i++)
    {
        ans[i] = left[i] * right[i];
        cout << ans[i] << " ";
    }
    delete [] left;
    delete [] right;
    return 69;
}*/

// Compare Which is Greater
/*#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a[4] = {1, 2, 4, 3};
    int b[4] = {1, 3, 2, 4};
    vector<int> ans;
    for (int i = 0; i < 4; i++)
    {

        if (a[i] == b[i])
            ans.push_back(0);
        else if (a[i] < b[i])

            ans.push_back(2);
        else
            ans.push_back(1);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 69;
}*/

// Min and max of every array elemnts excepte itself
/*#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        arr[i] = sum - arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    int maxi = arr[0], mini = arr[0];
    for (int i = 0; i < 5; i++)
    {
        maxi = std::max(arr[i], maxi);
        mini = std::min(arr[i], mini);
    }
    cout << mini << " " << maxi;
    int long long x;
    cout<<sizeof(x);
    return 69;
}*/

// Number of occurences of max elemnt
/*#include <iostream>
#include <climits>
using namespace std;
int main()
{
    long long arr[5] = {1, 4, 4, 2, 3};
    int cnt = 0;
    long long maxi = INT64_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
            cnt = 1;
        }
        else if (arr[i] == maxi)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 69;
}*/

// Check Wheteher The Received Is Equal To Expected Or Not
/*#include <iostream>
#include <string>
using namespace std;
int mssg_check(string received)
{
    string expected;
    getline(cin, expected);
    int cnt = 0;
    for (int i = 0; i < expected.length(); i++)
    {
        if (expected[i] != received[i])
            cnt++;
    }
    return cnt;
}
int main()
{
    cout<<mssg_check("Hirak");
    return 69;
}*/

/*#include <iostream>
#include <vector>
using namespace std;
pair<int, int> ret(int a, int b)
{
    return make_pair(a, b);
}
int main()
{
    vector<pair<int, int>> v;
    v.push_back(ret(3, 5));
    cout << v.size();
    return 69;
}*/

/*#include <iostream>
#include <algorithm>
void sorti(int *arr, int n)
{
    std::stable_sort(arr, arr + n);
}
using namespace std;
int main()
{
    int arr[5] = {5, 2, 3, 4, 1};
    sorti(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 69;
}*/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i =0;
//     for (; i < 5; i++)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
//     cout << i;
//     return 69;
// }

// #include <iostream>
// using namespace std;
// int search(int arr[], int key)
// {
//     bool anser = false;
//     for (int i = 0; i < 4; i++)
//     {
//         if (key == arr[i])
//         {
//             anser = true;
//             break;
//         }
//         else
//         {
//             anser = false;
//         }
//     }
//     return anser;
// }

// int main()
// {
//     int array[5] = {1, 2, 3, 4, 5};
//     if (search(array, 99))
//     {
//         cout << "Present";
//     }
//     else
//     {
//         cout << "Not";
//     }
//     return 69;
// }

// #include <iostream>
// using namespace std;
// class c
// {
//     string name = "Hirak";
//     int age = 19;

// public:
//     void show()
//     {
//         cout << "Your name is " << name << " and age is " << age;
//     }
// };

// int main()
// {
//     c obj;
//     obj.show();

//     return 69;
// }

// #include <iostream>
// using namespace std;
// class c
// {
//     int age;
//     string name;

// public:
//     c(int age, string name)
//     {
//         this->age = age;
//         this->name = name;
//     }
//     void print()
//     {
//         cout << "Your name is " << name << " and age is " << age;
//     }
// };
// int main()
// {
//     c obj(19, "Hirak");
//     obj.print();
//     return 69;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int array[4] = {4,3,2};
//     int d = 5;
//     // cout<<sizeof(array)/sizeof(int);
//     int count = 0;
//     for (int i = 0; i < 4; i++)
//     {

//         if (array[i] > d)
//             count = 1;
//         if (array[i] <= d)
//             if (count == 1)
//                 count += 1;
//     }

//     cout << count;
//     return 69;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     string name = "Hirak";
//     name[0] = 'A';
//     cout<<name;
// return 69 ;
// }

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int max = INT32_MIN;
    int min = INT32_MAX;
    for (int i = 0; i < 5; i++)
    {
        if (max < array[i])
            max = array[i];

        if (min > array[i])
        {
            min = array[i];
        }
    }
    cout << max << endl;
    cout << min;
    return 69;
}

