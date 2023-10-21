#include <iostream>

using namespace std;

int main()
{
    int m,n;

    cout << "jumlah bebek milik pak tatang : "; cin >> m;
    cout << "jumlah teman pak tatang : "; cin >> n;

    //m = m/n;
    //n = m%n;

    int bebekYangDibagikan = m/n;
    int sisaBebek = m%n;

    cout << "\njumlah bebek yang di terima teman pak tatang : " << bebekYangDibagikan << endl;
    cout << "sisa bebek pak tatang : " << sisaBebek << endl;

    return 0;

}
