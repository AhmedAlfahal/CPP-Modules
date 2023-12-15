/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:59:27 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/14 17:30:27 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm {
	private:
		std::string target;
	public:
		PresidentialPardonForm ( std::string aTarget );
		PresidentialPardonForm ( const PresidentialPardonForm & aPresidentialPardonForm );
		PresidentialPardonForm & operator= ( const PresidentialPardonForm & aPresidentialPardonForm );
		~PresidentialPardonForm ();
		std::string getTarget() const;
		bool		execute(Bureaucrat const & executor) const;
};

#endif