#include <iostream>
#include <fstream>
#include <string>

std::string ft_replace(const std::string &content, const std::string &s1, const std::string &s2)
{
	std::string newfile;
	size_t pos = 0;
	size_t found = 0;

	while ((found = content.find(s1, pos)) != std::string::npos)
	{
		newfile.append(content, pos, found - pos);

		newfile.append(s2);

		pos = found + s1.length();
	}
	newfile.append(content, pos, std::string::npos);

	return (newfile);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error: invalid number of arguments" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream inputFile(filename);
	if (!inputFile.is_open())
	{
		std::cerr << "Error: file" << filename << " could not be open" << std::endl;
		return (1);
	}
	std::string content((std::istreambuf_iterator<char>(inputFile)),
				std::istreambuf_iterator<char>());
	inputFile.close(); 
	std::string result = ft_replace(content, s1, s2);

	std::ofstream outputFile(filename + ".replace");
	if (!outputFile.is_open())
	{
		std::cerr << "Error: file" << filename + ".replace" << "could not be created" << std::endl;
		return (1);
	}

	outputFile << result;
	outputFile.close();

	return (0);
}