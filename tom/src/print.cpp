//
// print.cpp for  in /home/kopiz/Workplace/301dannon/src
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Wed Sep 20 00:11:43 2017 Tom Jeammet
// Last update Wed Sep 20 00:15:44 2017 Tom Jeammet
//

#include "../inc/print.hpp"

void					print_ftab(std::vector<float> tab)
{
  std::vector<float>::iterator		it;

  for (it = tab.begin(); it != tab.end(); it ++)
    std::cout << *it << std::endl;
}
