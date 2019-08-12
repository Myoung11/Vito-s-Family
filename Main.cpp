 /* Assisted by and Assisted line numbers: Dr.Su lines 82, 100
 
 * Matthew Young
 
 * This program will find the minimal sum of differences from the optimal location compared to other locations.
 
 */





#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    
    vector <int> Address; // Vector for each address
    int counter = 0;
    int j = 0;
    char runProg;
    int numRelatives;
    int dist = 30000; // Set distance variable = 30000 for loop comparison to find minimum distance
    vector <int> streetDist;
    int numAd;
    int i;

        
    cout << "Enter the number of relatives: ";
        cin >> numRelatives;
        
    cout << "Enter the number of address inputs: ";
        cin >> numAd;
        cout << endl;
        
    Address.resize(numAd); // Set the sizes of each vector equal to the number of address inputs
    streetDist.resize(numAd);
        
        for (i = 0; i < Address.size(); ++i) {
            
            cout << "Enter address (" << i + 1 << "): ";
            cin >> Address.at(i);
    
        }
    
    streetDist.at(counter) = 0; // Set the counter = 0, to start the while loops
    
    for (i = 0; i < Address.size(); ++i){
        for (i = 0; i < streetDist.size(); ++i){
            while (counter < numAd){
                while (j < numAd){
            
                    streetDist.at(counter) = streetDist.at(counter) + (abs(Address.at(i) - Address.at(j)));
                    // Equation for the sum of differences ^
            
                    ++j;
            
                }
            
                j = 0;
                ++i;
                ++counter;
            }
        }
    }
    
    counter = 0;
    
        while (counter < numAd){
        
        if (streetDist.at(counter) < dist){ // Compare each distance and set the lowest one = to dist
           
            dist = streetDist.at(counter);
        }
            ++counter;
    }
    
    cout << endl;
    cout << "The minimal sum of differences is = " << dist << endl << endl;
    
    cout << "Would you like to run another test case? (Y/N): ";
    cin >> runProg;
    
    while ((runProg == 'Y') || (runProg == 'y')) {
        
        cout << endl;
        
        vector <int> Address; // Vector for each address
        int counter = 0;
        int j = 0;
        char runProg;
        int numRelatives;
        int dist = 30000; // Set distance variable = 30000 for loop comparison to find minimum distance
        vector <int> streetDist;
        int numAd;
        int i;
        
        cout << "Enter the number of relatives: ";
        cin >> numRelatives;
        
        cout << "Enter the number of address inputs: ";
        cin >> numAd;
        cout << endl;
        
        Address.resize(numAd); // Set the sizes of each vector equal to the number of address inputs
        streetDist.resize(numAd);
        
        for (i = 0; i < Address.size(); ++i) {
            
            cout << "Enter address (" << i + 1 << "): ";
            cin >> Address.at(i);
            
        }
        
        streetDist.at(counter) = 0; // Set the counter = 0, to start the while loops

        for (i = 0; i < Address.size(); ++i){
            for (i = 0; i < streetDist.size(); ++i){
                while (counter < numAd){
                    while (j < numAd){
                        
                        streetDist.at(counter) = streetDist.at(counter) + (abs(Address.at(i) - Address.at(j)));
                        // Equation for the sum of differences ^
                        
                        ++j;
                        
                    }
                    
                    j = 0;
                    ++i;
                    ++counter;
                }
            }
        }
        
        counter = 0;
        
        while (counter < numAd){
            
            if (streetDist.at(counter) < dist){ // Compare each distance and set the lowest one = to dist
                dist = streetDist.at(counter);
            }
            ++counter;
        }
        
        cout << endl;
        cout << "The minimal sum of differences is = " << dist << endl << endl;
        
        cout << "Would you like to run another test case? (Y/N): ";
        cin >> runProg;
        
        if (runProg != 'Y'){
            cout << endl;
            return 0;
        }
        
    }

   
   if ((runProg != 'Y') || (runProg != 'y')) {
        cout << endl;
        return 0;
    }
    
    cout << endl;
    return 0;
}
