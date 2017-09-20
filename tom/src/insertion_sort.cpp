//
// insertion_sort.cpp for  in /home/kopiz/Workplace/301dannon/src
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Wed Sep 20 00:38:35 2017 Tom Jeammet
// Last update Wed Sep 20 00:40:56 2017 Tom Jeammet
//

#include "../inc/insertion_sort.hpp"

//Ctor
Insertion::Insertion(int it)
{
  this->set_it(it);
}

//Dtor
Insertion::~Insertion(void)
{

}

//Setter
void					Insertion::set_it(int it)
{
  this->_it = it;
}

//Getter
int                                     Insertion::get_it(void)
{
  return (this->_it);
}

//Member
void                                    Insertion::incr_it(void)
{
  this->_it = this->_it + 1;
}

void                                    Insertion::sort(std::vector<float> tab)
{

}
