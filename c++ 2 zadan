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
    for (int z = 0; z < 2; z++)
    {
        bool Zero = false;
        for (int i = 0; i < 3; i++)
        {
            if (arr[i][z] == 0)
            {
                Zero = true;
                break;
            }
        }
        if (!Zero)
        {
            count++;
            cout << "Stolbec " << z << " bez 0: ";
            for (int i = 0; i < 3; i++)
            {
                cout << arr[i][z] << " ";
            }
            cout << endl;
        }
    }
    cout << "Kolichestvo stolbcov bez 0: " << count << endl;
}
