#include <iostream> //Header file for basic input/output operations
#include <vector> // Required for typedef
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std; //Namespace is declarative region providing scope to identifiers, prevents name conflicts
//namespace first{int nameSpace=1;}
//namespace second{int nameSpace=2;}

void isPalindrome(string S)
{
    string P=S;
    reverse(P.begin(),P.end());
    if(S==P){
        cout<< "Is Palindrome"<<endl;
    }
    else{
        cout<< "Is not Palindrome"<<endl;
    }
}
void triangleShapeAndTest()
{
    cout<<"     /|" <<endl;
    cout<<"    / |" <<endl;
    cout<<"   /  |" <<endl;
    cout<<"  /   |" <<endl;
    cout<<" /    |" <<endl;
    cout<<"/_____|" <<endl;

    int num=32767;
    cout<<num%20<<endl;
}
void sayHello()
{
    string characterName = "FirstCharacter"; 
    int characterAge;
    characterAge = 35;

    cout<<"Hello " << characterName<<endl;
    cout<<"You are "<<characterAge<<" years old"<<endl;
}
void basicAndDataTypes()
{
    //Logical operators are &&, ||, !
    char grade='A'; //Unstored variable is considered constant
    int num1; //declaration
    int num2=1; //initialization
    string phrase="Phrase here";
    double number2=2.22;
    float testNumber=3.33;
    bool isTrueorFalse=false;
    int students=20;

    students=students+1;
    students+=1;
    students++;

    int remainder = students%3; //Divides Students(20) by 3 and outputs remainder (2)

    cout<<"First data type is Grade, my grade is "<<grade<<endl; //endl flushes output buffer.
    cout<<"Second data type is string, which is phrase: "<<phrase<<endl; //<< is insertion operator
    cout<<"Third data type is integer, which is whole number:" <<num2<<endl;//>> is extraction operator
    cout<<"Fourth data type is double, decimal: "<<number2<<endl;
    cout<<"Fifth data type is bool, true or false: "<<isTrueorFalse<<endl;
    cout<<"The number of current students: "<<students<<endl;
    cout<<"Remainder of students divided by 3: "<<remainder<<endl;
    printf("Test printf function\n"); //Same as cout<<
    printf("Using percent s which is a string: %s and percent D which is a number %d", "string", 500);
    printf("Using percent f which is a float: %f", testNumber);
}
void constants()
{
    const double pi = 3.14159; //Constants will never change, read only after assignment
    double radius = 10;
    double circumference = 2*pi*radius;
    
    cout<<"Circumference is: " << circumference <<" cm";
}
void typeDefVectors()
{
    //include vector required
    //typedef = Alias for another data type
    using double_t = double; // Alternative of typing out typedef each time.

    typedef string text_t;
    typedef int number_t;

    text_t firstName = "Arti";
    number_t num = 5;
    double_t decimal = 5.5;
    
    cout<<firstName<<endl;
    cout<<num<<endl;
    cout<<decimal<<endl;

}
void typeConversion()
{
    //type conversion = conversion of value of one data type to another
    //Implicit = Auto || Explicit = Preced value with new data type (int)

    double x = (int)3.14; //Converting integer 3.14 (which is 3) to double x
    double y = 3.14;


    int correct=8;
    int questions=10;
    double score1=correct/questions*100; //This will not work because cannot divide ints?
    double score2=correct/(double)questions*100; //This works because int division requires typeConversion.

    double right=9;
    double requests=10;
    double total=right/requests*100;

    cout<<x<<endl;
    cout<<y<<endl;
    cout<<score1<<"%"<<endl;
    cout<<score2<<"%"<<endl;
    cout<<total<<"%"<<endl;
}
void userInput()
{

    //Accepting user input with cin followed by getline(), new line character within 
    //input buffer, can add >> ws to eliminate newline or white sepace before input
    string user;
    string phrase;
    int age;

    cout<<"Please enter your name: "<<endl;
    cin>>user;

    cout<<"Please enter your age: "<<endl;
    cin>>age;

    cout<<"Please enter multiple words: "<<endl;
    getline(cin >>ws,phrase); //getline() allows whitespace for multiple characters
    cout<<"Hello "<<user<<endl;
    cout<<"You are "<<age<<" years old"<<endl;
    cout<<"Your phrase is: "<<phrase<<endl;
}
void mathFunctionsnHypotenuse()
{
    double a=3;
    double b=4;
    double c=20;
    double x=20;
    double y=30;
    double h;
    double i;
    double j;
    double k;
    double l;
    double m;
    double n;
    double o;
    double z;    h=max(a,b); //Largest number, can only be 2 integers.
    i=min(a,b); //Lowest number, can only be 2 integers.
    j=pow(a,b);
    k=sqrt(9);
    l=abs(-5);
    m=round(3.14);
    n=ceil(3.14);
    o=floor(3.14);
    double sideA;
    double sideB;

    cout<<h<<endl;
    cout<<i<<endl;
    cout<<j<<endl;
    cout<<"The max of 3,4, 20 is: "<<h<<endl;
    cout<<"The min of 3,4 is: "<<i<<endl;
    cout<<"The pow of 3,4 is: "<<j<<endl;
    cout<<"The sqrt of 9 is: "<<k<<endl;
    cout<<"The absolute of -5 is: "<<l<<endl;
    cout<<"The rounding of 3.14 is: "<<m<<endl;
    cout<<"The ceiling of 3.14 is: "<<n<<endl;
    cout<<"The flooring of 3.14 is: "<<o<<endl;

    cout<<"Enter length of side A: "<<endl;
    cin>>sideA;
    cout<<"Enter length of side B: "<<endl;
    cin>>sideB;

    double hyp=sqrt(pow(sideA,2) + pow(sideB,2)); //Hyp needs to be entered after input.

    cout<<"The Hypotenuse is: "<<hyp<<endl;

}
void ageIfElseStatements()
{
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;

    if (age>=75){
        cout<<"Access granted, grandpa"<<endl;
    }
    else if(age>=18){
        cout<<"You are granted access"<<endl;
    }
    else if(age<=17){
        cout<<"You are too young"<<endl;
    }
    else{
        cout<<"You are too young to enter"<<endl;
    }
}
void switchStatementsMonth()
{
    int month;
    cout<<"Enter a month from 1 - 12: "<<endl;
    cin>>month;

    switch(month){
        case 1:
        cout<<"The month is January"<<endl;
        break;
        case 2:
        cout<<"The month is February"<<endl;
        break;
        case 3:
        cout<<"The month is March"<<endl;
        break;
        case 4:
        cout<<"The month is April"<<endl;
        break;
        case 5:
        cout<<"The month is January"<<endl;
        break;
        case 6:
        cout<<"The month is January"<<endl;
        break;
        case 7:
        cout<<"The month is January"<<endl;
        break;
        case 8:
        cout<<"The month is January"<<endl;
        break;
        case 9:
        cout<<"The month is August"<<endl;
        break;
        case 10:
        cout<<"The month is October"<<endl;
        break;
        case 11:
        cout<<"The month is November"<<endl;
        break;
        case 12:
        cout<<"The month is December"<<endl;
        break;
        default: 
        cout<<"This is the default message if nothing is matched"<<endl;
    }
}
void caculatorProgram()
{
    char op;
    double num1;
    double num2;
    double result;

    cout<<"************* CALCULATOR *************"<<endl;
    cout<<"Enter an operator (+ - / *): "<<endl;
    cin>>op;
    if(op=='+'){
        result=num1+num2;
    }
    else if(op== '-'){
        result=num1-num2;
    }
    else if(op== '/'){
        result=num1/num2;
    }
    else if(op== '*'){
        result=num1*num2;
    }
    else{
        cout<<"Please enter an appropriate operator"<<endl;
    }

    cout<<"Enter your first number: "<<endl;
    cin>>num1;

    cout<<"Enter your second number: "<<endl;
    cin>>num2;

    cout<<"Your result is: "<<result<<endl;
    cout<<"**************************"<<endl;

}
void ternaryOperatorModulus()
{
    //Ternary replacement for if/else
    //condition ? expression1 : expression
    int grade=60;
    int number=9;
    bool hungry=true;

    number%2==1 ? cout<<"Odd"<<endl : cout<<"Even"<<endl; //If number%2==1 then Odd, if number%2==0, Even.
    
    grade>=75 ? cout<<"You pass!"<<endl : cout<<"You fail!"<<endl;

    hungry ? cout<<"You are hungry"<<endl : cout<<"You are full"<<endl; //This way 
    cout<<(hungry ? "You are hungry" : "You are full"); //Or This way 


}
void temperatureConversion()
{
    double temp;
    char unit;

    cout<<"***************TEMPERATURE CONVERSION***************"<<endl;
    cout<<"F = Fahrenheit"<<endl;
    cout<<"C = Celsius"<<endl;
    cout<<"Please enter unit to convert to: "<<endl;
    cin>>unit;

    if(unit=='F' || unit=='f'){
        cout<<"Enter temperature in Celsius: \n";
        cin>>temp;
        temp=(1.8*temp)+32;
        cout<<"Your converted temp is: "<<temp<<"F"<<endl;
    }
    else if(unit=='C' || unit=='c'){
        cout<<"Enter temperature in Fahrenheit: "<<endl;
        cin>>temp;
        temp=(5/9*temp)-32;
        cout<<"Your converted temp is: "<<temp<<"C"<<endl;
    }
    else{
        cout<<"Please enter only in C or F"<<endl;
    }
    cout<<"******************************"<<endl;

}
void strings()
{
    //https://cplusplus.com/reference/string/string/?kw=string
    //.length method
    //.empty() method
    //.clear() method clears entered text
    //.append() Adds another string
    //.at(#) Index number outputs character
    //.insert(0,'A') Inserts at index 0, the letter A
    //.find(' ') Finds index where white space located
    //.erase(0, 3) Eliminates beginning at index 0 up to 3 characters.

    string name;

    cout<<"Enter a name: "<<endl;
    getline(cin,name);
    cout<<"Your name is: "<<name<<endl;
    cout<<"Length of your name: "<<name.length()<<endl;
    cout<<"Appending @gmail.com to your name: "<<name.append("@gmail.com")<<endl;

}
void whileDoWhileLoop()
{
    //Do While = Performs block of code, then repeats if condition == True
    int number;

    do{
    cout<<"Enter a positive #: "<<endl;
    cin>>number;
    }
    while(number<0);

    /*
    while(number<0) //Checks condition first, without asking to enter number so defaults to 0
    {
        cout<<"Enter a positive #: "<<endl;
        cin>>number;
    }
    */
    cout<<"The number is: "<<number;
}
void forLoopAndNestedLoop()
{
    //For Loop
    for(int i=1;i<10;i+=2){
        cout<<i<<' ';
    }
    for(int j=10;j>=0;j-=5){
        cout<<j<<' ';
    }
    cout<<"Happy new year!"<<endl;

    //Nested Loop
    for(int k=10;k<=20;k+=2){
        for(int m=10;m<=20;m+=2){
            cout<<m<<' ';
        }
        cout<<'\n';
    }

    int rows;
    int columns;
    char symbols;

    cout<<"How many rows?: "<<endl;
    cin>>rows;

    cout<<"How many columns?: "<<endl;
    cin>>columns;

    cout<<"What Symbol to be used?: "<<endl;
    cin>>symbols;

    for(int o=1;o<=rows;o++){ //Outer Row
        for(int p=1;p<=columns;p++){ //Inner Column
            cout<<symbols<<' '; //Print Symbol
        }
        cout<<'\n';
    }
}
void breakAndContinue()
{
    for(int i=0;i<=10;i+=2){
        if(i==6){
            continue; //Skip over iteration
        }
        cout<<i<<endl;
    }
}
void pseudoRandomNumbers()
{
    
    srand(time(NULL)); //Programmers Usually (time(NULL)) for the seed;

    int num = rand(); //Generates between 0 - 32,767
    cout<<num<<endl;

    int num2 = (rand() % 6)+1; //Between 1 - 6 Divides Random() by 6 and outputs Remainder
    cout<<num2<<endl;

    int num3 = (rand() % 20)+1; //Between 1 - 20
    cout<<num3<<endl;


    //Rolling 3 dice
    int dice1 = (rand() % 6)+1;
    int dice2 = (rand() % 6)+1;
    int dice3 = (rand() % 6)+1;
    cout<<dice1<<' ';
    cout<<dice2<<' ';
    cout<<dice3<<' ';

}
void pointersAndReferences()
{
    // Pointer is JUST a value that is an Address
    // ******MEMORY****** 
    //Value of memory is the data stored at that location

    //ADDRESS || VALUE
    // 0X1000 ||  0x4 <--- Example, 4 lives at location 0X1000 ---- int x=4;
    // 0X1004 ||  0X1000 <---- Example ------ int * pX = &x;


    int x=4;
    int * pX = &x; //* is placed next to the variable, now a pointer to an integer, a 4 byte value
                   //pX (p)ointer to X is equal to & (the address of) x
                   //int pointer pX is set to address of x

    int y = *pX; //*pX is D reference, integer y is set to the thing pointed to by pX.
                 //This makes it posible to pass x by reference instead of value


    //*****REFERENCE*****
    //CANNOT be NULL, must be tied to existing variable
    //CANNOT Change the variable that is referenced by a reference
    //CANNOT do math on references, cannot be indexed, added to, subtracted, etc.
    //CANNOT have references to references like you can have pointers to pointers.

    //Alias or another name for existing variable
    //int i = 0; <---- Original Value to be referenced
    //int &ri = i; <---- Alias to i, the reference
    //Now when value of ri is updated, so is i
    
    int i=0;
    int k=i;
    int &ri=i;
    cout<<"This is i, which is 0: "<<i<<endl;
    cout<<"This is k, which is equal to i: "<<k<<endl;
    cout<<"This is ri, which is referenced to i: "<<ri<<endl;

    ri+=5;
    cout<<"This is i after updating + 5 to ri: "<<i<<endl;
    cout<<"This is k, which is equal to i: "<<k<<endl;
    cout<<"This is ri after updating + 5 to ri: " <<ri<<endl;

    i+=5;
    cout<<"This is i after further updating +5 to i: "<<i<<endl;
    cout<<"This is k, which is equal to i: "<<k<<endl;
    cout<<"This is ri after further updating +5 to i: "<<ri<<' ';

}
int main() //Main Function
{
    //int nameSpace=3;
    //cout<<nameSpace<<endl;
    //cout<<first::nameSpace<<endl; //Calls "first" namespace variable
    //isPalindrome("RaCeCaR");
    triangleShapeAndTest();
    //sayHello();
    //basicAndDataTypes();
    //constants();
    //typeDefVectors();
    //typeConversion();
    //userInput();
    //mathFunctionsnHypotenuse();
    //ageIfElseStatements();
    //switchStatementsMonth();
    //caculatorProgram();
    //ternaryOperatorModulus();
    //temperatureConversion();  
    //strings();  
    //whileDoWhileLoop();
    //forLoopAndNestedLoop();
    //breakAndContinue();
    //pseudoRandomNumbers();
    pointersAndReferences();
    return 0;
}   