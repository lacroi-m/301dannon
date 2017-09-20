//
// selectionSort.cpp for  in /home/ze/school/301dannon
// 
// Made by ze
// Login   <maxime.lacroix@epitech.eu>
// 
// Started on  Tue Sep 19 10:43:15 2017 ze
// Last update Tue Sep 19 16:57:49 2017 ze
//

#include <vector>
#include <iostream>

void	print_vector(std::vector<float> shit)
{
  int	i;
  
  i = -1;
  while (++i < shit.size())
    std::cout << shit[i] << std::endl;
  std::cout << std::endl;
}

bool	isSorted(std::vector<float> nbrcpy)
{
  int	i;
  int	j;
  
  i = 0;
  j = i + 1;
  while (j < nbrcpy.size())
    {
      if (nbrcpy[i] <= nbrcpy[j])
	{
	  i++;
	  j++;
	}
      else
	return (false);
    }
  return (true);
}

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
	      count++;
	      nbrcpy[j] = lowest;
	      nbrcpy[i] = next;
	    }
	  j++;
	}
      i++;
    }
  return (-1);
}

int	main()
{
  std::vector<float>	nbr;

  nbr.push_back(1);
  nbr.push_back(7);
  nbr.push_back(4);
  nbr.push_back(5);
  std::cout << "nbr of recurences: " << selectionSort(nbr) << std::endl;
}
