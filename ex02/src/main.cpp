#include"Array.hpp"

int main()
{

	// Test empty array initialization
	std::cout << "--- Test empty array initialization ---" << std::endl;
	Array<int> arr0;
	std::cout << "arr0.size(): " << arr0.size() << std::endl;
	try
	{
		std::cout << "arr0[0]: " << arr0[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	// Test array initialization
	std::cout << "--- Test array initialization ---" << std::endl;
	Array<int> arr1(5);
	std::cout << "arr1.size(): " << arr1.size() << std::endl;
	for (int i = 0; i < arr1.size(); i++)
		arr1[i] = i;
	for (int i = 0; i < arr1.size(); i++)
		std::cout << "arr1[" << i << "]: " << arr1[i] << std::endl;
	std::cout << std::endl;

	// Test array copy constructor
	std::cout << "--- Test array copy constructor ---" << std::endl;
	Array<int> arr2(arr1);
	std::cout << "arr2.size(): " << arr2.size() << std::endl;
	for (int i = 0; i < arr2.size(); i++)
		std::cout << "arr2[" << i << "]: " << arr2[i] << std::endl;
	std::cout << std::endl;
	
	
	// Test array assignment operator
	std::cout << "--- Test array assignment operator ---" << std::endl;
	Array<int> arr3 = arr1;
	std::cout << "arr3.size(): " << arr3.size() << std::endl;
	for (int i = 0; i < arr3.size(); i++)
		std::cout << "arr3[" << i << "]: " << arr3[i] << std::endl;
	std::cout << std::endl;

	// Test array out of bounds exception
	std::cout << "--- Test array out of bounds exception ---" << std::endl;
	try
	{
		std::cout << "arr1[5]: " << arr1[5] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	// Test another type
	std::cout << "--- Test another type ---" << std::endl;
	Array<std::string> arr4(3);
	arr4[0] = "Up";
	arr4[1] = "2";
	arr4[2] = "U";
	for (int i = 0; i < arr4.size(); i++)
		std::cout << "arr4[" << i << "]: " << arr4[i] << std::endl;
	std::cout << std::endl;

	return 0;
	
}