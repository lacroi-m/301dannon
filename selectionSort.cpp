//
// selectionSort.cpp for  in /home/ze/school/301dannon
// 
// Made by ze
// Login   <maxime.lacroix@epitech.eu>
// 
// Started on  Tue Sep 19 18:27:28 2017 ze
// Last update Mon Sep 25 18:24:35 2017 ze
//

#include <vector>
#include <iostream>

bool    isSorted(std::vector<float> nbrcpy);

int	selectionSort(std::vector<float> number)
{
  int			i;
  int			j;	//comparing next a actual
  int			count;  //count the number of operations
  
  float			lowest;
  float			next;	//tmp cpy for swaping
  
  std::vector<float>	nbrcpy(number);
  
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
  return (-1);
}
