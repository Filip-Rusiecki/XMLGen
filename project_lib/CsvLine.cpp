//
// Created by flaqy on 28/03/2022.
//

#include "CsvLine.hpp"



    string CsvLine::getString(int column){
     return values_[column];
}

   int CsvLine::getInt(int column){

       return atoi(values_[column].c_str());
}

    void CsvLine::parse(std::string line, char delimiter) {
    std::stringstream inLine(line);

    std::string temp = "";
    while (getline(inLine,temp,delimiter)){

        values_.push_back(temp);
    }
}


