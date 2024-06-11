#include <iostream>
#include <cmath>
struct TheCoordinateSystem
{
	int x;
	int y;
};
int FindingTheDistanceBetweenTwoPoints(TheCoordinateSystem first_point, TheCoordinateSystem second_point)
{
	int result = sqrt(pow(second_point.x - first_point.x,2) + pow(second_point.y - first_point.y,2));
	return result;
}
int main()
{
	TheCoordinateSystem first_coordinate, second_coordinate;
	std::cout << "Enter first point x and y: ";
	std::cin >> first_coordinate.x >> first_coordinate.y;
	std::cout << "Enter second point x and y: ";
	std::cin >> second_coordinate.x >> second_coordinate.y;
	int result = FindingTheDistanceBetweenTwoPoints(first_coordinate, second_coordinate);
	std::cout << "Distance between two point: " << result;
	return 0;
}