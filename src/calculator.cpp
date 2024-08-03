#include <cmath>
#include <emscripten/emscripten.h>

extern "C" {
    EMSCRIPTEN_KEEPALIVE
    double add(double a, double b) {
        return a + b;
    }
    EMSCRIPTEN_KEEPALIVE
    double subtract(double a, double b) {
        return a - b;
    }
    EMSCRIPTEN_KEEPALIVE
    double multiply(double a, double b) {
        return a * b;
    }
    EMSCRIPTEN_KEEPALIVE
    double divide(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            return 0;
        }
    }
    EMSCRIPTEN_KEEPALIVE
    double power(double a, double b) {
        return pow(a, b);
    }
    EMSCRIPTEN_KEEPALIVE
    double logarithm(double a, double b) {
        return log2(a)/log2(b);
    }
    EMSCRIPTEN_KEEPALIVE
    double rsin(double a) {
        return sin(a);
    }
    EMSCRIPTEN_KEEPALIVE
    double rcos(double a) {
        return cos(a);
    }
    EMSCRIPTEN_KEEPALIVE
    double rtan(double a) {
        return tan(a);
    }
    EMSCRIPTEN_KEEPALIVE
    double arcsin(double a) {
        return asin(a);
    }
    EMSCRIPTEN_KEEPALIVE
    double arccos(double a) {
        return acos(a);
    }
    EMSCRIPTEN_KEEPALIVE
    double arctan(double a) {
        return atan(a);
    }
}
