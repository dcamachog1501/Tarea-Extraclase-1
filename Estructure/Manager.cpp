//
// Created by dcamachog1501 on 08/03/19.
//

#include "Manager.h"
#include <iostream>
using namespace std;

Manager::Manager()
{
    selectionMngr();
}
void Manager::printMain()
{
  cout<<"-----Welcome to the list manager!-----"<<endl;
  cout<<""<<endl;
  cout<<"Your current list: "<<list.print();
  cout<<""<<endl;
  cout<<""<<endl;
  cout<<""<<endl;
  cout<<""<<endl;
  cout<<""<<endl;
  cout<<"Available actions: "<<endl;
  cout<<""<<endl;
  cout<<"1. Add to the beginning"<<endl;
  cout<<"2. Add to the end"<<endl;
  cout<<"3. Delete an element"<<endl;
  cout<<"4. Collector's monitoring"<<endl;
  cout<<"5.Exit"<<endl;
  cout<<""<<endl;
  cout<<"What do you want to do? "<<endl;
}
void Manager::selectionMngr()
{
    while(true)
    {
        printMain();
        string selection;
        getline(cin, selection);
        if(selection=="1")
        {
          while(true)
          {
              cout << "Which number do you want to add to the list?"<<endl;
              string entrada;
              getline(cin,entrada);
              int ingresado;
              try
              {
                  ingresado= stoi(entrada);
                  list.addFirst(ingresado);
                  break;
              }
              catch (int e)
              {
                  cout<<"The input you provided is not an integer!"<<endl;
              }

          }
        }
        else if(selection=="2")
        {
            while(true)
            {
                cout << "Which number do you want to add to the list?"<<endl;
                string entrada;
                getline(cin,entrada);
                int ingresado;
                try
                {
                    ingresado= stoi(entrada);
                    list.addLast(ingresado);
                    break;
                }
                catch (int e)
                {
                    cout<<"The input you provided is not an integer!"<<endl;
                }

            }
        }
        else if(selection=="3")
        {
            while(true)
            {
                cout << "Which number do you want to delete from the list?" << endl;
                string entrada;
                getline(cin, entrada);
                int ingresado;
                try {
                    ingresado = stoi(entrada);
                    list.del(ingresado);
                    break;
                }
                catch (int e) {
                    cout << "The input you provided is not an integer!" << endl;
                }
            }
        }
        else if(selection=="4")
        {
            cout<<"------------------------"<<endl;
            cout<<"Free addresses: "<<endl;
            cout<<""<<endl;
            LinkedList::collector->getFree()->print("free");
            cout<<" "<<endl;
            cout<<"Taken addresses: "<<endl;
            cout<<""<<endl;
            LinkedList::collector->getTaken()->print("taken");
            cout<<"------------------------"<<endl;

        }
        else if(selection=="5")
        {
            cout<<"--------Thanks for using the list manager! Good bye!--------"<<endl;
            break;
        }
        else
        {
            cout<<"--------------------------------------------"<<endl;
            cout<<"| Please enter a valid input from the menu!|"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<""<<endl;
        }
    }

}