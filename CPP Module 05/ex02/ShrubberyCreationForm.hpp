/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:59:27 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/12 17:44:28 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm{
	private:
		std::string target;
	public:
		ShrubberyCreationForm ( std::string aTarget );
		ShrubberyCreationForm ( const ShrubberyCreationForm & aShrubberyCreationForm );
		ShrubberyCreationForm & operator= ( const ShrubberyCreationForm & aShrubberyCreationForm );
		~ShrubberyCreationForm ();
		std::string	getTarget() const;
		void		execute(Bureaucrat const & executor) const;
};

#endif