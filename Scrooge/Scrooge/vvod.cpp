#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

long long  Enter ()
/*
 *Ввод для суммы КРЕДИТА 
*/
{
  long long sum;
  metka:
  cin.clear();   
  cin.sync();
    
    cin>>sum;   
    if(cin.fail() || sum<=45000 || sum> 3000000)
    {
      cout<<"\n Error, repeat the input: ";
      goto metka;
    }
  return sum;
}


int Enter1 ()
/*
 * Ввод для свитчей 
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



int Enter2 ()
/*
 * Ввод возраста для берущих КРЕДИТ
 * (!У ипотеки другой!)
*/
{
  int age;
  metka1:
  cin.clear();   
  cin.sync();
  cin>>age;   
    if(cin.fail() || age < 18 || age > 75)
    {
      cout<<"\n Sorry, your age is unacceptable, press 1 to repeat the input, or 2 to quit: ";
      int a = Enter1 ();
      switch(a)
      {
        case 1:
        {
          goto metka1;
          break;
        }
        case 2:  
        {
         return 0;    
         break;    
        }       
      }
      
    }
  return age;
}


char Enter3 ()
/*Ввод пола
*/
{
  char pol; 
  metka: 
  cin.clear();   
  cin.sync();  
  
  cin>>pol;      		
  if( cin.fail() ||  pol!= 'm' || pol!= 'w')  
  {
    cout<<"\n Error, repeat the input: ";
    goto metka;
  }
  return pol;     
}


int Enter4 ()
/*Ввод кол-ва месяцев на которые берётся КРЕДИТ
*/
{
  int month;
  metka:
  cin.clear();   
  cin.sync();
  cin>>month;   
    if(cin.fail() || month < 3 || month > 60)
    {
      cout<<"\n Error, repeat the input: ";
      goto metka;
    }
  return month;
}

long long  Enter5 ()
/*Ввод суммы ИПОТЕКИ
*/
{
  long long sum;
  metka:
  cin.clear();   
  cin.sync();
  cin>>sum;   
  if(cin.fail() || sum<=300000 || sum> 3200000)
  {
    cout<<"\n Error, repeat the input: ";
    goto metka;
  }
  return sum;
}

int Enter6 ()
/*Ввод кол-ва месяцев, на которые берётся ИПОТЕКА
*/
{
  int month;
  metka:
  cin.clear();   
  cin.sync();
  cin>>month;   
    if(cin.fail() || month < 12 || month > 30*12)
    {
      cout<<"\n Error, repeat the input: ";
      goto metka;
    }
  return month;
}

bool Enter7 ()
/*Ввод: есть дети = 1 или нет = 0
*/
{
  int child;
  metka:
  cin.clear();   
  cin.sync();
  cin>>child;   
    if(cin.fail() || child!=0 || child!=1)
    {
      cout<<"\n Error, repeat the input: ";
      goto metka;
    }
  return child;
}

int Enter8 ()
/*Ввод возраста для берущих ИПОТЕКУ
*/
{
  int age;
  metka1:
  cin.clear();   
  cin.sync();
  cin>>age;   
    if(cin.fail() || age < 21 || age > 75)
    {
      cout<<"\n Sorry, your age is unacceptable, press 1 to repeat the input, or 2 to quit: ";
      int a = Enter1 ();
      switch(a)
      {
        case 1:
        {
          goto metka1;
          break;
        }
        case 2:  
        {
         return 0;    
         break;    
        }       
      }
      
    }
  return age;
}
