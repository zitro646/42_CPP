/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:18:03 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/10/14 15:35:32 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "mutantstack.hpp"
# include "mutantstack.ipp"
# include <list>

int main()
{
	/*std::stack<int> test;*/
	{
		MutantStack<int> mstack;
		mstack.push(0);
		mstack.push(1);
		mstack.push(2);
		// std::cout << "mstack begin is " << *mstack.begin() << std::endl;
		std::cout << "Top from " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "Size "<< mstack.size() << std::endl;
		mstack.push(3); mstack.push(4); mstack.push(5); //[...] mstack.push(0);
		
		MutantStack<int>::iterator it = mstack.begin(); 
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << *it << std::endl;
		++it; }
		std::stack<int> s(mstack);
	}
	std::cout << "- - - - - - - - - - - - - - - -" << std::endl;
	{
		std::list<int> mlist;
		mlist.push_back(0);
		mlist.push_back(1);
		mlist.push_back(2);
		// std::cout << "mstack begin is " << *mlist.begin() << std::endl;
		std::cout << "Top from " << mlist.back() << std::endl;
		mlist.pop_back();
		std::cout << "Size "<< mlist.size() << std::endl;
		mlist.push_back(3); mlist.push_back(4); mlist.push_back(5); //[...] mstack.push(0);
		
		std::list<int>::iterator it = mlist.begin(); 
		std::list<int>::iterator ite = mlist.end();
		++it;
		--it;
		while (it != ite) 
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	return 0;
}
