/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:59:30 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/29 23:28:49 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"FragTrap.hpp"
# include"ClapTrap.hpp"
# include"ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
	private:
		std::string name;
	public:
		DiamondTrap();
		DiamondTrap( const DiamondTrap &aDiamondTrap );
		DiamondTrap( const std::string &aName );
		~DiamondTrap();
		DiamondTrap & operator= ( const DiamondTrap &aDiamondTrap );
		using ScavTrap::attack;
		void whoAmI();
};