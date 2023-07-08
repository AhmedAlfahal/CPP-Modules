/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 22:55:22 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/09 01:41:35 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP 
# define AMATERIA_HPP

#include <iostream>
class ICharacter;

class AMateria{
	protected:
		std::string type;
	public:
		AMateria();
		AMateria( const AMateria &aAMateria );
		AMateria( std::string const & type );
		virtual ~AMateria();
		AMateria & operator= ( const AMateria &aAMateria );
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use( ICharacter& target );
};

#endif