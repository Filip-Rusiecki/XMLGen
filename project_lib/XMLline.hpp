//
// Created by flaqy on 18/04/2022.
//

#ifndef XMLGEN_XMLLINE_HPP
#define XMLGEN_XMLLINE_HPP


class XMLline {

public:
    XMLline(){  }

    XMLline(const XMLline &other){

        values_ = other.values_;

    }

    ~XMLline(){} // destructor






private:
    std::vector<std::string> values_;


};


#endif //XMLGEN_XMLLINE_HPP
