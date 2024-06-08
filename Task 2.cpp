#include <iostream>
struct Auto
{
	int length;
	int landing_height;
	int engine_volume;
	int engine_power;
	int wheel_diameter;
	std::string colour;
	std::string transmission;
};
void InputMeaningForAuto(Auto car)
{
	std::cin >> car.length;
	std::cin >> car.landing_height;
	std::cin >> car.engine_volume;
	std::cin >> car.engine_power;
	std::cin >> car.wheel_diameter;
	std::cin >> car.colour;
	std::cin >> car.transmission;
}
void DisplayingMeaning(Auto car)
{
	std::cout << car.length<<"\n";
	std::cout << car.landing_height<<"\n";
	std::cout << car.engine_volume<<"\n";
	std::cout << car.engine_power<<"\n";
	std::cout << car.wheel_diameter<<"\n";
	std::cout << car.colour<<"\n";
	std::cout << car.transmission;
}
void SearchMeanings(Auto car, std::string key)
{
	if (key == "length")
	{
		std::cout << "Length: " << car.length;
	}
	else if (key == "landing height")
	{
		std::cout << "Landing height: " << car.landing_height;
	}
	else if (key == "engine volume")
	{
		std::cout << "Engine volume: " << car.engine_volume;
	}
	else if (key == "engine power")
	{
		std::cout << "Engine powwer: " << car.engine_power;
	}
	else if (key == "wheel diameter")
	{
		std::cout << "Wheel diameter: " << car.wheel_diameter;
	}
	else if (key == "colour")
	{
		std::cout << "Colour: " << car.colour;
	}
	else if (key == "tramsmission")
	{
		std::cout << "Transmission: " << car.transmission;
	}
	else
	{
		std::cerr << "Error in meaning";
	}
}
int main()
{
	Auto car_1 = {};
	InputMeaningForAuto(car_1);
	std::string key;
	std::cout << "Display meaning car: \n";
	DisplayingMeaning(car_1);
	std::cout << "Search meaning\nEnter meaning for search: ";
	std::cin >> key;
	SearchMeanings(car_1, key);
	return 0;
}