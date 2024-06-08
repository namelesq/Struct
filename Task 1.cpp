#include <iostream>
#include <cmath>
struct ComplexNumber
{
	int a;
	int b;
};
ComplexNumber AdditionComplexNumbers(ComplexNumber Z_1, ComplexNumber Z_2)
{
	ComplexNumber Result;
	Result.a = Z_1.a + Z_2.a;
	Result.b = Z_1.b+ Z_2.b;
	return Result;
}
ComplexNumber SubtractionComplexNumber(ComplexNumber Z_1, ComplexNumber Z_2)
{
	ComplexNumber Result;
	Result.a = Z_1.a - Z_2.a;
	Result.b = Z_1.b - Z_2.b;
	return Result;
}
ComplexNumber CompositionComplexNumber(ComplexNumber Z_1, ComplexNumber Z_2)
{
	ComplexNumber Result;
	Result.a = Z_1.a * Z_2.a;
	Result.b = Z_1.b * Z_2.b;
	return Result;
}
ComplexNumber DivisionComplexNumber(ComplexNumber Z_1, ComplexNumber Z_2)
{
	ComplexNumber Result;
	Result.a = Z_1.a / Z_2.a;
	Result.b = Z_1.b / Z_2.b;
	return Result;
}
int main()
{
	setlocale(LC_ALL, "RU");
	ComplexNumber z_1 = { 10,8};
	ComplexNumber z_2 = { 7,6};
	ComplexNumber summ = AdditionComplexNumbers(z_1, z_2);
	ComplexNumber subtraction = SubtractionComplexNumber(z_1, z_2);
	ComplexNumber composition = CompositionComplexNumber(z_1, z_2);
	ComplexNumber division = DivisionComplexNumber(z_1, z_2);
	std::cout << "��������: " << summ.a << "+" << summ.b << "i\n";
	std::cout << "���������: " << subtraction.a << "-" << subtraction.b << "i\n";
	std::cout << "���������: " << composition.a << "*" << composition.b << "i\n";
	std::cout << "�������: " << division.a << "/" << division.b << "i\n";
	return 0;
}