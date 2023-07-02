#include <iostream>

using namespace std;

class Myclass {
public:
  string adi;
  string soyadi;
  
Myclass();
~Myclass();


};
Myclass::Myclass()
{
	cout << "Constructor  Cagrildi\n" ;
}
Myclass::~Myclass()
{
	cout << "Destructor  Cagrildi\n" ;
}
Myclass m;
int main() {
	
	
   cout<<"main start...\n";
  //k1.adi = "Evren";
  //k1.soyadi = "OTUR";
   
 
  //cout << "k1 adi: " << k1.adi << endl;
  //cout << "k1 soyadi: " << k1.soyadi << endl;
  return 0;
}
