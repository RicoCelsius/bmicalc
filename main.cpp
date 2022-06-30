#include <iostream>

int main(){
    float weigth,height,bmi; //LET OP DAT JE VARIABELEN IN 1X KUNT MAKEN!
    
    std::cout << "What is your weight?";
    std::cin >> weigth;
    std::cout << "What is your height?";
    std::cin >> height;
    bmi = weigth/(height*height); // let op haakjes want nu gaat de berekening van links naar rechts.

    if(bmi < 18.5){
        std::cout << "underweight";
    }
    else if (bmi > 25){
        std::cout << "overweight";
    }
    else {
        std::cout << "normal weight";
    }




    system("pause>0");
}