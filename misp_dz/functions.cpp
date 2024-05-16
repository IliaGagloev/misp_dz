#include"complex.h"

complex& operator+(complex& a, complex& b){
    complex c = a;
    return c+=b;
}

complex& operator-(complex& a, complex& b){
    complex c = a;
    return c-=b;
}

complex& operator*(complex& a, complex& b){
    complex c = a;
    return c*=b;
}

complex& operator/(complex& a, complex& b){
    complex c = a;
    return c/=b;
}

complex& operator+(complex& a, double& b){
    complex c(b, 0);
    complex d = a;
    return d+=c;
}

complex& operator-(complex& a, double& b){
    complex c(b, 0);
    complex d = a;
    return d-=c;
}

complex& operator*(complex& a, double& b){
    complex c(b, 0);
    complex d = a;
    return d*=c;
}

complex& operator/(complex& a, double& b){
    complex c(b,0);
    complex d = a;
    return d/=c;
}