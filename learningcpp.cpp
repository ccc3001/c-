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
public:

  void namen();
  std::string name;
};
  void clas::namen()
 {
   std::cout<< "halli hallo"<< std::endl;
 }

/*  class CComplex
  {
  public:
   const int m_re;
   const int m_im;
   CComplex(){};
   explicit CComplex(int a , int b): m_re(a), m_im(b) {};
   ~String();
   const int re(){return m_re;};
   const int im(){return m_im;};
   auto  add(const Complex &zn)
   {
     m_re += zn.re();
     m_im += zn.im();
     return *this;
   };
 };
*/

int main()
{
  int b= 10;
  int *a = &b;
  int *c = a;
  int &d = * a ;
  int *e ;
  *e= b;
  std::cout<<b<<" " << *a <<" "<< *c<<" "<< d<<" "<<*e<<std::endl;
  schule an_den_buchen;
  an_den_buchen.anzahl_schueler=20;
  an_den_buchen.name="an_den_buchen";
  an_den_buchen.schnelle_info();
  std::cout<<"helloworld"<<std::endl;
  clas one;
  one.namen();

  return 0;
}
