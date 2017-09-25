//
// merge_sort.cpp for  in /home/kopiz/Workplace/301dannon/src
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Wed Sep 20 00:43:00 2017 Tom Jeammet
// Last update Mon Sep 25 14:09:32 2017 Tom Jeammet
//

#include <iostream>
#include "../inc/print.hpp"
#include "../inc/merge_sort.hpp"

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
  while (i < l1.size())
    {
      this->incr_it();
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
  if (j < l2.size())
    final.push_back(l2.at(i));
  return (final);
}

std::vector<float>			Merge::sort(std::vector<float> tab)
{
  std::vector<float>			list1;
  std::vector<float>			list2;
  std::vector<float>			final;
  int					i;

  i = 0;
  if (tab.size() > 1)
    {
      std::cout << "first : " << std::endl;
      while (i < tab.size() / 2)
	{
	  std::cout << tab.at(i) << std::endl;
	  list1.push_back(tab.at(i));
	  i = i + 1;
	}
      std::cout << std::endl;
      std::cout << "second : " << std::endl;
      while (i < tab.size())
	{
	  std::cout << tab.at(i) << std::endl;
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
