// Random Rectangle

#include<iostream>
#include<ctime>
#include<string>
#include<iomanip>
#include<random>

int main()
{
srand(time(0));
//making variable
int start = rand() % 40 + 1;
std::string pound;
pound.assign(start, '#');

//output of random number
std::cout<< pound << std:: endl;
std::cout<< pound << std:: endl;
std::cout<< pound << std:: endl;














return 0;
}
