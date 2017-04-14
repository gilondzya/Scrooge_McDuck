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


