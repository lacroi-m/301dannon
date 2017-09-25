//
// selectionSort.cpp for  in /home/ze/school/301dannon
// 
// Made by ze
// Login   <maxime.lacroix@epitech.eu>
// 
// Started on  Tue Sep 19 10:43:15 2017 ze
// Last update Mon Sep 25 17:27:51 2017 ze
//

#include <vector>
#include <iostream>

void	print_vector(std::vector<float> shit)
{
  int	i;

  for (std::vector<float>::iterator it = shit.begin() ; it != shit.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << std::endl;
}

bool	isSorted(std::vector<float> nbrcpy)
{
  int	i;
  int	j;
  
  i = 0;
  j = i + 1;
  if (nbrcpy.empty())
    return (false);
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

std::vector<float>	insertit(std::vector<float> builder, float number)
{
  std::vector<float>	added;
  std::vector<float>::iterator it;
  int	i;
    
  i = 0;
  it = builder.begin();
  if ((int)builder.size() == 0)
    {
      builder.push_back(number);
      return (builder);
    }
  while (i < builder.size())
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
int	insertionSort(std::vector<float> number)
{
  int			i;
  int			counter;
  float			lowest;
  float			next;	//tmp cpy for swaping
  
  std::vector<float>	nbrcpy(number);

  std::vector<float>	builder;
  i = 0;
  counter = 0;

  while (i < nbrcpy.size())
    builder = insertit(builder, nbrcpy[i++]);  
  if (isSorted(builder) == true)
    return (counter);
  return (-1);
}

int     selectionSort(std::vector<float> number);
int	main()
{
  std::vector<float>	nbr;
  std::vector<float>	nbr2;

  nbr.push_back(3.3);
  nbr.push_back(5);
  nbr.push_back(9.89);
  nbr.push_back(-6);

  nbr2.push_back(5);
  nbr2.push_back(3);
  nbr2.push_back(9.09);
  nbr2.push_back(-6);
  nbr2.push_back(5.01);
  
  std::cout << "for this list:";
  print_vector(nbr);
  std::cout << "nbr of recurences selctionSort: " << selectionSort(nbr) << std::endl;
  std::cout << "nbr of recurences insrtionSort: " << insertionSort(nbr) << std::endl;
  std::cout << "for this list:";
  print_vector(nbr2);
  std::cout << std::endl;
  std::cout << "nbr of recurences selctionSort: " << selectionSort(nbr2) << std::endl;
  std::cout << "nbr of recurences insrtionSort: " << insertionSort(nbr2) << std::endl;
  return (0);
}
