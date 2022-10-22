#include <iostream>

int main(){
  
    std::string questions[] = {"1. What year was c++ created?: ",
                               "2. Who invented C++?: ",
                               "3. What is the predecessor of C++?: ",
                               "4. What is the upcoming descendant of C++?: "};

    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                               {"A. Guido Van Rossum", "B. Bjarne Stoustrup", "C. Mark Zucker", "D. Someone else"},
                               {"A. C", "B. Python", "C. Cobalt", "D. Java"},
                               {"A. Go", "B. C#", "C. Carbon", "D. Assembly"}};

    char answerKey[]={'C','B','A','C'};
    int size=sizeof(questions)/sizeof(questions[0]);
    char guess;
    double score=0;

    for(int i=0;i<size;i++){
        std::cout<<"***********************"<<'\n';
        std::cout<<questions[i]<<'\n';
        std::cout<<"***********************"<<'\n';

        for(int j=0;j<sizeof(options[i])/sizeof(options[i][0]);j++){ //Now need to iterate over 2D Array
            std::cout<<options[i][j]<<'\n';
        } 

        std::cin>>guess;
        guess=toupper(guess);

        if(guess==answerKey[i]){
            std::cout<<"Correct\n";
            score++;
        }
        else{
            std::cout<<"Wrong\n";
            std::cout<<"Answer: " <<answerKey[i]<<'\n';
        }
    }
        std::cout<<"Score: "<<score/4*100<<'%';
    return 0;
}
