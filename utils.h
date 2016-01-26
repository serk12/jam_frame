#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <fstream>
#include <cctype>
#include <vector>
#include <list>
#include <queue>
#include <set>
#include <cmath>
#include <utility>
#include <sstream>

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>

#define W_WIDTH 500
#define W_HEIGHT 500
#define APP_NAME "JAM"
/*
static bool parse(const char* dir,int id, std::vector<int>& info)
{
    std::ifstream mapFile(dir);

    if (mapFile.is_open()){
        std::string line;
        while (getline(mapFile,line)) {
            std::istringstream aux(line);
            std::string s;
            aux >> s;
            if (s == std::to_string(id)) {
                while(aux >> s) info.push_back(atoi(s.c_str()));
                return true;
            }
        }
    }
    else {
        std::cout << "Can't Open the file " << dir << std::endl;
        return false;
    }
}*/

#endif // UTILS_H
