//
// Created by flaqy on 18/04/2022.
//

#include "XMLline.hpp"

string XMLline::getString(int column){
    return values_[column];
}

int XMLline::getInt(int column){

    return atoi(values_[column].c_str());
}

 std::vector< std::string > XMLline;

XMLline << XMLstructure;

