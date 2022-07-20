#include <iostream>
#include <string>
#include "ascii.cpp" /* ASCII Art */
    
    using namespace std;
    
    void Menu()
        {
            system("clear");
            cout << "================================\n";
            cout << " reh - Animals in your terminal \n";
            cout << "================================\n";
            cout << " [1] - Skunk                    \n";
            cout << " [2] - Dog                      \n";
            cout << " [3] - Fox                      \n";
            cout << " [4] - Horse                    \n";
            cout << "================================\n";
            }
            
    void Skunk()
       {
           system("clear");
           printf("%s\n", skunk);
           printf("\nreh! - have a nice day\n");
//           return 0;
       }
    void Dog()
        {
            system("clear");
            printf("%s\n", dog);
            printf("\nwoof! - have a nice day!\n");
//            return 0;
        }
    void Fox()
        {
            system("clear");
            printf("%s\n", fox);
            printf("\nyip! - have a nice day!\n");
//            return 0;
        }
    void Horse()
        {
            system("clear");
            printf("%s\n", horse);
            printf("\nneigh! - have a nice day!\n");
//            return 0;
        }
        
    // The meat in all this code
    
    int main()
        {
            string st[20];
            int itemcount = 0;
            
            Menu();
            int yourchoice;
            string confirm;
            do
                {
                    cout << "Enter your choice (1-4):";
                    cin >> yourchoice;
                    switch (yourchoice)
                        {
                            case 1: Skunk(); break;
                            case 2: Dog(); break;
                            case 3: Fox(); break;
                            case 4: Horse(); break;
                            default: cout << "Not a choice"; break;
                        }
                    cout << "Press y or Y to Select a different animal";
                    cin >> confirm;
                    }
                while (confirm == "y" || confirm == "Y");
                return 0;
            }    
                               