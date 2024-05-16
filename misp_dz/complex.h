#pragma once

#include<iostream>

class complex{
private:
    double R = 0, C = 0;
public:
    complex() = default;
    complex(double _R, double _C);
    complex(complex& other);
    ~complex() = default;
    void print();
    complex &operator=(complex& other);
    complex &operator+=(complex& other);
    complex &operator-=(complex& other);
    complex &operator*=(complex& other);
    complex &operator/=(complex& other);
    bool operator==(complex& other);
};

complex& operator+(complex& a, complex& b);
complex& operator-(complex& a, complex& b);
complex& operator*(complex& a, complex& b);
complex& operator/(complex& a, complex& b);

complex& operator+(complex& a, double& b);
complex& operator-(complex& a, double& b);
complex& operator*(complex& a, double& b);
complex& operator/(complex& a, double& b);