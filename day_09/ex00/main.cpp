/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 00:36:23 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/20 03:07:15 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

bool isLeapYear(int year)
{
	return ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)));
}

std::vector<std::string> split(std::string s, char delim)
{
	std::stringstream ss(s);
	std::vector<std::string> strs;
	std::string cur;
	while (std::getline(ss, cur, delim)) strs.push_back(cur);
	return strs;
}

std::string trim(std::string s)
{
	std::stringstream ss(s);
	std::vector<std::string> strs;
	std::string x;
	while (ss >> x && strs.size() <= 1) strs.push_back(x);
	if (strs.size() > 1) return std::string();
	return x;
}

int to_number(std::string s)
{
	std::string x = trim(s);
	//
	if (x.empty()) return (-1);
	//
	int value = 0;
	for (size_t i = 0; i < x.size(); i++)
	{
		if (!(std::isdigit(x[i]))) return (-1);
		value = value * 10 + (x[i] - '0');
		if (value > 1e8) return (-1);
	}
	return value;
}

bool isValidDate(int y, int m, int d)
{
	std::time_t	currentTime = std::time(NULL);
	std::tm*	currentLocalTime = std::localtime(&currentTime);
	//
	int local_year = currentLocalTime->tm_year + 1900;
	int local_month = currentLocalTime->tm_mon + 1;
	int local_day = currentLocalTime->tm_mday;
	//
	if (y > local_year) return (false);
	else if (y == local_year)
	{
		if (m > local_month) return (false);
		else if ((m == local_month) && (d > local_day)) return (false);
	}
	//
	if (m < 1 || m > 12) return (false);
	if (d < 1 || d > month_days[m - 1]) return (false);
	if (!isLeapYear(y) && m == 2 && d == 29) return (false);
	//
	return true;
}

std::vector< std::vector<double> >
read_data(std::string file_path = DATABASE_PATH, char delim = ',')
{
	std::vector< std::vector<double> > data;
	std::ifstream fin (file_path.c_str());
	//
	if (fin.fail()) throw ErrorExp(file_path + " " + read_data_err[3]);
	//
	std::string line;
	std::getline(fin, line); // skip the header line
	//
	while (std::getline(fin, line))
	{
		data.push_back(std::vector<double>(5, 0));
		//
		std::vector<std::string> line_parts = split(line, delim);
		//
		if (line_parts.size() != 2)
		{
			data.back()[4] = 4;
			continue;
		}
		//
		std::vector<std::string> date_parts = split(line_parts.front(), '-');
		if (date_parts.size() != 3)
		{
			data.back()[4] = 4;
			continue;
		}
		//
		bool valid_date = true;
		for (size_t i = 0; i < 3; i++)
		{
			data.back()[i] = to_number(date_parts[i]);
			if (data.back()[i] == -1)
			{
				valid_date &= false;
				break;
			}
		}
		if (!valid_date || !isValidDate(data.back()[0], data.back()[1], data.back()[2]))
		{
			data.back()[4] = 1;
			continue;
		}
		//
		std::string exchange_rate = trim(line_parts[1]);
		if (exchange_rate.empty())
		{
			data.back()[4] = 2;
			continue;
		}
		bool valid_exrate = true, dot = false;
		for (size_t i = 0; i < exchange_rate.size(); i++)
		{
			if (!std::isdigit(exchange_rate[i]) && !(!dot && exchange_rate[i] == '.'))
			{
				valid_exrate &= false;
				break;
			}
			dot |= (exchange_rate[i] == '.');
		}
		if (!valid_exrate || (dot && exchange_rate.size() == 1))
		{
			data.back()[4] = 2;
			continue;
		}
		std::stringstream ss(exchange_rate);
		ss >> data.back()[3];
		//
		if (data.back()[3] < 0 || data.back()[3] > 1000)
		{
			data.back()[4] = 2;
			continue;
		}
	}
	//
	fin.close();
	return (data);
}

int main(int ac, char **av)
{
	//
	if (ac != 2)
	{
		std::cout << "Error::BAD Arguments." << std::endl;
		return (0);
	}
	//
	std::vector< std::vector<double> > db;
	//
	try
	{
		db = read_data();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (0);
	}
	//
	for (size_t i = 0; i < db.size(); i++)
	{
		if (db[i].back())
		{
			std::cout << "Data-Base-Error: " << read_data_err[static_cast<int>(db[i].back())] << std::endl;
			return (0);
		}
		//
		db[i].pop_back(); // remove the err element.
	}
	std::sort(db.begin(), db.end()); // db are sorted by default but just for security reason>~
	//
	std::vector< std::vector<double> > querys;
	//
	try
	{
		querys = read_data(std::string(av[1]), '|');
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
		return (0);
	}
	// Iterate over the input querys.
	for (size_t i = 0; i < querys.size(); i++)
	{
		std::cout << "Query [" << i+1 << "]:  ";
		//
		if (querys[i].back() != 0)
		{
			std::cout << "Error: " << read_data_err[static_cast<size_t>(querys[i].back())];
		}
		else
		{
			querys[i].pop_back(); // remove the err element.
			//
			double ans = -1, cur_exchange_rate = querys[i].back();
			//
			querys[i].pop_back(); // remove the exchange rate element
			//
			int left = 0, right = db.size() - 1, mid;
			//
			while (left <= right)
			{
				mid = left + (right - left) / 2;
				//
				double cx = db[mid].back(); // pop the exchange rate
				db[mid].pop_back();
				//
				if (db[mid] <= querys[i]) // compare the dates
				{
					ans = cx;
					left = mid + 1;
				}
				else right = mid - 1;
				//
				db[mid].push_back(cx);
			}
			//
			if (ans == -1)
			{
				std::cout << "Error: " << read_data_err[5];
			}
			else
			{
				for (size_t j = 0; j < 3; j++) std::cout << std::setw(2) << std::setfill('0') << querys[i][j] << "- "[j+1 == 3];
				std::cout << "=> " << cur_exchange_rate * ans;
			}
		}
		//
		std::cout << std::endl;
	}
	return (0);
}
