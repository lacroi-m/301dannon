//
// selection_sort.cpp for  in /home/kopiz/Workplace/301dannon/src
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Wed Sep 20 00:33:57 2017 Tom Jeammet
// Last update Fri Sep 29 11:01:43 2017 ze
//

#include "main.hpp"

int	selectionSort(std::vector<float> tab)
{
  int                   i;
  int                   j;      //comparing next a actual
  int                   count;  //count the number of operations

  float                 lowest;
  float                 next;   //tmp cpy for swaping

  std::vector<float>    nbrcpy(tab);

  i = 0;
  count = 0;
  while (i < (int)nbrcpy.size())
    {
      if (isSorted(nbrcpy) == true)
	return (count);
      j = i + 1;
      while (j < (int)nbrcpy.size())
	{
	  lowest = nbrcpy[i];
	  next = nbrcpy[j];
	  if (lowest > next)
	    {
	      nbrcpy[j] = lowest;
	      nbrcpy[i] = next;
	    }
	  count++;
	  j++;
	}
      i++;
    }
  return (count);
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
