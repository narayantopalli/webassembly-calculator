#include <cmath>

template<typename T>
T add(T a, T b) {
    return a + b;
}

template<typename T>
T subtract(T a, T b) {
    return a - b;
}

template<typename T>
T multiply(T a, T b) {
    return a * b;
}

template<typename T>
T divide(T a, T b) {
    if (b != 0) {
        return a / b;
    } else {
        return 0;
    }
}

template<typename T>
T power(T a, T b) {
    return pow(a, b);
}

template<typename T>
T logarithm(T a, T b) {
    return log2(a) / log2(b);
}

template<typename T>
T rsin(T a) {
    return sin(a);
}

template<typename T>
T rcos(T a) {
    return cos(a);
}

template<typename T>
T rtan(T a) {
    return tan(a);
}

template<typename T>
T arcsin(T a) {
    return asin(a);
}

template<typename T>
T arccos(T a) {
    return acos(a);
}

template<typename T>
T arctan(T a) {
    return atan(a);
}

extern "C" {
    int add_int(int a, int b) { return add(a, b); }
    long add_long(long a, long b) { return add(a, b); }
    float add_float(float a, float b) { return add(a, b); }
    double add_double(double a, double b) { return add(a, b); }

    int subtract_int(int a, int b) { return subtract(a, b); }
    long subtract_long(long a, long b) { return subtract(a, b); }
    float subtract_float(float a, float b) { return subtract(a, b); }
    double subtract_double(double a, double b) { return subtract(a, b); }

    int multiply_int(int a, int b) { return multiply(a, b); }
    long multiply_long(long a, long b) { return multiply(a, b); }
    float multiply_float(float a, float b) { return multiply(a, b); }
    double multiply_double(double a, double b) { return multiply(a, b); }

    int divide_int(int a, int b) { return divide(a, b); }
    long divide_long(long a, long b) { return divide(a, b); }
    float divide_float(float a, float b) { return divide(a, b); }
    double divide_double(double a, double b) { return divide(a, b); }

    int power_int(int a, int b) { return power(a, b); }
    long power_long(long a, long b) { return power(a, b); }
    float power_float(float a, float b) { return power(a, b); }
    double power_double(double a, double b) { return power(a, b); }

    int logarithm_int(int a, int b) { return logarithm(a, b); }
    long logarithm_long(long a, long b) { return logarithm(a, b); }
    float logarithm_float(float a, float b) { return logarithm(a, b); }
    double logarithm_double(double a, double b) { return logarithm(a, b); }

    float rsin_float(float a) { return rsin(a); }
    double rsin_double(double a) { return rsin(a); }

    float rcos_float(float a) { return rcos(a); }
    double rcos_double(double a) { return rcos(a); }

    float rtan_float(float a) { return rtan(a); }
    double rtan_double(double a) { return rtan(a); }

    float arcsin_float(float a) { return arcsin(a); }
    double arcsin_double(double a) { return arcsin(a); }

    float arccos_float(float a) { return arccos(a); }
    double arccos_double(double a) { return arccos(a); }

    float arctan_float(float a) { return arctan(a); }
    double arctan_double(double a) { return arctan(a); }
}
