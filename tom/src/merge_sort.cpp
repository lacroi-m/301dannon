//
// merge_sort.cpp for  in /home/kopiz/Workplace/301dannon/src
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Wed Sep 20 00:43:00 2017 Tom Jeammet
// Last update Wed Sep 20 00:43:53 2017 Tom Jeammet
//

#include "../inc/merge_sort.hpp"

//Ctor
Merge::Merge(int it)
{
  this->set_it(it);
}

//Dtor
Merge::~Merge(void)
{

}

//Setter
void                                    Merge::set_it(int it)
{
  this->_it = it;
}

//Getter
int                                     Merge::get_it(void)
{
  return (this->_it);
}

//Member
void                                    Merge::incr_it(void)
{
  this->_it = this->_it + 1;
}

void                                    Merge::sort(std::vector<float> tab)
{

}
