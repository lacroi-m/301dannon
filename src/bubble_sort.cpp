//
// bubble_sort.cpp for  in /home/kopiz/Workplace/301dannon/src
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Wed Sep 20 00:40:10 2017 Tom Jeammet
// Last update Tue Sep 26 13:22:36 2017 ze
//

#include "bubble_sort.hpp"

//Ctor
Bubble::Bubble(void)
{
  this->set_it(0);
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

std::vector<float>			Bubble::sort(std::vector<float> tab)
{
  float					tmp;
  int					i;
  int					j;

  i = 0;
  while (i < (int)tab.size())
    {
      j = 0;
      while (j < (int)tab.size() - 1)
	{
	  this->incr_it();
	  if (tab.at(j) > tab.at(j + 1))
	    {
	      tmp = tab.at(j);
	      tab.at(j) = tab.at(j + 1);
	      tab.at(j + 1) = tmp;
	    }
	  j = j + 1;
	}
      i = i + 1;
    }
  return (tab);
}
