#include <iostream>
#include <sstream>
#include <tuple>
#include <limits>

class calcul {
private:
	int a, b;
public: 
	
	void setValues(int num1, int num2);
	int addition();
	int subtraction();

};

void calcul::setValues(int num1, int num2)
{
	a = num1;
	b = num2;
}

int calcul::addition() {
	return a + b;
}

int calcul::subtraction() {
	return a - b;
}

/*int main()
{
	char c;
	int a, b;
	calcul inst;
	std::string str;

	std::cout << "Please write numbers you want to use:\n";
	while (!(std::cin >> a && std::cin >> b))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid Input!" << std::endl;
	}
	inst.setValues(a, b);
	
	std::cout << "type A if you want to add them, type S if you want to subtract them:\n";
	
	while (!(std::cin >> c)) {

		if (c == 'A')
			std::cout << inst.addition() << std::endl;

		else if (c == 'S')
			std::cout << inst.subtraction() << std::endl;
		
		else
			std::cerr << "Invalid input! Type 'quit' to Exit the program" << std::endl;

	}
		


	
	system("pause");
	return 0;
}*/






