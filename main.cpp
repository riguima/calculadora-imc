#include <iostream>
#include <string>
#include <cmath>
#include <map>

using namespace std;


int main(){
  string weight, height;
  cout << "Digite o seu peso: ";
  cin >> weight;
  cout << "Digite sua altura: ";
  cin >> height;
  float result = stof(weight) / (pow(stof(height), 2));
  map<float, string> table;
  table[18.5] = "Magreza";
  table[24.9] = "Normal";
  table[29.9] = "Sobrepeso";
  table[39.9] = "Obesidade";
  table[40.0] = "Obesidade Grave";
  cout << "Seu resultado foi de: " << result << '\n';
  for(auto it=table.begin(); it!=table.end(); ++it){
    if(result < it->first || it==--table.end()){
      cout << "Classificação: " << it->second << '\n';
      break;
    }
  }
  return 0;
}
