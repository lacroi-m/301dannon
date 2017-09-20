//
// quick_sort.cpp for  in /home/kopiz/Workplace/301dannon/src
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Wed Sep 20 00:41:56 2017 Tom Jeammet
// Last update Wed Sep 20 00:42:46 2017 Tom Jeammet
//

#include "../inc/selection_sort.hpp"

//Ctor
Quick::Quick(int it)
{
  this->set_it(it);
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

void                                    Quick::sort(std::vector<float> tab)
{

}
