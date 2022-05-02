//
// Created by flaqy on 14/03/2022.
//

#include "CsvLoader.hpp"

using namespace std;




vector<CsvLine> CsvLoader::read(string fileName) {

    vector<CsvLine> lines;

    ifstream inputFile;

    inputFile.open(fileName.c_str());

    string line="";

    while (getline(inputFile,line)){
        CsvLine csvLine;

        csvLine.parse(line);

        lines.push_back(csvLine);

    }
    return lines;
}


