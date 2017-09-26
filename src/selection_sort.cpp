//
// selection_sort.cpp for  in /home/kopiz/Workplace/301dannon/src
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Wed Sep 20 00:33:57 2017 Tom Jeammet
// Last update Tue Sep 26 09:59:05 2017 ze
//

#include "../inc/selection_sort.hpp"

//Ctor
Selection::Selection(void)
{
  this->set_it(0);
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
/*
std::vector<float>			Selection::sort(std::vector<float> tab)
{
  float					pivot;
  int					pos_pivot;
  int					i;
  int					j;

  i = 0;
  while (i < tab.size())
    {
      j = i + 1;
      pivot = tab.at(i);
      pos_pivot = i;      
      while (j < tab.size() - 1)
	{
	  this->incr_it();
	  if (tab.at(j) < pivot)
	    {
	      pivot = tab.at(j);
	      pos_pivot = j;
	    }
	  j = j + 1;
	}
      if (pivot != tab.at(i))
	{
	  tab.at(j) = tab.at(i);
	  tab.at(i) = pivot;
	}
      i = i + 1;
    }
  return (tab);
}
*/
