#include <iostream>
#include <string>
#include <sstream>
using namespace std;

  bool read (int *mas, unsigned int k)
    {
        string stroka;
        getline(cin,stroka);
        istringstream stream (stroka);
        for (unsigned int i=0; i<k;i++)
        {
            if (!(stream>>mas[i]))
            {
                cout<<"Error"<<endl;
                return false;

            }
        }
        return true;
    }

int main()
{
   unsigned int k=0;
   int invers=0;
    cin >> k;
    cin.get();
    int *mas = new int[k];
    if (read(mas, k))
    {
        for(int i = 0; i < k; i++)
        for(int j = i + 1; j < k; j++)
            if(mas[i] > mas[j])
                  invers++;
                
    }
    cout<<"invers="<<invers<<endl;
    return 0;
}
