// Temperaturi random.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <time.h>
#include <random>

int cnt = 0, spati = 0;
char block = 176, grade = 167;
int temperaturi[10] = { 0,0,0,0,0,0,0,0,0,0 };

void page1();
void radom_number();
void afisare();
void grafic();
void nr_spatii(int);

int main()
{
    page1();
    radom_number();
    afisare();
    grafic();
}

void page1() {
    if (cnt == 0) {
        for (int z = 0; z < 58; z++) {
            std::cout << block;
            if (z == 57) {
                std::cout << std::endl;
                for (int x = 0; x < 20; x++) {
                    std::cout << block;
                    if (x == 19) {
                        std::cout << "  Bine ati venit  ";
                        for (int z = 0; z < 20; z++) {
                            std::cout << block;
                            if (z == 19) {
                                std::cout << std::endl;
                            }
                        }
                    }
                }
            }
        }
    }

    if (cnt == 0) {
        for (int z = 0; z < 58; z++) {
            std::cout << block;
            cnt = 2;
        }

        std::cout << std::endl << std::endl;
        for (int x = 0; x < 10; x++) {
            std::cout << " ";
        }

        std::cout << "Calculatorul va alege 7 temperaturi." << std::endl;
        for (int z = 0; z < 58; z++) {
            char f = 196;
            std::cout << f;
        }
        std::cout << "" << std::endl;
        cnt = 1;
    }
}

void radom_number() {
    if (cnt == 1) {
        char punct = 46;
        int timp = 10;
        // Luni     
        std::cout << "Luni     : ";

        std::random_device device;
        std::uniform_int_distribution <int> distributie_nr(1, 40);
        temperaturi[0] = distributie_nr(device);
        for (int x = 1; x <= temperaturi[0]; x++) {
            Sleep(timp);
            std::cout << x << " ";
            if (x == temperaturi[0]) {
                std::cout << std::endl;
            }
        }

        // Marti
        std::cout << "Marti    : ";
        temperaturi[1] = distributie_nr(device);
        for (int x = 1; x <= temperaturi[1]; x++) {
            Sleep(timp);
            std::cout << x << " ";
            if (x == temperaturi[1]) {
                std::cout << std::endl;
            }
        }

        // Miercuri
        std::cout << "Miercuri : ";
        temperaturi[2] = distributie_nr(device);
        for (int x = 1; x <= temperaturi[2]; x++) {
            Sleep(timp);
            std::cout << x << " ";
            if (x == temperaturi[2]) {
                std::cout << std::endl;
            }
        }

        // Joi
        std::cout << "Joi      : ";
        temperaturi[3] = distributie_nr(device);
        for (int x = 1; x <= temperaturi[3]; x++) {
            Sleep(timp);
            std::cout << x << " ";
            if (x == temperaturi[3]) {
                std::cout << std::endl;
            }
        }

        // Vineri
        std::cout << "Vineri   : ";
        temperaturi[4] = distributie_nr(device);
        for (int x = 1; x <= temperaturi[4]; x++) {
            Sleep(timp);
            std::cout << x << " ";
            if (x == temperaturi[4]) {
                std::cout << std::endl;
            }
        }

        // Sambata
        std::cout << "Sambata  : ";
        temperaturi[5] = distributie_nr(device);
        for (int x = 1; x <= temperaturi[5]; x++) {
            Sleep(timp);
            std::cout << x << " ";
            if (x == temperaturi[5]) {
                std::cout << std::endl;
            }
        }

        // Duminica
        std::cout << "Duminica : ";
        temperaturi[6] = distributie_nr(device);
        for (int x = 1; x <= temperaturi[6]; x++) {
            Sleep(timp);
            std::cout << x << " ";
            if (x == temperaturi[6]) {
                std::cout << std::endl;
            }
        }

        for (int z = 0; z < 58; z++) {
            char f = 205;
            std::cout << f;
        }
        std::cout << std::endl << std::endl;
        cnt = 2;
    }
}

