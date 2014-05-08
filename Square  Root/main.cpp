//
//  main.cpp
//  Square  Root
//
//  Created by Jon Lowrey on 1/24/14.
//  Copyright (c) 2014 Jon Lowrey. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[])
{
    int x,y,holder;
    std::cout << "Enter the number you'd like to find the square root of";
    std::cin >>x;
    y=x/2;
    while (y!=holder){
        holder =y;
        y=(( (x / y )+y) / 2);
        cout <<y<<"\n";
    
    }
        std::cout <<y;
  
    return 0;
}

