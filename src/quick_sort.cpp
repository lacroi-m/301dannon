//
// quick_sort.cpp for  in /home/kopiz/Workplace/301dannon/src
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Wed Sep 20 00:41:56 2017 Tom Jeammet
// Last update Tue Sep 26 13:24:17 2017 ze
//

#include "quick_sort.hpp"

//Ctor
Quick::Quick(void)
{
  this->set_it(0);
}

//Dtor
Quick::~Quick(void)
{

}

//Setter
void                                    Quick::set_it(int it)
{
  this->_it = it;
}

//Getter
int                                     Quick::get_it(void)
{
  return (this->_it);
}

//Member
void                                    Quick::incr_it(void)
{
  this->_it = this->_it + 1;
}

std::vector<float>			Quick::sort(std::vector<float> tab)
{
  return (tab);
}
