#include"complex.h"
#include<iostream>
#include"check.h"

int main(){
    bool del = check_del();
    bool mult = check_mult();
    bool slosh =  check_slosh();
    bool minus = check_minus();
    if(del && mult && slosh && minus)
        std::cout << "all is correct\n";
}