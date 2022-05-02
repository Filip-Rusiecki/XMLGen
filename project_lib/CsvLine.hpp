//
// Created by flaqy on 28/03/2022.
//

#ifndef XMLGEN_CSVLINE_HPP
#define XMLGEN_CSVLINE_HPP

#include <string>
#include <sstream>
#include <vector>

using namespace std;

class CsvLine {

    public:
    CsvLine(){  }

    CsvLine(const CsvLine &other){

        values_ = other.values_;

}

       ~CsvLine(){} // destructor


        void parse(std::string line,char delimiter = ',');
        std::string getString(int column);
        int getInt(int column);




private:
    std::vector<std::string> values_;


};


#endif //XMLGEN_CSVLINE_HPP
