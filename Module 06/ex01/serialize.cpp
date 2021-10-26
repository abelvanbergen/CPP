/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   serialize.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/05 11:02:23 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/05/12 09:56:57 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <time.h>

const char* alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

struct Data
{
	std::string	str1;
	int			num;
	std::string	str2;
};

void	printData(Data* data, const std::string& msg)
{
	std::cout << msg << std::endl;
	std::cout << data->str1 << std::endl;
	std::cout << data->num << std::endl;
	std::cout << data->str2 << std::endl << std::endl;
}

void* serialize(void)
{
	Data	*seq_bytes = new Data;

	for (int i = 0; i < 10; i++)
		seq_bytes->str1 += alpha[rand() % 52];
	seq_bytes->num = rand();
	for (int i = 0; i < 10; i++)
		seq_bytes->str2 += alpha[rand() % 52];
	printData(seq_bytes, "Random data -------------");
	return (seq_bytes);
}

Data*	deserialize(void* raw)
{
	Data *ret = reinterpret_cast<Data*>(raw);
	return (ret);
}


int main(void)
{
	srand(time(NULL));
	void *random = serialize();

	Data *data = deserialize(random);
	printData(data, "deserialized data -------");
	delete data;
	system("leaks serialize | grep 'leaks for'");
	return 0;
}
