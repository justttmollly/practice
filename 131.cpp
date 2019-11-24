#include <iostream>
using namespace std;
int main (){
for (int i = 2; i <= 20; i++)
            {
                bool prim = true;
                for (int j = 2; j <= i / 2; j++)
                {
                    if (i % j == 0)
                    {
                        prim = false;
                        break;
                    }
 
                    for (int k = 2; k <= i / 2; k++)
                    {
                        if (j - 2 == k) 
                        {
                            Console.WriteLine( j +k);
                        }
                    }
 
 
                }              
                    
                
                
                if (prim)
                {
                    Console.WriteLine(i);
                }
                                                             
 
            }
