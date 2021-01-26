#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

double calc(double x1, double y1, double x2, double y2){
    double distance;
    double x = x1 - x2;
    double y = y1 - y2;
    
    distance = pow(x,2) + pow(y, 2);
    distance = sqrt(distance);
    return distance;
}

int main(){
    
    //First Input
    int size, num;
    std::cin >> size >> num;

    //Coord. Inputs
    double xlist[size], ylist[size];
    char color[size];
    double x, y;
    char c;
    for(int i = 0; i < size; i++){
        std::cin >> x;
        std::cin >> y;
        std::cin >> c;
        //std::cin >> color;
        xlist[i] = x;
        ylist[i] = y;
        color[i] = c;
        //color[i] = color;
    }

    //Unknown Input
    int unknownx, unknowny;
    std::cin >> unknownx >> unknowny;

    //Calculations
    double distances[size];
    for(int i = 0; i < size; i++){
        distances[i] = calc(unknownx, unknowny, xlist[i], ylist[i]); 
    }

    for(int i = 0; i < size; i++){
        std::cout << distances[i] << std::endl;
    }

    std::cout << std::endl;

    //Find Closest to unknown
    int closest = distances[1];
    for(int i = 0; i < size; i++){
        if(distances[i] <=  closest){
            closest = distances[i];
        }
    }
    
    for(int i = 0; i < size; i++){
        std::cout << distances[i] << std::endl;
    }
    

    //Sort Calculation closest to unknown

    //int n = distances, distances + sizeof distances  / sizeof distances[0];

    std::sort(distances, distances + sizeof distances  / sizeof distances[0]);

    /*
    for (int i = 0; i < size-1; i++){
    // Last i elements are already in place  
        for (int j = 0; j < size-i-1; j++){  
            if (distances[j] > distances[j+1]){  
                std::swap(distances[j], distances[j+1]);
            }
        }
    }
    */
    //Count the # of R and B
    int rcount = 0;
    int bcount = 0;
    for(int i = 0; i < size; i++){
        if(color[i] == 'R'){
            rcount++;
        }
        else if(color[i] == 'B'){
            bcount++;
        }
    }
    //Output
    int i = 0;
    while(i < num){
        if(rcount >= num){
            std::cout << "R" << std::endl;
            break;
        }
        else if(bcount >= num){
            std::cout << "B" << std::endl;
            break;
        }
        i++;
    }

    //Print out 
    /*
    std::cout << rcount << std::endl;
    std::cout << bcount << std::endl;
    */
    for(int i = 0; i < size; i++){
        //std::cout << xlist[i] << " " << ylist[i] << " " << color[i] << std::endl;
        //std::cout << distances[i] << std::endl;
        //std::cout << color[i] << std::endl;
    }
    //std::cout << closest << std::endl;
    
}