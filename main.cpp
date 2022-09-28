#include <iostream>
#include <vector>
using namespace std;

int main()
{unsigned int n;
  cout<< "Numero de Elementos : ";
  cin >> n;
  vector <int> v(n);
  for(auto it=begin(v); it!=end(v); it++)
  {
    cout << "Valor " << distance(begin(v),it) << " : ";
    cin >> *it;
  }
  //-- imprimimos al reves
  cout << "Se imprime desde el ultimo al primero\n";
  for( auto it=rbegin(v); it!=rend(v); it++)
    cout << *it << "\n";

  return 0;
}
