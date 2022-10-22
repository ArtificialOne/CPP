#include <iostream>
    
    int main(){
    
    char op;
    double num1;
    double num2;
    double result;

    std::cout<<"************* CALCULATOR *************"<<'\n';
    std::cout<<"Enter an operator (+ - / *): ";
    std::cin>>op;
    
    std::cout<<"Enter your first number: ";
    std::cin>>num1;

    std::cout<<"Enter your second number: ";
    std::cin>>num2;

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
        std::cout<<"Please enter an appropriate operator"<<'\n';
    }

    std::cout<<"Your result is: "<<result<<'\n';
    std::cout<<"**************************"<<std::endl;

    return 0;
    
}
