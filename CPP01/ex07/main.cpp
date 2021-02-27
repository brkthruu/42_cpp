#include <iostream>
#include <string>
#include <fstream>

int		main(int argc, char **argv)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		file;
	std::string		line;
	std::string		s1;
	std::string		s2;
	std::string::size_type pos;

	if (argc !=4)
	{
		std::cout<<"Error : wrong argument\n";
		return (-1);
	}
	file = argv[1];
	s1=argv[2];
	s2=argv[3];
	ifs.open(file);
	file += ".replace";
	ofs.open(file);
	if (!ifs.is_open() || !ofs.is_open())
	{
		std::cout<<"Error : wrong file name\n";
		return (-1);
	}
	while (getline(ifs, line))
	{
		while (true)
		{
			pos = line.find(s1);
			if (pos == std::string::npos)
				break ;
			line.replace(pos, s1.length(), s2);
		}
		ofs<<line;
		if (!ifs.eof())
			ofs<<'\n';
	}
	ifs.close();
	ofs.close();
	return (0);
}
