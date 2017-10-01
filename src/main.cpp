//
// main.cpp for  in /home/ze/301dannon
// 
// Made by ze
// Login   <maxime.lacroix@epitech.eu>
// 
// Started on  Sun Oct  1 00:51:02 2017 ze
// Last update Sun Oct  1 03:55:58 2017 ze
//

#include "main.hpp"

bool isNbr(std::string s)
{
  int i = 0;
  std::string::const_iterator it_c = s.begin();
  while (it_c != s.end())
    {
      if (std::isdigit(*it_c) || *it_c == '.' || *it_c == '-')
	{
	  if (*it_c == '.' || *it_c == '-')
	    i++;
	  ++it_c;
	}
      else
	throw (Err("Send me numbers, nothing else"));
    }
  if (i > 1)
    throw (Err("Numbers cant have more than one \"-\" or \".\""));
  return (true);
}

std::vector<float>			get_nbs(char **av)
{
  std::vector<std::string>::iterator	it;
  std::vector<std::string>		nbs;
  std::vector<float>			tab;
  std::ifstream				ifs;
  std::string				line;
  std::string				tmp2;

  ifs.open(av[1]);
  std::getline(ifs, line);
  ifs.close();
  
  std::stringstream                     ss(line);
  std::string                           tmp;
  const char				*tmp3;
  
  while (std::getline(ss, tmp, ' '))
    {
      if ((tmp.compare("")) != 0)
	nbs.push_back(tmp);
    }
  for (it = nbs.begin(); it != nbs.end(); it++)
    {
      tmp2 = *it;
      tmp3 = tmp2.c_str();
      if (isNbr(tmp2) == true)
	tab.push_back((float)atof(tmp3));
    }
  return (tab);
}

void					check_args(int ac, char **av)
{
  std::ifstream				ifs;

  if (ac != 2)
    throw (Err("Wrong number of arguments"));
  else
    {
      ifs.open(av[1]);
      if (!ifs.is_open())
	{
	  ifs.close();
	  throw (Err("No such file"));
	}
      ifs.close();
    }
}

void			sortings(std::vector<float> list)
{
  if (list.size() <= 0)
    throw(Err("Empty list"));
  std::cout << list.size() << " elements" << std::endl;
  std::cout << "select sort:\t" << selectionSort(list) << std::endl;
  std::cout << "insertion sort:\t" << insertionSort(list) << std::endl;
  std::cout << "bubble sort:\t" << bubbleSort(list) << std::endl;
  std::cout << "fusion sort:\t" << fusionSort(list) << std::endl;
  std::cout << "quicksort:\t" << quickSort(list) << std::endl;
}

int					main(int ac, char **av)
{
  std::vector<float>		list;
  std::vector<int>			res;

  try
    {
      check_args(ac, av);
      list = get_nbs(av);
      sortings(list);
    }
  catch (Err &err)
    {
      err.print_msg();
      return (84);
    }
  return (0);
}
