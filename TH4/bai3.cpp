#include <iostream>
using namespace std;
class Animal
{
protected:
    string sound;
    int lit;

public:
    void Speak()
    {
        cout << sound;
    }
    int Count(int n, int m)
    {
        return n * m * lit;
    }
};
class Cow : public Animal
{
public:
    Cow()
    {
        sound = "Booo";
        lit = 10;
    }
};
class Sheep : public Animal
{
public:
    Sheep()
    {
        sound = "Beee";
        lit = 5;
    }
};
class Goat : public Animal
{
public:
    Goat()
    {
        sound = "Eeee";
        lit = 8;
    }
};
class Rabbit : public Animal
{
public:
    Rabbit()
    {
        sound = "";
        lit = 0;
    }
};
int main()
{

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int m;
    cin >> m;

    int tam1 = a, tam2 = b, tam3 = c, tam4 = d;

    int *coww = new int[m];
    int *she = new int[m];
    int *go = new int[m];
    int *ra = new int[m];

    int j = 0, k = 0, l = 0,h = 0;

    Cow co;
    Sheep s;
    Goat g;
    Rabbit r;

    int x = co.Count(tam1, m);
    int y = s.Count(tam2, m);
    int z = g.Count(tam3, m);

    for (int i = 0; i < m; i++){
        if (tam1%2 == 0){
            coww[i] = tam1/2;
        }
        else{
            coww[i] = (tam1-1)/2;
        }
        if (i - j == 3 && i != m-1){
            tam1 += coww[j];
            x += co.Count(coww[j], m-1-i);
            j++;
        }
    }

    for (int i = 0; i < m; i++){
        if (tam2%2 == 0){
            she[i] = tam2/2;
        }
        else{
            she[i] = (tam2-1)/2;
        }
        if (i - k == 3 && i != m-1){
            tam2 += she[k];
            y += s.Count(she[k], m-1-i);
            k++;
        }
    }

    for (int i = 0; i < m; i++){
        if (tam3%2 == 0){
            go[i] = tam3/2;
        }
        else{
            go[i] = (tam3-1)/2;
        }
        if (i - l == 3 && i != m-1){
            tam3 += go[l];
            z += g.Count(go[l], m-1-i);
            l++;
        }
    }

    for (int i = 0; i < m; i++){
        if (tam4%2 == 0){
            ra[i] = tam4/2;
        }
        else{
            ra[i] = (tam4-1)/2;
        }
        if (i - h == 1 && i != m-1){
            tam4 += ra[h];
            h++;
        }
    }


    for (int i = j; i < m; i++){
        tam1 += coww[i];
    }
    for (int i = k; i < m; i++){
        tam2 += she[i];
    }
    for (int i = l; i < m; i++){
        tam3 += go[i];
    }
    for (int i = h; i < m; i++){
        tam4 += ra[i];
    }

    for (int i = 0; i < a; i++)
    {
        co.Speak();
        cout << ",";
    }
    for (int i = 0; i < b; i++)
    {
        s.Speak();
        cout << ",";
    }
    for (int i = 0; i < c ; i++)
    {
        g.Speak();
        cout << ",";
    }
    for (int i = 0; i < d-1; i++){
        r.Speak();
        cout << ",";
    }

    r.Speak();
    cout << endl;

    cout << "Bo: " << tam1 << "," << x << endl;
    cout << "Cuu: " << tam2 << "," << y << endl;
    cout << "De: " << tam3 << "," << z << endl;
    cout << "Tho: " << tam4 << "," << 0 << endl;
}

