/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 23:47:47 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/11 00:52:44 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER
# define SCALARCONVERTER

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>
# include <limits>

class ScalarConverter
{
private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &other);
	ScalarConverter &operator=(const ScalarConverter &other);
	~ScalarConverter();

	static void convert_to_char(const std::string &to_convert);
	static void convert_to_int(const std::string &to_convert);
	static void convert_to_float(const std::string &to_convert);
	static void convert_to_double(const std::string &to_convert);

public:
	static void convert(std::string to_convert);
};

#endif
