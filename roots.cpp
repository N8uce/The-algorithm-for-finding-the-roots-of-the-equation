#include <iostream> 
#include <math.h> 
 
using namespace std; 
 
int check_coef(double a, double b, double c) 
{ 
   if (a!=0)return 1; 
   if (b!=0)return 2; 
   if (c!=0)return 0; 
   return 3; 
} 
 
int check_D(int D) 
{ 
   if (D == 0)return 1; 
   if (D > 0)return 3; 
   return 0; 
} 
 
string Calc_Roots (double a, double b, double c) 
{ 
 
   double x,x1,x2,c1,c2; 
   string roots; 
 
   int type_s = check_coef(a,b,c); 
    
   if (type_s == 0) return roots ="Неправильно заданные 
коэффициенты"; 
   if (type_s == 3) return roots = "Множество решений"; 
   if (type_s == 2)  
   { 
      x = -c/b; 
      roots = "Корень = " +to_string(x); 
      return roots; 
   } 
      
   double D = b*b - 4*a*c; 
       
   int type_r = check_D(D); 
      
   if (type_r == 1) 
   { 
     x = -b/2*a;  
     roots = "Корень = " + to_string(x); 
     return roots; 
   } 
 
if (type_r == 3) 
{ 
x1 = (-b+sqrt(D))/(2*a); 
x2 = (-b-sqrt(D))/(2*a); 
roots = "Корень x1 = " +to_string(x1)+ "Корень x2 = 
"+to_string(x2); 
return roots; 
} 
c1 =-b/(2*a); 
c2 = sqrt(-D)/(2*a); 
roots = "Корень x1 = " +to_string(c1)+"+ i*"+to_string(c2) 
+"Корень x2 = "+to_string(c1)+"- i*" +to_string(c2); 
return roots; 
} 
int main() 
{ 
double a,b,c; 
string out; 
cin>>a>>b>>c; 
out = Calc_Roots(a,b,c); 
cout<<out; 
return 0; 
}
