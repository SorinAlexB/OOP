#include "zona1.hpp"
#include "zona2.hpp"
#include "zona3.hpp"
#include <iomanip>
#include <fstream>
#include <limits>
using namespace std;
ifstream in("input.txt");
ofstream out("output.txt");
int main()
{
    if (!in.is_open() || !out.is_open()) {
        cout << "Eroare la deschidere" << endl;
        return 1;
    }
    
    zona1 z1;
    zona2 z2;
    zona3 z3;
    char s[300], d[3], n[3];
    int nr_zona, nr_loc, val, varsta, nr_intrebari, nr = 0;
    for (int i = 0; i < 3; i++)
    {
        in >> nr_zona >> nr_loc;
        switch (nr_zona)
        {
        case 1:
            z1.set_nrp(nr_loc);
            for (int j = 0; j < 5; j++)
            {
                in >> val;
                z1.add_valp(val);
            }
            break;
        case 2:
            z2.set_nrp(nr_loc);
            for (int j = 0; j < 10; j++)
            {
                in >> val;
                z2.add_valp(val);
            }
            break;
        case 3:
            z3.set_nrp(nr_loc);
            for (int j = 0; j < 4; j++)
            {
                in >> val;
                z3.add_valp(val);
            }
            break;
        default:
            break;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        in >> nr_intrebari >> nr_zona;
        switch (nr_zona)
        {
        case 1:
            out << "Zona 1\n";
            for (int j = 0; j < nr_intrebari; j++)
            {
                in.ignore();
                in.getline(s, 300);
                in >> d;
                for (int z = 0; z < 5; z++)
                {
                    in >> val;
                    z1.add_val1(val);
                }

                in >> n;
                for (int z = 0; z < 5; z++)
                {
                    in >> val;
                    z1.add_val2(val);
                }
                out << s << "\n";
                if (z1.get_valv1() > z1.get_valv2())
                    out << "Acceptat"
                        << " " << fixed << setprecision(1) << z1.get_valv1() << "-" << fixed << setprecision(1) << z1.get_valv2() << "\n";
                else if (z1.get_valv1() < z1.get_valv2())
                    out << "Respins"
                        << " " << fixed << setprecision(1) << z1.get_valv1() << "-" << fixed << setprecision(1) << z1.get_valv2() << "\n";
                else if (z1.get_valv1() == z1.get_valv2())
                    out << "Egalitate"
                        << " " << fixed << setprecision(1) << z1.get_valv1() << "-" << fixed << setprecision(1) << z1.get_valv2() << "\n";

                out << "Prezenta vot: " << fixed << setprecision(2) << z1.get_totalpercentage() << "%\n";
                z1.reset_vectors();
                s[0]='\0';
            }
           break;

        case 2:
            out<<"Zona 2\n";
            for (int j = 0; j < nr_intrebari; j++)
            {
                in.ignore();
                in.getline(s, 300);
                in >> d;
                for (int z = 0; z < 5; z++)
                {
                    in >> val;
                    z2.add_val1(val);
                }
                in >> n;
                for (int z = 0; z < 5; z++)
                {
                    in >> val;
                    z2.add_val2(val);
                }
                out << s << "\n";
                if (z2.get_valv1() > z2.get_valv2())
                    out << "Acceptat"
                        << " " << fixed << setprecision(1) << z2.get_valv1() << "-" << fixed << setprecision(1) << z2.get_valv2() << "\n";
                else if (z2.get_valv1() < z2.get_valv2())
                    out << "Respins"
                        << " " << fixed << setprecision(1) << z2.get_valv1() << "-" << fixed << setprecision(1) << z2.get_valv2() << "\n";
                else if (z2.get_valv1() == z2.get_valv2())
                    out << "Egalitate"
                        << " " << fixed << setprecision(1) << z2.get_valv1() << "-" << fixed << setprecision(1) << z2.get_valv2() << "\n";

                out << "Prezenta vot: " << fixed << setprecision(2) << z2.get_totalpercentage() << "%\n";
                z2.reset_vectors();
                s[0]='\0';
            }

            break;
        case 3:
            out<<"Zona 3\n";
            for (int j = 0; j < nr_intrebari; j++)
            {
                in>>varsta;
                in.ignore();
                in.getline(s, 300);
                in >> d;
                in >> val;
                z3.add_val1(val);
                in >> n;
                in >> val;
                z3.add_val2(val);
                out << s << "\n";
                if (z3.get_valv1() > z3.get_valv2())
                    out << "Acceptat"
                        << " " << fixed << setprecision(1) << z3.get_valv1() << "-" << fixed << setprecision(1) << z3.get_valv2() << "\n";
                else if (z3.get_valv1() < z3.get_valv2())
                    out << "Respins"
                        << " " << fixed << setprecision(1) << z3.get_valv1() << "-" << fixed << setprecision(1) << z3.get_valv2() << "\n";
                else if (z3.get_valv1() == z3.get_valv2())
                    out << "Egalitate"
                        << " " << fixed << setprecision(1) << z3.get_valv1() << "-" << fixed << setprecision(1) << z3.get_valv2() << "\n";

                if (varsta == 0)
                    nr = 0;
                else if (varsta == 14)
                    nr = 1;
                else if (varsta == 20)
                    nr = 2;
                else if (varsta == 40)
                    nr = 3;
                out << "Prezenta vot: " << fixed << setprecision(2) << z3.get_totalpercentage(nr) << "%\n";
                z3.reset_vectors();
                s[0]='\0';
            }
            break;

       default:
           break;
       }
    }

    return 0;
}