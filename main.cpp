#include <iostream>
#include <vector>

int main()
{
	std::cout<<"Travis CI\n";	
	std::vector<int> v = { 1, 2, 3, 4, 5, 6 };
	
	for(auto val : v)
		std::cout << val << "\n";
		
	return 0;
}
