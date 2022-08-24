/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:18:03 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/08/24 13:15:14 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "mutantstack.hpp"
# include "mutantstack.ipp"

int main()
{
	/*std::stack<int> test;*/
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3); mstack.push(5); mstack.push(737); //[...] mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin(); 
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << *it << std::endl;
		++it; }
		std::stack<int> s(mstack);
	}
	return 0;
}