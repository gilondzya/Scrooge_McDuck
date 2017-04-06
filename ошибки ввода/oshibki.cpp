#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

long long double Enter ()
/*
 *обрабатывает ошибки ввода для суммы кредита или зп
 там в заисимости от требования интервалы можно поменять или новую написать
*/
{
  long long double x;
  metka:
  cin.clear();   
  cin.sync();
    
    cin>>x;   
    if(cin.fail() || x<=10000 || x> 1000000000)
    {
      cout<<"\n Error, repeat the input: ";
      goto metka;
    }
  return x;
}


int Enter1 ()
/*
 * обрабатывает ошибки ввода для свитчей - сколько будет в менюшке -
 * столько и добавим
*/
{
  int x; 
  metka: 
  cin.clear();   
  cin.sync();  
  
    cin>>x;      		
    if( cin.fail() ||  (x!= 1 && x!= 2 && x!= 3) ) 
    {
      cout<<"\n Error, repeat the input: ";
      goto metka;
    }
  return x;
}


int main()
{
  setlocale(LC_ALL,"Russian");   
  int num;  
  cout<<"If you want to take a credit push '1', if you want to take a hypothec push '2', if you want to make deposit push '3' \n";
  num = Enter1(); 
  cout<<"\n result: "<<num<<endl;
  
  long long double sum;
  cout<<"Enter the sum of your deposit \n";
  sum = Enter();
  cout<<"\n result: "<<sum<<endl;
  
  
  
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
