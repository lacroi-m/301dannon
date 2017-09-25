//
// insertion_sort.cpp for  in /home/kopiz/Workplace/301dannon/src
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Wed Sep 20 00:38:35 2017 Tom Jeammet
// Last update Mon Sep 25 13:58:37 2017 Tom Jeammet
//

#include "../inc/insertion_sort.hpp"

//Ctor
Insertion::Insertion(void)
{
  this->set_it(0);
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

std::vector<float>			Insertion::sort(std::vector<float> tab)
{
  return (tab);
}
