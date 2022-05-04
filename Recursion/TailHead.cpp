#include <iostream>

void fun(int n)
{
	if (n > 0)
	{
		std::cout << n << " ";
		fun(n - 1);
	}
}

void fun2(int n)
{
	if (n > 0)
	{
		fun2(n - 1); 
		std::cout << n << " ";
		
	}
}
int main()
{
	int x = 3; 
	fun(x); 
	fun2(x); 
}
