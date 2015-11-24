#include <iostream>

int main()
{
	try
	{
		int val1 = 0;
		int val2 = 0;

		std::cout << "Please enter two integers:\n";
		std::cin >> val1 >> val2;
		if (!std::cin)
		{
			throw std::invalid_argument("Invalid argument");
		}
	}
	
	
	catch(std::runtime_error& re)
	{
		re.what();
	}
	catch (std::invalid_argument& ia)
	{
		ia.what();
	}

	system("pause");
	return 0;
}