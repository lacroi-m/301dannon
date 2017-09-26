//
// insertion_sort.cpp for  in /home/kopiz/Workplace/301dannon/src
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Wed Sep 20 00:38:35 2017 Tom Jeammet
// Last update Tue Sep 26 13:44:50 2017 ze
//

#include "insertion_sort.hpp"
#include "main.hpp"
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

/*
std::vector<float>      insertit(std::vector<float> builder, float number)
{
  std::vector<float>    added;
  std::vector<float>::iterator it;
  int   i;

  i = 0;
  it = builder.begin();
  if ((int)builder.size() == 0)
    {
      builder.push_back(number);
      return (builder);
    }
  while (i < (int)builder.size())
    {
      if (number > builder[i])
	{
	  i++;
	  it++;
	}
      else
	{
	  builder.insert(it, number);
	  return (builder);
	}
    }
  return (builder);
}
*/
int     insertionSort(std::vector<float> number)
{
  int                   i;
  int                   counter;

  std::vector<float>    nbrcpy(number);

  std::vector<float>    builder;
  i = 0;
  counter = 0;

  while (i < (int)nbrcpy.size())
    builder = insertit(builder, nbrcpy[i++]);
  if (isSorted(builder) == true)
    return (counter);
  return (-1);
}
