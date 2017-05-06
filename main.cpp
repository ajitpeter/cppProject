#include <iostream>
#incldue <vector>

int main()
{
	std::cout<<"Travis CI\n";
	std::vector<int> v = { 1, 2, 3, 4, 5, 6 };
	
	for(auto eachVal : v)
		std::cout << eachVal;
		
	return 0;
}
