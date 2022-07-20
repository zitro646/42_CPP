/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 19:08:55 by root              #+#    #+#             */
/*   Updated: 2022/07/20 19:15:17 by mortiz-d         ###   ########.fr       */
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
		throw Form::GradeTooLowException();
	if (this->get_signed() == false)
		throw Form::NoSignException();
    
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
    std::cout << "File -> "<< test << " created suscefully check the directory" << std::endl;	
}
