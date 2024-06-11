#include <iostream>
struct Iron
{
	std::string firm;
	std::string model;
	std::string colour;
	int min_temp;
	int max_temp;
	bool steam_supply;
	int power;
};
void ChangeMinTemp(Iron iron)
{
	std::cout << "Enter new min temp: ";
	std::cin >> iron.min_temp;
}
void ChangeMaxTemp(Iron iron)
{
	std::cout << "Enter new max temp: ";
	std::cin >> iron.max_temp;
}
void ChangeSteamSupply(Iron iron)
{
	std::cout << "Enter new steam supply: ";
	std::cin >> iron.steam_supply;
}
void ChangePower(Iron iron)
{
	std::cout << "Enter new power: ";
	std::cin >> iron.power;
}
int main()
{
	Iron iron = { "Firm 1", "Model 1", "Green", 30, 200, true, 100 };
	ChangeMinTemp(iron);
	ChangeMaxTemp(iron);
	ChangeSteamSupply(iron);
	ChangePower(iron);
	std::cout << "Firm: " << iron.firm;
	std::cout << "Model: " << iron.model;
	std::cout << "Colour: " << iron.colour;
	std::cout << "Min temp: " << iron.min_temp;
	std::cout << "Max temp: " << iron.max_temp;
	std::cout << "Steam supply: " << iron.steam_supply;
	std::cout << "Power: " << iron.power;
	return 0;
}