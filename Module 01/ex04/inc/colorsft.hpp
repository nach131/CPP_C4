/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colorsft.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 23:03:39 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/24 00:10:11 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLORS_H
#define COLORS_H

typedef enum e_error
{
	DANGER,
	WARNING,
	INFO,
	SUCCESS
} t_error;

#define RESET "\x1B[0m"

// # Regular Colors
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\x1B[38;2;47;82;191m"
#define MAGENTA "\033[0;35m"
#define CYAN "\033[0;36m"
#define ORANGE "\033[1;31m"
#define WHITE "\033[0;37m"
#define BLACK "\x1B[30m"

#define ERROR "\x1B[41m\x1B[1m\x1B[37m"
#define OK "\x1B[44m\x1B[1;97m"

void ft_message(int err, std::string msg);

#endif
