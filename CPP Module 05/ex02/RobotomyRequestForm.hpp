/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:59:27 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/12 17:44:35 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "AForm.hpp"

class RobotomyRequestForm : public AForm{
	private:
		std::string target;
	public:
		RobotomyRequestForm ( std::string aTarget );
		RobotomyRequestForm ( const RobotomyRequestForm & aRobotomyRequestForm );
		RobotomyRequestForm & operator= ( const RobotomyRequestForm & aRobotomyRequestForm );
		~RobotomyRequestForm ();
		std::string getTarget() const;
		void		execute(Bureaucrat const & executor) const;
};

#endif