//
// Created by flaqy on 14/03/2022.
//

#ifndef XMLGEN_CSVLOADER_HPP
#define XMLGEN_CSVLOADER_HPP


#include <filesystem>
#include <iostream>
#include <fstream>
#include <vector>

#include "CsvLine.hpp"

#endif //XMLGEN_CSVLOADER_HPP


class CsvLoader{

public:
    CsvLoader(){}


    vector<CsvLine>read(string fileName);
};

