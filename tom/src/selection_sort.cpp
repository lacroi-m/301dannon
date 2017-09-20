//
// selection_sort.cpp for  in /home/kopiz/Workplace/301dannon/src
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Wed Sep 20 00:33:57 2017 Tom Jeammet
// Last update Wed Sep 20 00:41:05 2017 Tom Jeammet
//

#include "../inc/selection_sort.hpp"

//Ctor
Selection::Selection(int it)
{
  this->set_it(it);
}

//Dtor
Selection::~Selection(void)
{

}

//Setter
void					Selection::set_it(int it)
{
  this->_it = it;
}

//Getter
int					Selection::get_it(void)
{
  return (this->_it);
}

//Member
void                                    Selection::incr_it(void)
{
  this->_it = this->_it + 1;
}

void					Selection::sort(std::vector<float> tab)
{
  
}
