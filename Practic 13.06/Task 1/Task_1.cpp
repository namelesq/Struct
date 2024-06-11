#include <iostream>
struct RectangleStruct
{
	int length;
	int width;
	char drawing_rectangle;
};
void ChangeSizeByRectangle(RectangleStruct rectangle, char symbol)
{
	int new_length, new_width;
	std::cout << "Enter new length and width rectangle: ";
	std::cin >> new_length >> new_width;
	rectangle.length = new_length;
	rectangle.width = new_width;
	std::cout << "\n";
	for (int i = 0; i < new_length; i++)
	{
		for (int j = 0; j < new_width; j++)
		{
			std::cout << symbol;
		}
		std::cout << "\n";
	}

}
void printRectangle(int length, int width, char symb)
{
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < width; j++)
		{
			std::cout << symb;
		}
		std::cout << "\n";
	}
}
void ShiftFromTheTopRectangle(RectangleStruct rectangle, int shift,char symb)
{
	std::cout << "Shift from the top rectangle: \n";
	for (int i = 0; i < shift; i++)
	{
		std::cout << "\n";
	}
	for (int i = 0; i < rectangle.length; i++)
	{
		for (int j = 0; j < rectangle.width; j++)
		{
			std::cout << symb;
		}
		std::cout << "\n";
	}
}
void RightShiftRectangle(RectangleStruct rectangle, int shift, char symb)
{
	std::cout << "Right shift rectangle: \n";
	for (int i = 0; i < rectangle.length; i++)
	{
		for (int k = 0; k < shift; k++)
		{
			std::cout << "\t";
		}
		for (int j = 0; j < rectangle.width; j++)
		{
			std::cout << symb;
		}
		std::cout << "\n";
	}
}
int main()
{
	RectangleStruct rectangle;
	int length, width;
	char symbol;
	std::cout << "Enter length rectangle: ";
	std::cin >> length;
	std::cout << "Enter width rectangle: ";
	std::cin >> width;
	std::cout << "Enter symbol for drawing rectangle: ";
	std::cin >> symbol;
	rectangle.length = length;
	rectangle.width = width;
	rectangle.drawing_rectangle = symbol;
	printRectangle(length,width,symbol);
	ChangeSizeByRectangle(rectangle, symbol);
	int shift;
	std::cout << "Enter shift for shifting rectangle: ";
	std::cin >> shift;
	ShiftFromTheTopRectangle(rectangle, shift, symbol);
	RightShiftRectangle(rectangle, shift, symbol);
	return 0;
}