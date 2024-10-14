#include <iostream>
int main() {
  
double weight;
int x;

  std::cout<<" What's up Lil' Mac??? LEts get that weight so we can see if you're up to par \n";
  
  std::cout<< " Input your weight: ";
  std::cin>> weight;

  std::cout<<" Alright lets compute your weight on the planet you're fighting on: ";
  std::cin>> x;

  switch (x)
    {
    case 1:
      std::cout<<" Your weight on Mercury is: "<< weight * 0.38 << " lbs \n";
      break;

    case 2:
        std::cout<<" Your weight on Venus is: "<< weight * 0.91 << " lbs \n";
        break;

    case 3:
        std::cout<<" Your weight on Mars is: "<< weight * 0.38 << " lbs \n";
        break;

    case 4:
        std::cout<<" Your weight on Jupiter is: "<< weight * 2.34 << " lbs \n";
        break;

    case 5:
        std::cout<<" Your weight on Saturn is: "<< weight * 1.06 << " lbs \n";
        break;

    case 6: 
        std::cout<<" Your weight on Uranus is: "<< weight * 0.92 << " lbs \n";
        break;

    case 7:
        std::cout<<" Your weight on Neptune is: "<< weight * 1.19 << " lbs \n";
        break;
    }
  
  return 0;
}