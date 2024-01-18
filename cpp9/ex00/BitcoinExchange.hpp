/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <gcherqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:20:39 by gcherqui          #+#    #+#             */
/*   Updated: 2024/01/16 15:20:40 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <map>
# include <vector>

class BitcoinExchange
{
	private:
		std::map<std::string, float> _data;
		
	public:
		BitcoinExchange( void );
		BitcoinExchange( BitcoinExchange const &copy );
		BitcoinExchange	&operator=( BitcoinExchange const &rhs );
		~BitcoinExchange( void );

		std::map<std::string, float>	getData( void );
		void							setData( std::string key, float value );
		std::vector<std::string>		split( std::string line );
		void							readInput( std::string path );

		class cantOpenDataException: public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return ("Error: Couldn't open data.csv file");
				}
		};

		class cantOpenInputException: public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return ("Error: Couldn't open input file");
				}
		};

};


#endif
