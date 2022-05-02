//
// Created by flaqy on 25/04/2022.
//

#include "CsvForm.hpp"
#include "CsvLoader.hpp"


CsvForm::CsvForm() {

    CsvLoader loader;


    vector<CsvLine> lines = loader.read("/home/filip/clionprojects/XMLGen/contacts.txt");


    for(auto line : lines){

        cout << "id: " << line.getString(1) << endl;
        cout << "FirstName: " << line.getString(3) << endl;
        cout << "LastName: " << line.getString(5) << endl;
        cout << "email: " << line.getString(7) << endl;
        cout << "Country: " << line.getString(9) << endl;


    }

}