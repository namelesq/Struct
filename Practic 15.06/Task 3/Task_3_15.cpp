#include <iostream>
struct Boiler
{
	std::string firm;
	std::string colour;
	int power;
	int volume;
	int heating_tempeature;
};
void ChangePower(Boiler boiler)
{
	std::cout << "Enter new power: ";
	std::cin >> boiler.power;
}
void ChangeVolume(Boiler boiler)
{
	std::cout << "Enter new volume: ";
	std::cin >> boiler.volume;
}
void ChangeHeatingTemperature(Boiler boiler)
{
	std::cout << "Enter new heating temperature: ";
	std::cin >> boiler.heating_tempeature;
}
int main()
{
	Boiler boiler = { "Firm 1", "White", 100, 200, 90 };
	ChangePower(boiler);
	ChangeVolume(boiler);
	ChangeHeatingTemperature(boiler);
	std::cout << "Firm: " << boiler.firm;
	std::cout << "Model: " << boiler.colour;
	std::cout << "Power: " << boiler.power;
	std::cout << "Volume: " << boiler.volume;
	std::cout << "Heating temperature: " << boiler.heating_tempeature;
	return 0;
}