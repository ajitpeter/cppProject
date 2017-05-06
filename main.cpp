#include <iostream>
#incldue <vector>

template <typename T>
void sum(T a, T b)
{
	return a + b;
}

int main()
{
	std::cout<<"Travis CI\n";
	std::vector<int> v = { 1, 2, 3, 4, 5, 6 };
	
	for(auto eachVal : v)
		std::cout << eachVal;
		
	std::cout<<"\n"<<sum(5, 10);
		
	return 0;
}
