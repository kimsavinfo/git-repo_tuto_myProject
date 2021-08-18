//
//  main.cpp
//  MyProject
//
//  Created by Kim SAVAROCHE on 18/08/2021.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    for(int iNumber = 1; iNumber <= 100; iNumber++) {
        std::string text = "";
        
        if(text.size() == 0) {
            text = std::to_string(iNumber);
        }
        
        std::cout << text << std::endl;
    }
    
    return 0;
}
