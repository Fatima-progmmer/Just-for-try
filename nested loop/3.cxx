#include <iostream>

int main() 
{
  for (int i = 5; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
        if(i==5)
        std::cout<<"1"<<" ";
        else
      std::cout << j << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}