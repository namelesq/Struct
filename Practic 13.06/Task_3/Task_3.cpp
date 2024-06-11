#include <iostream>
struct Fraction
{
	int numerator;
	int denominator;
};
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
Fraction simplifyFraction(Fraction f) {
    int commonDivisor = gcd(f.numerator, f.denominator);
    f.numerator /= commonDivisor;
    f.denominator /= commonDivisor;
    return f;
}
Fraction add(Fraction f1, Fraction f2) {
    Fraction result;
    result.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    result.denominator = f1.denominator * f2.denominator;
    return simplifyFraction(result);
}
Fraction subtract(Fraction f1, Fraction f2) {
    Fraction result;
    result.numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
    result.denominator = f1.denominator * f2.denominator;
    return simplifyFraction(result);
}
Fraction multiply(Fraction f1, Fraction f2) {
    Fraction result;
    result.numerator = f1.numerator * f2.numerator;
    result.denominator = f1.denominator * f2.denominator;
    return simplifyFraction(result);
}
Fraction divide(Fraction f1, Fraction f2) {
    Fraction result;
    result.numerator = f1.numerator * f2.denominator;
    result.denominator = f1.denominator * f2.numerator;
    return simplifyFraction(result);
}
int main()
{
    Fraction f1, f2;
    std::cout << "Enter first fraction(numerator and denominator): ";
    std::cin >> f1.numerator >> f1.denominator;
    std::cout << "Enter second fraction(numerator and denominator): ";
    std::cin >> f2.numerator >> f2.denominator;
    std::cout << "Sum: " << add(f1, f2).numerator << "/" << add(f1, f2).denominator << std::endl;
    std::cout << "Difference: " << subtract(f1, f2).numerator << "/" << subtract(f1, f2).denominator << std::endl;
    std::cout << "Product: " << multiply(f1, f2).numerator << "/" << multiply(f1, f2).denominator << std::endl;
    std::cout << "Quotient: " << divide(f1, f2).numerator << "/" << divide(f1, f2).denominator << std::endl;
    return 0;
}