#include <iostream>
struct Animal
{
	std::string name;
	std::string Class;
	std::string nickname;
};
void InputStruct(Animal& object)
{
	std::cout << "Enter name: ";
	std::cin >> object.name;
	std::cout << "Enter class: ";
	std::cin >> object.Class;
	std::cout << "Enter nickname: ";
	std::cin >> object.nickname;
}
void PrintAnimal(Animal& object)
{
	std::cout << "Name: " << object.name;
	std::cout << "Class: " << object.Class;
	std::cout << "Nickname: " << object.nickname;
}
void makesound(Animal& object)
{
	std::cout << object.nickname << " says: PshPshPsh";
}
int main()
{
	Animal mypet;
	InputStruct(mypet);
	PrintAnimal(mypet);
	makesound(mypet);
	return 0;
}