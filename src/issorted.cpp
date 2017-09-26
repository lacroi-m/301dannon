#include "main.hpp"

bool    isSorted(std::vector<float> nbrcpy)
{
  int   i;
  int   j;

  i = 0;
  j = i + 1;
  if (nbrcpy.empty())
    return (false);
  while (j < (int)nbrcpy.size())
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
