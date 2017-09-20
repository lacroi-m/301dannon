//
// main.cpp for  in /home/kopiz/Workplace/301dannon/src
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Tue Sep 19 16:26:44 2017 Tom Jeammet
// Last update Wed Sep 20 00:18:44 2017 Tom Jeammet
//

#include "../inc/main.hpp"

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

int					main(int ac, char **av)
{
  std::vector<float>			list;

  try
    {
      check_args(ac, av);
      list = get_nbs(av);
      //print_ftab(list);
    }
  catch (Err &err)
    {
      err.print_msg();
      exit(84);
    }
  return (0);
}
