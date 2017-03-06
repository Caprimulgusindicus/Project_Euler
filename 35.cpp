#include<stdio.h>

bool prime(int m){
 for(int j=3 ; j*j <= m ; j+=2 ){  
  if(m%j==0)
   return false;
 }
 return true ;
}

bool test(int m){
 int h = 10 , i=0;
 if(!prime(m))
  return false ;
 while(h<m){
  i++;
  h *= 10 ;
 }
 for(; i ; i-- ){
  m=( (m%10)*h + m )/10;
  if(!prime(m))
   return false;
 }
 return true;
}

void fun(int m,int &max,int &count){
 int i,t ;

 if(test(m))
  count++;
 
 for( i = 1 ; i < 10 ; i += 2 )
  if(i!=5){
   t = m*10 + i;
   if(t<max)
    fun(t,max,count);
   else
    break;
  }

}

int main(){
 int i,max=1000000;
 int count=2;//数字5,2

 for( i=9 ; i > 0 ; i -= 2 )
  if(i!=5)
   fun(i,max,count);

 count--;//由于多算了一个1
 printf("%d\n",count);
}