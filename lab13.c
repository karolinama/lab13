
#include <iostream>
#include <cmath>
#include <vector>

int main(){
vector<float> v1;
vector<float> v2;
vector<float> v3;
int x, wymiar1, wymiar2;
cout <<"Podaj wymiar wektora 1:\n";
cin >> wymiar1;
cout <<"\nPodaj wspolrzedne wektora1:\n";
for(int i=0; i<wymiar1;i++){
cin>>x;
v1.push_back(x);}

cout <<"Podaj wymiar wektora 2:\n";
cin >> wymiar2;
cout <<"\nPodaj wspolrzedne wektora2:\n";
for(int i=0; i<wymiar1;i++){
cin>>x;
v2.push_back(x);
}

if (wymiar1 == wymiar2)
	{
		cout << "Rozmiary wektorow sa takie same";

	for (int i = 0; i < wymiar1; i++)
		{
		    cout<<"Mnozenie:";
			float m = v1[i] * v2[i];
			v3.push_back(m);
			cout << v3[i] << " ";

		}



		cout << "Dodawanie ";
		for (int i = wymiar1; i < 2 * wymiar1; i++)
		{
			float d = v1[i ] + v2[i];
			v3.push_back(d);
			cout << v3[i] << " ";

		}

		cout << "Odejmowanie";
		for (int i = wymiar2; i < 3 * wymiar1; i++)
		{
			float o = v1[i ] - v2[i];
			v3.push_back(o);
			cout << v3[i] << " ";

		}

		if (wymiar1== 2)
	{
	    float dlugosc1;
		float dlugosc2;
		float kat;
		float w;
        dlugosc1 = sqrt(v1[0] * v1[0] + v1[1] * v1[1]);
		dlugosc2 = sqrt(v2[0] * v2[0] + v2[1] * v2[1]);

		 kat = (v1[0] * v2[0] + v1[1] * v2[1]) / (dlugosc1*dlugosc2);

		w = acos(kat) * 180 / 3.14;


			cout << endl << "Kat pomiedzy wektorami wynosi:" <<w << "stopni"<<endl;
	}
	else
		cout << "Nie mozna obliczyc kata pomiedzy wektorami" << endl;

	system("pause");
	return 0;

	}
}

