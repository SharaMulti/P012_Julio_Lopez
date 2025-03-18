/* Amerike university
  Author: Julio López
  Practice #: 12
  Date: 18/03/25
  Description: This program shall ask the user for a number and number DOUBLE, and the console shall dispense the correct calculation m*/

  #include <iostream>
  using namespace std;

  double Square(double n1){

    return n1 * n1;
 
  }
  double Cube(double n1){

    return n1 * n1 * n1;
  }
  double Absolute_Value(double n1){
    
if(n1 < 0){
       return n1 * -1;
    }
    return n1;
  }
  double Square_Root(double n1){

    return n1 / 2;
  }
  int main(){

    double N1;
    char symbol;


    cout << "Add the symbol you want to use\n";
 
     cout << "Square (1)\n";
     cout << "Cube (2)\n";
     cout << "Absolute value (3)\n";
     cout << "Square Root (4)\n";
 
     cin >> symbol;
     cout << "Write a number ";
     cin >> N1;

     switch (symbol)
     {
      case '1':
         cout << Square(N1);
         break;
      case '2':
         cout << Cube(N1);
         break;
      case '3':
         cout << Absolute_Value(N1);
         break;
      case '4':
         cout << Square_Root(N1);
         break;
      default:
         cout << "Didn't i give you options?";
 



  }
}
