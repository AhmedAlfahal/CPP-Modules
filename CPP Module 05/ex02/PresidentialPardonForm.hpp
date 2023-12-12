/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:59:27 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/12 17:51:30 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "AForm.hpp"

class PresidentialPardonForm : public AForm{
	private:
		std::string target;
	public:
		PresidentialPardonForm ( std::string aTarget );
		PresidentialPardonForm ( const PresidentialPardonForm & aPresidentialPardonForm );
		PresidentialPardonForm & operator= ( const PresidentialPardonForm & aPresidentialPardonForm );
		~PresidentialPardonForm ();
		std::string getTarget() const;
		void		execute(Bureaucrat const & executor) const;
};

#endif