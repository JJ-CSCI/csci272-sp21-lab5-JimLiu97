//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

// Write the assignment code here
class Real{
  protected:
  double num;
  public:
  Real(int r):num(r){}
  Real():Real(0){}
  double GetReal(){return num;}
  Real& operator+(double x){
    num +=x;
    return *this;
  }
};
class Complex:public Real{
  protected:
  double real;
  double imaginary;
  public:
  Complex():imaginary(0),Real(){}
  Complex(double r, double i):Real(r),imaginary{i}{}
  double GetImaginary(){return imaginary;}
  Complex& operator+(double x){
    real+=x;
    return *this;
  }
};
class Surreal:public Complex{
  private:
  double s1,s2,s3;
  public:
  Surreal(double a,double b,double c):Complex(a,b),s3{c}{}
  double GetSurreal(double x){return s3;}
  Surreal& operator+(double x){
    s3+= x;
    return *this;
  }
};


//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "c1" ) {
        Real n{10.0};
        REQUIRE( n.GetReal() == 10.0 );
    }
    SECTION( "c2" ) {
        Complex n{10.0, 20.0};
        REQUIRE( n.GetReal() == 10.0 );
        REQUIRE( n.GetImaginary() == 20.0 );
    }
    SECTION( "c3" ) {
        Surreal n{10.0, 20.0, 30.0};
        REQUIRE( n.GetReal() == 10.0 );
        REQUIRE( n.GetImaginary() == 20.0 );
        REQUIRE( n.GetSurreal() == 30.0 );
    }
    SECTION( "a1" ) {
        Real n{10.0};
        Real r = n + 2.0;
        REQUIRE( r.GetReal() == 12.0 );
    }
    SECTION( "a2" ) {
        Complex n{10.0, 20.0};
        Complex r = n + 2.0;
        REQUIRE( r.GetReal() == 12.0 );
        REQUIRE( r.GetImaginary() == 22.0 );
    }
    SECTION( "a3" ) {
        Surreal n{10.0, 20.0, 30.0};
        Surreal r = n + 2.0;
        REQUIRE( r.GetReal() == 12.0 );
        REQUIRE( r.GetImaginary() == 22.0 );
        REQUIRE( r.GetSurreal() == 32.0 );
    }
}
//------------------------------
