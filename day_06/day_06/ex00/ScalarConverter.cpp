/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 23:54:22 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/11 01:15:51 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	(void)other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	(void)other;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
}

void ScalarConverter::convert_to_char(const std::string &to_convert)
{
	int		int_value;
	bool	can = true;

	std::cout << "char: ";
	//
	try
	{
		int_value = std::stoi(to_convert);
		//
		if (int_value < 0 || int_value > 255) can = false;
		else if (!std::isprint(int_value))
		{
			std::cout << "Non displayable" << std::endl;
			return ;
		}
	}
	catch(...)
	{
		can = false;
	}
	//
	if (!can) std::cout << "impossible";
	else std::cout << "'" << (char)int_value << "'";
	//
	std::cout << std::endl;
}

void ScalarConverter::convert_to_int(const std::string &to_convert)
{
	int int_value;

	std::cout << "int: ";
	//
	try
	{
		int_value = std::stoi(to_convert);
		std::cout << int_value;
	}
	catch(...)
	{
		std::cout << "impossible";
	}
	//
	std::cout << std::endl;
}

void ScalarConverter::convert_to_float(const std::string &to_convert)
{
	float float_value;

	std::cout << "float: ";
	//
	try
	{
		float_value = std::stof(to_convert);
		std::cout <<  float_value << "f";
	}
	catch(...)
	{
		std::cout << "impossible";
	}
	//
	std::cout << std::endl;
}

void ScalarConverter::convert_to_double(const std::string &to_convert)
{
	double double_value;

	std::cout << "double: ";
	//
	try
	{
		double_value = std::stod(to_convert);
		std::cout << double_value;
	}
	catch(...)
	{
		std::cout << "impossible";
	}
	//
	std::cout << std::endl;
}

void ScalarConverter::convert(std::string to_convert)
{
	if ((to_convert.size() == 3)
		&& to_convert[0] == to_convert[2]
		&& to_convert[0] == '\'')
	{
		to_convert = std::to_string((int)to_convert[1]);
	}
	ScalarConverter::convert_to_char(to_convert);
	ScalarConverter::convert_to_int(to_convert);
	ScalarConverter::convert_to_float(to_convert);
	ScalarConverter::convert_to_double(to_convert);
	//
}
