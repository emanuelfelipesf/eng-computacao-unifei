#include <iostream>
using namespace std;

struct Ponto
{
    float x, y;
};
struct Retangulo
{
    float x_minimo, x_maximo, y_minimo, y_maximo;
};

int estaDentroRetangulo(Ponto p, Retangulo ret);

int main()
{
    int n;
    cin >> n;
    Ponto *p = new Ponto[n];

    Retangulo r;
    cout << "Tamanho do retangulo\n x_minimo e x_maximo (separe-os por espaco): ";
    cin >> r.x_minimo >> r.x_maximo;
    cout << "Tamanho do retangulo\n y_minimo e y_maximo (separe-os por espaco): ";
    cin >> r.y_minimo >> r.y_maximo;
    
    for (int i = 0; i < n; i++)
    {
        cout << "Ponto " << i+1 << "\n\tx: ";
        cin >> p[i].x;
        cout << "\ty: ";
        cin >> p[i].y;
    }
    for (int i = 0; i < n; i++)
    {
        int resultado = estaDentroRetangulo(p[i], r);
        cout << "Ponto (" << p[i].x << ", " << p[i].y << "): "; 
        if (resultado)
        {
            cout << " SIM";
        }
        else
        {
            cout << " NAO";
        }
        cout << endl;
    }
    
    return 0;
}

int estaDentroRetangulo(Ponto p, Retangulo ret)
{
    float x = ret.x_maximo - ret.x_minimo, y = ret.y_maximo - ret.y_minimo;

    if (p.x <= x && p.y <= y)
    {
        return 1;
    } 
    else 
    {
        return 0;
    }
}