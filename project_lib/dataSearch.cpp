//
// Created by flaqy on 27/04/2022.
//

#include "dataSearch.hpp"
#include "CsvLoader.hpp"


dataSearch::dataSearch() {
    CsvLoader loader;

    vector<CsvLine> lines = loader.read("/home/filip/clionprojects/XMLGen/contacts.txt");

    int option;

    cout << "1 :search by id" << endl;
    cout << "2 :search by first name (case sensitive)" << endl;
    cout << "3 :search by last name (case sensitive)" << endl;
    cout << "4 : search by a Country (case sensitive)" << endl;

    cin >> option;

    std::string search;


    if (option == 1) {
        cout << "Please, enter ID you want to search ";


        cin >> search;


        for (auto line: lines) {
            if (search == line.getString(1)) {
                search = line.getString(1);
                cout << "data found -  " << "id:" << search << " " << "First Name: " << line.getString(3) << " "
                     << "Last Name: " << line.getString(5) << "Email: " << line.getString(7) << endl;
                break;
            } else {
                cout << "data not found" << endl;
                break;

            }
        }

    } else if (option == 2) {
        cout << "Please, enter First Name you want to search ";


        cin >> search;

        for (auto line: lines) {

            if (search == line.getString(3)) {
                search = line.getString(3);
                cout << "Results found for:" << search << " " << "First Name: " << line.getString(3) << " "
                     << "Last Name: "
                     << line.getString(5) << "ID: " << line.getString(1) << "Email: " << line.getString(7) << "Email: "
                     << line.getString(7) << endl;
                break;
            } else {
                cout << "data not found" << endl;
                break;
            }
        }
    } else if (option == 3) {
        cout << "Please, enter Last Name you want to search ";


        cin >> search;

        for (auto line: lines) {

            if (search == line.getString(5)) {
                search = line.getString(5);
                cout << "Results found for:" << search << " " << "First Name: " << line.getString(3) << " "
                     << "Last Name: "
                     << line.getString(5) << "ID: " << line.getString(1) << "Email: " << line.getString(7) << endl;
                break;
            } else {
                cout << "data not found" << endl;
                break;
            }
        }
    } else if (option == 4) {
        cout << "Please, Country you want to search ";


        cin >> search;

        for (auto line: lines) {

            if (search == line.getString(9)) {
                search = line.getString(9);
                cout << "Results found for:" << search << " " << "First Name: " << line.getString(3) << " "
                     << "Last Name: " << line.getString(5) << "ID: " << line.getString(1) << endl;
                break;
            } else {
                cout << "data not found" << endl;

            }

        }
    } else
        cout << "please enter your option number";
dataSearch();

}

