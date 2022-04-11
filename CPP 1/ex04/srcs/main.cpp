/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:47:35 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/11 17:21:50 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>

std::string	wololostr(std::string str, std::string s1, std::string s2)
{
	std::size_t	found;
	
	found = str.find(s1);
	while (found!=std::string::npos)
	{
		str.erase(found,s1.length());
		str.insert(found,s2);
		found = str.find(s1);
	}
	return (str);
}

void	read_file(std::string dir, std::string s1, std::string s2)
{
	std::string line;
	std::string final_str = "";
	std::ifstream oldfile(dir);
	
	if (oldfile.is_open())
	{
		std::ofstream newfile(dir + ".replace");
		while ( getline (oldfile,line) )
    	{
			final_str += wololostr(line, s1, s2) +"\n";
    	}
		final_str.pop_back();
		newfile << final_str;
		newfile.close();
    	oldfile.close();
  	}
	else 
		std::cout << "Unable to open file"<<std::endl; 
}

int	check_argv_wrong(int argc, char **argv)
{
	int i;
	std::string s1, s2 ;
	
	i = 0;
	if (argc != 4)
		return (1);
	while (i < argc)
	{
		if (argv[i++][0] == '\0')
			return (1);
	}
	s1 = argv[2];
	s2 = argv[3];
	if (s1 == s2)
		return (1);
	return (0);

}

int main (int argc, char **argv)
{
	if (!check_argv_wrong(argc, argv))
		read_file(argv[1], argv[2], argv[3]);
	else
		std::cout<<"Argv are not okay"<<std::endl;

	
}