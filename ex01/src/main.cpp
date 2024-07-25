#include"iter.hpp"
#include<iostream>

template<typename T>
void log(T x)
{
	std::cout << "LOGGING: " << x << std::endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

	iter(arr, 5, log);

	std::cout << std::endl;

	std::string arr2[] = {"Lorem", "ipsum", "no", "recuerdo", "mas"};
	
	iter (arr2, 5, log);
	
}


