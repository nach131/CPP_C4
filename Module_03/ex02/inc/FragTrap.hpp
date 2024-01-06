/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 20:40:43 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/06 00:57:34 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
public:
	FragTrap();
	FragTrap(std::string);
	FragTrap(const FragTrap &);
	~FragTrap();

	FragTrap &operator=(const FragTrap &);

	void highFivesGuys();
};
