
#include<iostream>
#include"BigInteger.h"
using namespace std;
int main()
{
    /********declaration of variables*********/
   BigInt a;                                             //a defined with value 0
   BigInt b(789);                                        //b defined with value int value
   BigInt c((long long int)91534271957362);            //c defined with value long long int value
   BigInt d("78479210234650987651178");                   //d defined with string value
   BigInt e(c);                                         //e defined with values of c

    /********Converting toBigNumbers*********/
    int n1 = -321;
    long long int n2 = -987610432198761043;
    string str = "-92823573220181727383937444789373";
   BigInt f = to_Big(n1);                              //converting int toBigInt
   BigInt g = to_Big(n2);                              //converting long long int toBigInt
   BigInt h = to_Big(str);                              //converting string toBigInt

    /********user Input*********/
   BigInt i;
    cout<<"Enter the value for i: ";
    cin>>i;                                                     //Taking input from user

    cout<<"a: "<<a<<endl;                                      /**           Printing Values        **/
    cout<<"b: "<<b<<endl;                                      /**           Printing Values        **/
    cout<<"c: "<<c<<endl;                                      /**           Printing Values        **/
    cout<<"d: "<<d<<endl;                                      /**           Printing Values        **/
    cout<<"e: "<<e<<endl;                                      /**           Printing Values        **/
    cout<<"f: "<<f<<endl;                                      /**           Printing Values        **/
    cout<<"g: "<<g<<endl;                                      /**           Printing Values        **/
    cout<<"h: "<<h<<endl;                                      /**           Printing Values        **/

    /********Arithmatic Operations*********/
    cout<<"Addition: "<<a+b<<endl;                             //Addition
    cout<<"Subtraction: "<<b-a<<endl;                          //subtraction
    cout<<"Multiplication: "<<a*b<<endl;                       //Multiplication
    cout<<"Division: "<<d/b<<endl;                             //Division

    cout<<"b + 10: "<<b+10<<endl;
    cout<<"b - 10: "<<b-10<<endl;
    cout<<"b * 10: "<<b*10<<endl;
    cout<<"b / 10: "<<b/10<<endl;

    cout<<"10 + b: "<<10+b<<endl;
    cout<<"10 - b: "<<10-b<<endl;
    cout<<"10 * b: "<<10*b<<endl;
    cout<<"10 / b: "<<10/b<<endl;


    /******** other Operations *********/

    //unary operations
    cout<<"PreIncrement: "<<++b<<endl;
    cout<<"PreDecrement: "<<--b<<endl;
    cout<<"PostIncrement: "<<b++<<endl;
    cout<<"PostDecrement: "<<b--<<endl;

    //equality check
    cout<<"Check c != e: "<<(bool)(c != e)<<endl;              //Checking if value of both are different
    cout<<"Check c == e: "<<(bool)(c == e)<<endl;              //Checking if value of both are same




    /********Functions*********/

    cout<<"Maximum: "<<maxBig(a, b)<<endl;                               //Maximum of two Numbers
    cout<<"Minimum: "<<minBig(a, b)<<endl;                               //Minimum of two Numbers
    cout<<"absolute: "<<absBig(a)<<" "<<absBig(b)<<endl;                //Absolute value of a number
    cout<<"Factorial: "<<factBig(a)<<" "<<factBig(b)<<endl;             //Factorial of a number

    return 0;
}
