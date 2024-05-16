#include"check.h"

bool check_del(){
    complex a(2,4);
    complex b(3,5);
    double c = 5;
    complex otv1(1.3, -0.1);
    complex otv2(0.6, 1);
    return (b/a == otv1 && b/c == otv2);

}

bool check_mult(){
    complex a(2,4);
    complex b(3,5);
    double c =7;
    complex otv1(-14, 22);
    complex otv2(14,28);
    return(a*b == otv1 && a*c == otv2);
}

bool check_slosh(){
    complex a(2,4);
    complex b(3,5);
    double c = 3;
    complex otv1(5,9);
    complex otv2(5,4);
    return(a+b == otv1 && a+c == otv2);
}

bool check_minus(){
    complex a(2,4);
    complex b(3,5);
    double c = 12;
    complex otv1(-1,-1);
    complex otv2(-10,4);
    return(a-b == otv1 && a-c == otv2);
}