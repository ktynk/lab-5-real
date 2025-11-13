#include <iostream>
using namespace std;
int main()
{
    int arr[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int z = 0; z < 2; z++)
        {
            cout << "wedite element pod indeksami: " << i << " " << z << endl;
            cin >> arr[i][z];
        }
    }

    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        bool polozitelni = false;
        for (int z = 0; z < 2; z++)
        {
            if (arr[i][z] > 0)
            {
                polozitelni = true;
                break;
            }
        }
        if (polozitelni)
        {
            count++;
            cout << "Stroca " << i << " polozitelna: ";
            for (int z = 0; z < 2; z++)
            {
                cout << arr[i][z] << " ";
            }
            cout << endl;
            if (i > 0)
            {
                cout << "Menyaem znaki v stroke " << i - 1 << ": ";
                for (int z = 0; z < 2; z++)
                {
                    arr[i - 1][z] = -arr[i - 1][z];
                    cout << arr[i - 1][z] << " ";
                }
                cout << endl;
            }
        }
    }
    cout << "Kolichestvo stroc polozitelnih: " << count << endl;
}

