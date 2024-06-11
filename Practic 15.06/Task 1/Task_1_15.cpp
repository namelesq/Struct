#include <iostream>
struct WashingMachine
{
	std::string firm;
	std::string colour;
	int width;
	int length;
	int high;
	int power;
	int spin_speed;
	int heating_temperature;
};
void ChangePower(WashingMachine wash_machine)
{
	std::cout << "Enter new power for washing machine: ";
	std::cin >> wash_machine.power;
}
void ChangeSpinSpeed(WashingMachine wash_machine)
{
	std::cout << "Enter new spin spped for washing machine: ";
	std::cin >> wash_machine.spin_speed;
}
void ChangeHeatingTemperature(WashingMachine wash_machine)
{
	std::cout << "Enter new heating temperature for washing machine: ";
	std::cin >> wash_machine.heating_temperature;
}
int main()
{
	WashingMachine wash_machine = { "Firm 1", "White", 40, 50, 40, 100, 70, 90 };
	ChangePower(wash_machine);
	ChangeSpinSpeed(wash_machine);
	ChangeHeatingTemperature(wash_machine);
	std::cout << "firm: " << wash_machine.firm<<"\n";
	std::cout << "colour: " << wash_machine.colour << "\n";
	std::cout << "width: " << wash_machine.width << "\n";
	std::cout << "length: " << wash_machine.length<<"\n";
	std::cout << "high: " << wash_machine.high << "\n";
	std::cout << "power: " << wash_machine.power << "\n";
	std::cout << "spin speed: " << wash_machine.spin_speed << "\n";
	std::cout << "heating temperature: " << wash_machine.heating_temperature;
	return 0;
}