void afisare() {
    if (cnt == 2) {
        std::cout << "     Afisam temperaturile random pe numarul de zile.\n";
        for (int z = 0; z < 58; z++) {
            char f = 196;
            std::cout << f;
        }
        std::cout << std::endl << std::endl;
        for (int x = 0; x < 8; x++) {
            switch (x)
            {
            case 1: std::cout << "Luni     : " << temperaturi[0] << grade << std::endl; break;
            case 2: std::cout << "Marti    : " << temperaturi[1] << grade << std::endl; break;
            case 3: std::cout << "Miercuri : " << temperaturi[2] << grade << std::endl; break;
            case 4: std::cout << "Joi      : " << temperaturi[3] << grade << std::endl; break;
            case 5: std::cout << "Vineri   : " << temperaturi[4] << grade << std::endl; break;
            case 6: std::cout << "Sambata  : " << temperaturi[5] << grade << std::endl; break;
            case 7: std::cout << "Duminica : " << temperaturi[6] << grade << std::endl; break;
            default:

                break;
            }
            cnt = 3;
        }
    }
}

void grafic() {
    if (cnt == 3) {
        for (int z = 0; z < 58; z++) {
            char f = 205;
            std::cout << f;
        }
        std::cout << std::endl;
        std::cout << "                 Valorile temperaturilor.\n";
        for (int z = 0; z < 58; z++) {
            char f = 196;
            std::cout << f;
        }
        std::cout << std::endl;
        // Printam elementele array
        std::cout << "Temperaturile brute in array sunt : ";
        for (int i = 0; i < 7; i++) {
            std::cout << temperaturi[i] << " ";
        }
        std::cout << std::endl;

        // Sortam in ordine crescatoare
        int temp = 0;
        for (int i = 0; i < 7; i++) {
            for (int j = i + 1; j < 7; j++) {
                if (temperaturi[i] > temperaturi[j]) {
                    temp = temperaturi[i];
                    temperaturi[i] = temperaturi[j];
                    temperaturi[j] = temp;
                }
            }
        }
        // Printam temperaturile in ordine crescatoare
        std::cout << "Temperaturi in ordine crescatoare din array sunt : ";
        for (int i = 0; i < 7; i++) {
            std::cout << temperaturi[i] << " ";
        }
        std::cout << std::endl;

        // Media
        for (int z = 0; z < 58; z++) {
            char f = 205;
            std::cout << f;
        }
        std::cout << std::endl;
        std::cout << "              Media temperaturilor la 2 zile\n";
        for (int z = 0; z < 58; z++) {
            char f = 196;
            std::cout << f;
        }
        std::cout << std::endl;
        double temp1 = 0;
        double temp2 = 0;
        temp1 = temperaturi[0] + temperaturi[1];
        temp2 = temp1 / 2;
        std::cout << "Media temperaturilor Luni - Marti este       : " << temp2 << grade << std::endl;
        temp1 = 0;
        temp2 = 0;
        temp1 = temperaturi[2] + temperaturi[3];
        temp2 = temp1 / 2;
        std::cout << "Media temperaturilor Miercuri - Joi este     : " << temp2 << grade << std::endl;
        temp1 = 0;
        temp2 = 0;
        temp1 = temperaturi[4] + temperaturi[5];
        temp2 = temp1 / 2;
        std::cout << "Media temperaturilor Vineri - Sambata este   : " << temp2 << grade << std::endl;
        temp1 = 0;
        temp2 = 0;
        temp1 = temperaturi[5] + temperaturi[6];
        temp2 = temp1 / 2;
        std::cout << "Media temperaturilor Sambata - Duminica este : " << temp2 << grade << std::endl;
        for (int z = 0; z < 58; z++) {
            char f = 205;
            std::cout << f;
        }
        std::cout << std::endl;
        nr_spatii(25);
        std::cout << "Va multumesc\n";
    }
    nr_spatii(25);
    for (int z = 0; z < 12; z++) {
        char f = 196;
        std::cout << f;
    }
    std::cout << std::endl;
    nr_spatii(19);
    for (int z = 0; z < 24; z++) {
        char f = 196;
        std::cout << f;
    }
    std::cout << std::endl;
    nr_spatii(12);
    for (int z = 0; z < 36; z++) {
        char f = 196;
        std::cout << f;
    }
    std::cout << std::endl;
    nr_spatii(6);
    for (int z = 0; z < 48; z++) {
        char f = 196;
        std::cout << f;
    }
    std::cout << std::endl;
    for (int z = 0; z < 58; z++) {
        char f = 196;
        std::cout << f;
    }
    std::cout << std::endl << std::endl;

    std::cout << " (c) 2024 Lazar Alexandru\n\n\n\n\n\n";
}

void nr_spatii(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        std::cout << " ";
    }
}
