#include <iostream>
#include <cmath>
#include <fstream>

int main()
{
   std::ofstream ofs("bac.dat",std::ios::trunc);
   double a=1.0;
   double b=0.5;
   int step=0;
   for(;a<2.0;a+=0.1,++step)   
   {
      ofs<<"# Ellipsoid2D "<<step<<std::endl;
      ofs<<a<<" 0.0"<<" 0.0 "<<a<<" "<<b<<std::endl;
   }
   ofs<<"# Ellipsoid2D "<<step++<<std::endl;
   ofs<<"1 "<<0.0<<" 0.0 "<<1.0<<" "<<b<<std::endl;
   ofs<<"3 "<<0.0<<" 0.0 "<<1.0<<" "<<b<<std::endl;

   return EXIT_SUCCESS;
}
