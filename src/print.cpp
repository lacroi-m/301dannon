//
// print.cpp for  in /home/kopiz/Workplace/301dannon/src
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Wed Sep 20 00:11:43 2017 Tom Jeammet
// Last update Tue Sep 26 13:23:07 2017 ze
//

#include "print.hpp"

void					print_ftab(std::vector<float> tab)
{
  std::vector<float>::iterator		it;

  for (it = tab.begin(); it != tab.end(); it ++)
    std::cout << *it << std::endl;
}

void					print_res(std::vector<int> tab)
{
  std::cout << tab.at(0) << "elements" << std::endl;
  std::cout << "select sort: " << tab.at(1) << " comparisons" << std::endl;
  std::cout << "insertion sort: " << tab.at(2) << " comparisons" << std::endl;
  std::cout << "bubble sort: " << tab.at(3) << " comparisons" << std::endl;
  std::cout << "fusion sort: " << tab.at(4) << " comparisons" << std::endl;
  std::cout << "quicksort: " << tab.at(5) << " comparisons" << std::endl;
}
