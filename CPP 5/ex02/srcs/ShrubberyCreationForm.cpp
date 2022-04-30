/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 19:08:55 by root              #+#    #+#             */
/*   Updated: 2022/04/30 21:24:54 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string str) : Form(str, 145, 137)
{
    return;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & f) : Form(f.getName(), f.getGrade_Sign(), f.getGrade_Exec())
{
    return;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & form)
{
    if (this == &form)
        return *this;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
	if (getGrade_Exec() < executor.getGrade())
		GradeTooLowException();
	if (this->get_signed() == false)
		NoSignException();
    this->executeAction();
}

void ShrubberyCreationForm::executeAction(void)
{
    std::string test = this->getName()+"_ShrubberyCreationForm.txt" ;
    std::ofstream newfile( test.c_str() );
    newfile <<"              * *    "<<std::endl;
    newfile <<"           *    *  *"<<std::endl;
    newfile <<"      *  *    *     *  *"<<std::endl;
    newfile <<"     *     *    *  *    *"<<std::endl;
    newfile <<" * *   *    *    *    *   *"<<std::endl;
    newfile <<" *     *  *    * * .#  *   *"<<std::endl;
    newfile <<" *   *     * #.  .# *   *"<<std::endl;
    newfile <<"  *     \"#.  #: #\" * *    *"<<std::endl;
    newfile <<" *   * * \"#. ##\"       *"<<std::endl;
    newfile <<"   *       \"###"<<std::endl;
    newfile <<"             \"##"<<std::endl;
    newfile <<"             ##."<<std::endl;
    newfile <<"              .##:"<<std::endl;
    newfile <<"              :###"<<std::endl;
    newfile <<"              ;###"<<std::endl;
    newfile <<"            ,####."<<std::endl;
    newfile <<"___________.######._________"<<std::endl;
	newfile.close();	
}
