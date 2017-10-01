//
// bubble_sort.cpp for  in /home/kopiz/Workplace/301dannon/src
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Wed Sep 20 00:40:10 2017 Tom Jeammet
// Last update Sun Oct  1 21:00:31 2017 ze
//

#include "main.hpp"

int                                     bubbleSort(std::vector<float> tab)
{
  float                                 tmp;
  int                                   count;
  int                                   i;
  int                                   j;

  count = 0;
  j = tab.size() - 1;
  while (j > 0)
    {
      i = 0;
      while (i < j)
	{
	  count = count + 1;
	  if (tab.at(i) > tab.at(i + 1))
	    {
	      tmp = tab.at(i);
	      tab.at(i) = tab.at(i + 1);
	      tab.at(i + 1) = tmp;
	    }
	  i = i + 1;
	}
      j = j - 1;
    }
  return (count);
}
