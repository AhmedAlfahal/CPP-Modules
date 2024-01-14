#include <iostream>
#include "Array.hpp"
#include<cstdlib>
#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
    //SCOPE
    {
        Array<int> tmp(100);
		for (int i = 0; i < tmp.size(); i++)
			tmp[i] = i;
        Array<int> test(200);
		tmp = test;
		test = tmp;
		test = tmp;
		test = tmp;
		try {
			for (int i = 0; i < tmp.size(); i++)
    		{
				std::cout << "-------------------------------------" << std::endl;
				std::cout << "tmp: " << tmp[i] << std::endl;
				std::cout << "test: " << test[i] << std::endl;
				std::cout << "-------------------------------------" << std::endl;
    		}
		}
		catch (const std::exception& e)
	       { std::cerr << e.what() << '\n';}
    }

    try
    {
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    delete [] mirror;//
    return 0;
}