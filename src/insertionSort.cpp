//
// insertionSort.cpp for  in /home/ze/301dannon/src
// 
// Made by ze
// Login   <maxime.lacroix@epitech.eu>
// 
// Started on  Thu Sep 28 17:52:57 2017 ze
// Last update Sun Oct  1 20:59:14 2017 ze
//

#include "main.hpp"



int     insertionSort(std::vector<float> number)
{
  return (0);
  int			   count = 0;
  std::size_t		   i = 1;
  std::size_t		   j;
  std::vector<float>    nbrcpy(number);
  std::vector<float>    builder;
  float			elem;

  while (i < number.size())
    {
      elem = nbrcpy[i];
      j = i;
      count++;
      while (j > 0 && nbrcpy[j-1] > elem)
	{
	  builder.insert(nbrcpy.begin() + j, nbrcpy[--j]);
	  count++;
	}
      builder.insert(nbrcpy.begin() + j, elem);
      i++;
    }
  return (count);
}

/*int     insertionSort(std::vector<float> number)
{

  size_t                   i;
  size_t                   j;
  bool			   inserted = false;

  std::vector<float>::iterator it = builder.begin();

  i = 0;
  j = 0;



  while (++i < nbrcpy.size())
    {
      while (j < builder.size())
	{
	  if (nbrcpy[i] < builder[j])
	    {
	      builder.insert(builder.begin() + j, nbrcpy[i]);
	      inserted = true;
	      break;
	    }
	  while (nbrcpy[i] > builder[j])
	    {
	      j++;
	      it++;
	    }
	  if (j >= builder.size() || it != builder.end())
	    break;
	  builder.insert(it, nbrcpy[i]);
	  inserted = true;
	}
      j = 0;
      it = builder.begin();
      if (inserted == false)
	builder.push_back(nbrcpy[i]);
      inserted = false;
    }
  std::cout << "last builder = " << std::endl;
  for (std::size_t x=0; x < builder.size(); x++)
    std::cout << builder[x] << std::endl;
  return (0);
}

*/
