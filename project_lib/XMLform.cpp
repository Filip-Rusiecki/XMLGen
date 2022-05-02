//
// Created by flaqy on 18/04/2022.
//

#include "XMLform.hpp"
#include "CsvLoader.hpp"
#include <string>
#include <vector>

using namespace std;

 XMLform::XMLform()  {
     std::ofstream xmlFile;

     xmlFile.open("/home/filip/clionprojects/XMLGen/contacts.xml");
     xmlFile.open("/home/filip/clionprojects/XMLGen/contacts.xsd");


     std::string xmlParentRoot ="<?xml version=\"1.0\" encoding=\"UTF-8\" ?> ";
     std::string xmlRootElementAllContanctsOpen = "<allcontacts xmlns:xsi= \"http:www.w3.org/2001/XMLSchema-instance\" xsi:noNamespaceSchemaLocation =\"/home/filip/clionprojects/XMLGen/contacts.xsd\">   "  ;
     std::string xmlRootElementAllContactsClose = "</allcontacts>";
     std::string xmlClosingTag = "/>";
     std::string xmlAttributeContactOpen = "<contact id=\"";
     std::string xmlAttributeContactClose = "</contact>";
     std::string xmlElementFirstNameOpen = "<firstname>";
     std::string xmlElementFirstNameClose = "</firstname>";
     std::string xmlElementLastNameOpen = "<lastname>";
     std::string xmlElementLastNameClose = "</lastname>";
     std::string xmlElementEmailOpen = "<email>";
     std::string xmlElementEmailClose = "</email>";
     std::string xmlElementCountryOpen = "<country>";
     std::string xmlElementCountryClose = "</country>";


     CsvLoader loader;


     vector<CsvLine> lines = loader.read("/home/filip/clionprojects/XMLGen/contacts.txt");




     if (xmlFile.is_open()) {

         xmlFile << xmlParentRoot << endl
         << xmlRootElementAllContanctsOpen << endl;
         for (auto line: lines) {



             xmlFile
                     << xmlAttributeContactOpen << line.getString(1) << "\">" << endl
                     << xmlElementFirstNameOpen << line.getString(3) << xmlElementFirstNameClose << endl
                     << xmlElementLastNameOpen << line.getString(5) << xmlElementLastNameClose << endl
                     << xmlElementEmailOpen << line.getString(7) << xmlElementEmailClose << endl
                     << xmlElementCountryOpen << line.getString(9) << xmlElementCountryClose << endl
                     << xmlAttributeContactClose << endl;
                    // << xmlRootElementAllContactsClose << endl;


         }
                 xmlFile << xmlRootElementAllContactsClose << endl;
            cout << "file created!";
     }
         if (!xmlFile.is_open()){
             cout << "something went wrong (file not loaded)";
         }


     }















