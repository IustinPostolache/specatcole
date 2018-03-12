#include<fstream>
#include<iostream>
using namespace std;
typedef struct {float start;
                float stop;} spectacol;
                spectacol M[100];
int n,k;

int read_data()
{
    fstream f;
f.open("input.dat",ios::in);

    for(int i=1;i<=n;i++)

{   f>>M[i].start;
    f>>M[i].stop;

    }

f.close();}

float compute(float ora, int minute)
 {ora=ora+(minute/100.0);
    if(ora-int(ora)>=0.6)
{ora=ora+1;
ora=ora-0.6;
}
return ora;
}

int main()
{cout<<compute(17.55,15);
}
