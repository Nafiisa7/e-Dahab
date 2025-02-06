#include <iostream>
using namespace std;

int main() {
    int pin = 1234, pass, attempts = 3, haraaga = 200, option, choice, num, lacag;
    int hubi, dooro; // Declared missing variable

    // PIN validation loop (3 attempts)
    while (attempts > 0) {
        cout << "Fadlan gali PIN-kaaga: ";
        cin >> pass;

        if (pass == pin) {
            break; // Correct PIN, proceed
        } else {
            attempts--;
            cout << "PIN khaldan! Waxaad haysataa " << attempts << " isku dayo.\n";
            if (attempts == 0) {
                cout << "Waxaad isku dayday 3 jeer, program-ku wuu xirmayaa.\n";
                return 0; // Exit program
            }
        }
    }

    // Main Menu Loop
    while (true) {
        cout << "\n**********MENU**********\n";
        cout << "1. Itus haraaga\n";
        cout << "2. Kaarka ku hadal\n";
        cout << "3. Uwareeji EVC Plus\n";
        cout << "4. Warbixin kooban\n";
        cout << "5. Maareynta (Bedel PIN)\n";
        cout << "6. Ka bax\n";
        cout << "Dooro ikhtiyaarkaaga: ";
        cin >> option;

        // Handle menu options
        switch (option) {
            case 1: // Show balance
                cout << "Haraagaagu waa: $" << haraaga << endl;
                break;

            case 2: // Recharge
                cout << "1. Ku shub\n";
                cout << "2. Ugu shub\n";
                cout << "Dooro: ";
                cin >> choice;

                if (choice == 1) {
                    cout << "Fadlan gali lacagta aad ku shubaneyso: ";
                    cin >> lacag;
                    if (lacag > haraaga) {
                        cout << "Haraagaaga kuma filna!\n";
                    } else {
                        cout << "Ma hubtaa inaad $" << lacag << " ku shubato? (1=Haa, 2=Maya): ";
                        cin >> hubi;
                        if (hubi == 1) {
                            haraaga -= lacag;
                            cout << "Waxaad ku shubatay $" << lacag << endl;
                        } else {
                            cout << "Fadlan dib u eeg.\n";
                        }
                    }
                } else if (choice == 2) {
                    cout << "Fadlan gali numberka aad ugu shubaneyso: ";
                    cin >> num;
                    cout << "Fadlan gali lacagta: ";
                    cin >> lacag;
                    if (lacag > haraaga) {
                        cout << "Haraagaaga kuma filna!\n";
                    } else {
                        cout << "Ma hubtaa inaad $" << lacag << " ugu shubto " << num << "? (1=Haa, 2=Maya): ";
                        cin >> hubi;
                        if (hubi == 1) {
                            haraaga -= lacag;
                            cout << "Waxaad $" << lacag << " ugu shubtay " << num << endl;
                        } else {
                            cout << "Fadlan dib u eeg.\n";
                        }
                    }
                } else {
                    cout << "Doorasho khaldan!\n";
                }
                break;

            case 3: // Send Money (EVC Plus)
                cout << "Fadlan gali numberka aad ugu wareejineyso: ";
                cin >> num;
                cout << "Fadlan gali lacagta: ";
                cin >> lacag;
                if (lacag > haraaga) {
                    cout << "Haraagaaga kuma filna!\n";
                } else {
                    cout << "Ma hubtaa inaad $" << lacag << " ugu wareejiso " << num << "? (1=Haa, 2=Maya): ";
                    cin >> hubi;
                    if (hubi == 1) {
                        haraaga -= lacag;
                        cout << "Waxaad $" << lacag << " ugu wareejisay " << num << endl;
                    } else {
                        cout << "Fadlan dib u eeg.\n";
                    }
                }
                break;

            case 4: // Transaction History
                cout << "1. Last action\n";
                cout << "2. Wareejinta u dambeysa\n";
                cout << "Dooro: ";
                cin >> dooro;

                if (dooro == 1) {
                    cout << "Waxaad sameysay lacag wareejin/kushubasho: $" << lacag << endl;
                } else if (dooro == 2) {
                    cout << "1. U dirtay\n";
                    cout << "2. Ka heshay\n";
                    cout << "Dooro: ";
                    cin >> dooro;

                    if (dooro == 1) {
                        cout << "Fadlan gali mobilka: ";
                        cin >> num;
                        cout << "Waxaad $" << lacag << " ugu wareejisay " << num << endl;
                    } else if (dooro == 2) {
                        cout << "Fadlan gali mobilka: ";
                        cin >> num;
                        cout << "Waxaad $" << lacag << " ka heshay " << num << endl;
                    } else {
                        cout << "Doorasho khaldan!\n";
                    }
                } else {
                    cout << "Doorasho khaldan!\n";
                }
                break;

            case 5: // Change PIN
                cout << "Fadlan gali PIN-kaaga hore: ";
                cin >> pass;
                if (pass == pin) {
                    cout << "Fadlan gali PIN-ka cusub: ";
                    cin >> pin;
                    cout << "PIN-kaaga cusub waa: " << pin << endl;
                } else {
                    cout << "PIN khaldan! Ma beddeli kartid.\n";
                }
                break;

            case 6: // Exit
                cout << "Macasalaam!" << endl;
                return 0;

            default:
                cout << "Ikhtiyaar sax ah maadan dooran!\n";
        }
    }
}
