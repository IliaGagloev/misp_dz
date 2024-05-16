#include"complex.h"


complex::complex(double _R, double _C){
    R = _R;
    C = _C;
}

complex::complex(complex& other){
    R = other.R;
    C = other.C;
}

complex& complex::operator=(complex& other){
    R = other.R;
    C = other.C;
    return *this;
}

complex& complex::operator+=(complex& other){
    R += other.R;
    C += other.C;
    return *this;
}

complex& complex::operator-=(complex& other){
    R -= other.R;
    C -= other.C;
    return *this;
}

complex& complex::operator*=(complex& other){
    double r = R;
    R = R*other.R - C*other.C;
    C = C*other.R + r*other.C;
    return *this;
}

complex& complex::operator/=(complex& other){
    double delit = other.R*other.R + other.C*other.C; 
    double r = R;
    R = (R*other.R + C*other.C)/delit;
    C = (C*other.R - r*other.C)/delit;
    return *this; 
}

bool complex::operator==(complex& other){
    return (R == other.R) && (C == other.C);
}

void complex::print(){
    std::cout << R << " " << C << "\n";
}