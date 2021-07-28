#include <iostream>
#include <string>
class schule
{
public:
  int anzahl_schueler;
  std::string name;
  std::string location;
  void schnelle_info()
  {
    std::cout<< "die schule " << name << " hat " << anzahl_schueler<< " schueler."<<std::endl;
  };

};

class clas
{
  string name;
};
 clas::name()
 {
   std::cout<< "halli hallo"<< std::endl;
 }


int main()
{
  schule an_den_buchen;
  an_den_buchen.anzahl_schueler=20;
  an_den_buchen.name="an_den_buchen";
  an_den_buchen.schnelle_info();
  std::cout<<"helloworld"<<std::endl;
  clas one;
  one.name;
  return 0;
}
