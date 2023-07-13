/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Charactar.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 01:11:07 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/13 20:59:52 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTAR_HPP
# define CHARACTAR_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter{
	private:
		std::string name;
		AMateria *inventory[4];
	public:
		Character();
		Character( std::string const & aName );
		Character( const Character &aCharactar );
		~Character();
		Character & operator= ( const Character &aCharactar );
		std::string const & getName() const;
		void equip( AMateria* m );
		void unequip( int idx );
		void use( int idx, ICharacter& target );
};

#endif