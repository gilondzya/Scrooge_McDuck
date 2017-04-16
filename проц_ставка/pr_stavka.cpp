#include <cstdlib>
#include <iostream>

using namespace std;



double Prstavka_Kr_lgot (int age, char pol, int month)
/*
 *Расчёт процентной ставки по кредиту в зависимости от возраста, пола 
 и срока, на который берётся кредит.Возвращает ставку. 
*/
{
  if( (pol == 'w' && age > 54 && month <= 24) || (pol == 'm' && age > 59 && month <= 24) )
    return 14.9;
  if( (pol == 'w' && age > 54 ) || (pol == 'm' && age > 59 ) )
    return 15.9; 
  if(  month <= 24)
    return 17.9;
  return 18.9;  
}


double Prstavka_Ip_lgot (int age, bool child)
/*
 * Расчёт процентной ставки по ипотеке в зависимости от возраста и наличия детей
 * Возвращает ставку.
*/
{
  if( age < 35 && child )
    return 10.75;
  return 11.25;  
}
