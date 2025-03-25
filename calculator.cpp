#include <calculator.h>
#include <iostram>
using namespace std;
double addition(double x, double y) {
    return x+y;
}
double ubtraction(double x, double y){
    return x-y;
}
double multiplication(double x, double y) {
    return x*y;
}
double division(double x, double y) {
    return x/y;
}
int factorial(int x) {
    int y=1;
    for (i=x; i>0; i++) {
        y= y*x;
    }
    return y;
}
int lcm(int x, int y){
        return (x / gcd(x, y)) * y;
}
