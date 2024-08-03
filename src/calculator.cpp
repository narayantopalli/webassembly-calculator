#include <cmath>

extern "C" {
    double add(double a, double b) {
        return a + b;
    }
    double subtract(double a, double b) {
        return a - b;
    }
    double multiply(double a, double b) {
        return a * b;
    }
    double divide(double a, double b) {
        return a / b;
    }
    double power(double a, double b) {
        return pow(a, b);
    }
    double logarithm(double a, double b) {
        return log2(a)/log2(b);
    }
    double rsin(double a) {
        return sin(a);
    }
    double rcos(double a) {
        return cos(a);
    }
    double rtan(double a) {
        return tan(a);
    }
    double arcsin(double a) {
        return asin(a);
    }
    double arccos(double a) {
        return acos(a);
    }
    double arctan(double a) {
        return atan(a);
    }
}
