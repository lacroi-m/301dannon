//
// bubble_sort.cpp for  in /home/kopiz/Workplace/301dannon/src
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Wed Sep 20 00:40:10 2017 Tom Jeammet
// Last update Wed Sep 20 00:41:41 2017 Tom Jeammet
//

#include "../inc/bubble_sort.hpp"

//Ctor
Bubble::Bubble(int it)
{
  this->set_it(it);
}

//Dtor
Bubble::~Bubble(void)
{

}

//Setter
void                                    Bubble::set_it(int it)
{
  this->_it = it;
}

//Getter
int                                     Bubble::get_it(void)
{
  return (this->_it);
}

//Member
void                                    Bubble::incr_it(void)
{
  this->_it = this->_it + 1;
}

void                                    Bubble::sort(std::vector<float> tab)
{

}
