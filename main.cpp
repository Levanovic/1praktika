#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Valiutos kursai, pagrindine valiuta - EUR
    float EUR_Bendras = 1.0000;
    float EUR_Pirkti = 1.0000;
    float EUR_Parduoti = 1.0000;
    float GBP_Bendras   = 0.8729;
    float GBP_Pirkti    = 0.8600;
    float GBP_Parduoti  = 0.9220;
    float USD_Bendras   = 1.1793;
    float USD_Pirkti    = 1.1460;
    float USD_Parduoti  = 1.2340;
    float INR_Bendras   = 104.6918;
    float INR_Pirkti    = 101.3862;
    float INR_Parduoti  = 107.8546;
    int Pasirinkimas;
    int Valiuta;
    // Vartotojo meniu
    cout << "1 Pasirinkimas - tai valiutos palyginimas" << endl;
    cout << "2 Pasirinkimas - tai valiutos pirkimas" << endl;
    cout << "3 Pasirinkimas - tai valiutos pardavimas" << endl;
    //Vartotojo ivestis: pasirinkimas ir valiuta
    cout << "Pasirinkite norima veiksma (1-3)" << endl;
    cin >> Pasirinkimas;
    cout << "Pasirinkite norima valiuta (1-GBP, 2-USD, 3-INR)" << endl;
    cin >> Valiuta;


    switch (Pasirinkimas) {
        case 1:
            cout << "Valiutos palyginimas: " << endl; // Darysim palyginima, kokia valiuta yra pigesni o kokia brangesni
                switch (Valiuta) {
                    case 1:
                        cout << "Jusu pasirinkta valiuta GBP: " << endl;
                        if (GBP_Bendras < EUR_Bendras) { // Jeigu GBP yra mazesnis uz EUR, tai Euras bus pigesnis
                            cout << "Euras yra pigesnis už Svara" << endl;
                        }else {
                                cout << "Euras yra brangesnis už Svara" << endl;
                            }

                        break;
                    case 2:
                        cout << "Jusu pasirinkta valiuta USD: " << endl;
                        if (USD_Bendras < EUR_Bendras) {
                            cout << "Euras yra pigesnis už Doleri" << endl;
                        }else {
                                cout << "Euras yra brangesnis už Doleri" << endl;
                            }
                        break;
                    case 3:
                        cout << "Jusu pasirinkta valiuta INR: " << endl;
                        if (INR_Bendras < EUR_Bendras) {
                            cout << "Euras yra pigesnis už Rupija" << endl;
                        }else {
                            cout << "Euras yra brangesnis už Rupija" << endl;
                        }
                        break;
                }
            break;
        case 2:
            cout << "Valiutos pirkimas: " << endl; //Pirksim (konvertuosim eur i pasirinkta valiuta) valiuta naudojant formula - ? = Eur * norima valiuta
                switch (Valiuta) {
                    case 1: {
                        cout << "Jus norit nupirkti GBP. Kiek turit eurus?: " << endl;
                        float Eur;
                        cin >> Eur;
                        float gauti_GBP = Eur * GBP_Pirkti;//formula
                        cout << fixed << setprecision(2) << endl; // fixed << setprecision (2) skirta tam, kad apvalinti skaicius iki simtuju
                        cout << "Už " << Eur << " eur jus gausite " << gauti_GBP << " GBP." << endl;
                        break;
                    }
                    case 2: {
                        cout << "Jus norit nupirkti USD. Kiek turit eurus?: " << endl;
                        float Eur;
                        cin >> Eur;
                        float gauti_USD = Eur * USD_Pirkti; //formula
                        cout << fixed << setprecision(2) << endl;
                        cout << "Už " << Eur << " eur jus gausite " << gauti_USD << " USD." << endl;
                        break;
                    }
                    case 3: {
                        cout << "Jus norit nupirkti INR. Kiek turit eurus?: " << endl;
                        float Eur;
                        cin >> Eur;
                        float gauti_INR = Eur * INR_Pirkti;//formula
                        cout << fixed << setprecision(2) << endl;
                        cout << "Už " << Eur << " eur jus gausite " << gauti_INR << " INR." << endl;
                        break;
                    }

                }
            break;
        case 3:
            cout << "Valiutos pardavimas: " << endl;
            }


    return 0;
}