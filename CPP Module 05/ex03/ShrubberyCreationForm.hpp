/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:59:27 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/14 17:30:21 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "AForm.hpp"


class ShrubberyCreationForm : public AForm {
	private:
		std::string target;
	public:
		ShrubberyCreationForm ( std::string aTarget );
		ShrubberyCreationForm ( const ShrubberyCreationForm & aShrubberyCreationForm );
		ShrubberyCreationForm & operator= ( const ShrubberyCreationForm & aShrubberyCreationForm );
		~ShrubberyCreationForm ();
		std::string	getTarget() const;
		bool		execute(Bureaucrat const & executor) const;
};

#endif