#include <iostream>
#include "Stack.cpp"

int main () {

    char str[100];

    std::cout << "Input an infix string: ";
    std::cin >> str;

    std::cout << "Postfix version is: ";

    int i=0;
    char c,k;
    Stack<char>* s = new Stack<char>();

    while(c = str[i++]){
        if(c == ')'){
            while(k = s->pop()){
                if (k == '('){
                    break;
                }
                std::cout << k;
            }
        }else if (c == '+' || c == '-' || c == '/' || c == '*' || c == '%' || c == '('){
            s->push(c);
        }else{
            std::cout << c;
        }
    }
    
    while(k = s->pop()){
        if(k != '(') std::cout << k;
    }
    std::cout << std::endl;
    return 0;
}