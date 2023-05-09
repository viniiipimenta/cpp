#include <iostream>
#include <fstream>

int main (int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Wrong input" << std::endl;
        return 0;
    }

    std::ifstream   file(argv[1]);
    std::string     infile = argv[1];
    std::string     line;
    std::string     s1 = argv[2];
    std::string     s2 = argv[3];
    int             read;

    if (!s1.length())
    {
        std::cout << "Wrong input" << std::endl;
        return 0;
    }
    if (!file.is_open())
    {
        std::cout << "File does not exist" << std::endl;
        return 0;
    }
    std::ofstream outFile(infile + ".replace");
    while (getline(file, line))
    {
        int position = line.find(argv[2]);
        while (position != -1)
        {
            line.erase(position, s1.length()).insert(position, s2);
            read = position + s2.length();
            position = line.find(argv[2], read);
        }
        outFile << line << std::endl;
    }
    
}