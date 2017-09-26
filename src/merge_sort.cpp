//
// merge_sort.cpp for  in /home/kopiz/Workplace/301dannon/src
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Wed Sep 20 00:43:00 2017 Tom Jeammet
// Last update Tue Sep 26 13:24:07 2017 ze
//

#include <iostream>
#include "print.hpp"
#include "merge_sort.hpp"

//Ctor
Merge::Merge(void)
{
  this->set_it(0);
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

std::vector<float>			Merge::concat_sorting(std::vector<float> l1, std::vector<float> l2)
{
  std::vector<float>			final;
  int					i;
  int					j;

  i = 0;
  j = 0;
  std::cout << "start : " << this->get_it() << std::endl;
  while (i < (int)l1.size())
    {
      this->incr_it();
      if (j < (int)l2.size())
	{
	  if (l1.at(i) < l2.at(j))
	    {
	      final.push_back(l1.at(i));
	      i = i + 1;
	    }
	  else
	    {
	      final.push_back(l2.at(j));
	      j = j + 1;
	    }
	}
      else
	{
	  final.push_back(l1.at(i));
	  i = i + 1;
	}
    }
  while (j < (int)l2.size())
    {
      final.push_back(l2.at(j));
      j = j + 1;
    }
  return (final);
}

std::vector<float>			Merge::sort(std::vector<float> tab)
{
  std::vector<float>			list1;
  std::vector<float>			list2;
  std::vector<float>			final;
  int					i;

  i = 0;
  if ((int)tab.size() > 1)
    {
      while (i < (int)tab.size() / 2)
	{
	  list1.push_back(tab.at(i));
	  i = i + 1;
	}
      while (i < (int)tab.size())
	{
	  list2.push_back(tab.at(i));
	  i = i + 1;
	}
      list1 = this->sort(list1);
      list2 = this->sort(list2);
      final = concat_sorting(list1, list2);
      return (final);
    }
  else
    return (tab);
}
