/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:19:23 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/06 23:25:30 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include<iostream>

class AMateria;

class ICharacter{
	private:
		std::string name;
	protected:
		static AMateria* inventory[4];
    public:
		ICharacter( std::string aName);
		ICharacter( const ICharacter &aICharacter);
		ICharacter & operator=( const ICharacter &aICharacter );
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};

#endif