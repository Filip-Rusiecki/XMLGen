#include <iostream>
#include <algorithm>
#include <fstream>
#include <cstring>
#include <sys/stat.h>


#include"project_lib/CsvLoader.hpp"
#include "project_lib/XMLform.hpp"
#include "project_lib/CsvForm.hpp"
#include "project_lib/dataSearch.hpp"




using namespace std;


int main () {



int  choice;

    cout << "1.display all contacts"<< endl;
    cout << "2.Create XML file" << endl;
    cout << "3. Find a Contact" << endl;
    cout << "4. Exit application" << endl;


    cin >> choice;
   if (choice == 1 ){

            CsvForm csvForm;

    }

else if (choice == 2){


    //dont know why it sees as udefined reference - it worked before no problem

       XMLform xmLform;

}

   else if (choice == 3) {


     dataSearch dataSearch;
   }

   else if (choice == 4) {


      // exit program


   }

    return 0;
    }







