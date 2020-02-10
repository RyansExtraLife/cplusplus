/*
 Main written by Ryan Patterson
 Class CIS 278
*/

#include <iostream>

class DrawingPatternsWithNestedLoops{
    public:
    void patternWithNestedLoops(){
        using namespace std;
        
        int counter = 0;
        int recounter = 0;
        int spacecounter =0;
        int spacerecounter =0;
        
        for(counter =1; counter <= 11; counter ++){
            if (counter == 2) cout << "*";
            if (counter == 3) cout << "**";
            if (counter == 4) cout << "***";
            if (counter == 5) cout << "****";
            if (counter == 6) cout << "*****";
            if (counter == 7) cout << "******";
            if (counter == 8) cout << "*******";
            if (counter == 9) cout << "********";
            if (counter == 10) cout << "*********";
            if (counter == 2) cout << "         " << endl;
            if (counter == 3) cout << "        "<< endl;
            if (counter == 4) cout << "       "<< endl;
            if (counter == 5) cout << "      "<< endl;
            if (counter == 6) cout << "     "<< endl;
            if (counter == 7) cout << "    "<< endl;
            if (counter == 8) cout << "   "<< endl;
            if (counter == 9) cout << "  "<< endl;
            if (counter == 10) cout << " "<< endl;
            if (counter == 11){ 
                for (recounter = 1; recounter <=10; recounter ++){
                    if (recounter == 2) cout << "*********";
                    if (recounter == 3) cout << "********";
                    if (recounter == 4) cout << "*******";
                    if (recounter == 5) cout << "******";
                    if (recounter == 6) cout << "*****";
                    if (recounter == 7) cout << "****";
                    if (recounter == 8) cout << "***";
                    if (recounter == 9) cout << "**";
                    if (recounter == 10) cout << "*";
                    if (recounter == 2) cout << " "<< endl;
                    if (recounter == 3) cout << "  "<< endl;
                    if (recounter == 4) cout << "   "<< endl;
                    if (recounter == 5) cout << "    "<< endl;
                    if (recounter == 6) cout << "     "<< endl;
                    if (recounter == 7) cout << "      "<< endl;
                    if (recounter == 8) cout << "       "<< endl;
                    if (recounter == 9) cout << "        "<< endl;
                    if (recounter == 10) cout << "         " << endl;
                    if (recounter == 10){ 
                        for(spacecounter =1; spacecounter <= 10; spacecounter ++){
                            if (spacecounter == 2) cout << " ";
                            if (spacecounter == 3) cout << "  ";
                            if (spacecounter == 4) cout << "   ";
                            if (spacecounter == 5) cout << "    ";
                            if (spacecounter == 6) cout << "     ";
                            if (spacecounter == 7) cout << "      ";
                            if (spacecounter == 8) cout << "       ";
                            if (spacecounter == 9) cout << "        ";
                            if (spacecounter == 10) cout << "         ";
                            if (spacecounter == 2) cout << "*********" << endl;
                            if (spacecounter == 3) cout << "********"<< endl;
                            if (spacecounter == 4) cout << "*******"<< endl;
                            if (spacecounter == 5) cout << "******"<< endl;
                            if (spacecounter == 6) cout << "*****"<< endl;
                            if (spacecounter == 7) cout << "****"<< endl;
                            if (spacecounter == 8) cout << "***"<< endl;
                            if (spacecounter == 9) cout << "**"<< endl;
                            if (spacecounter == 10) cout << "*"<< endl;
                            if (spacecounter == 10){
                                for (spacerecounter =1; spacerecounter <=10; spacerecounter ++){
                                    if (spacerecounter == 2) cout << "         ";
                                    if (spacerecounter == 3) cout << "        ";
                                    if (spacerecounter == 4) cout << "       ";
                                    if (spacerecounter == 5) cout << "      ";
                                    if (spacerecounter == 6) cout << "     ";
                                    if (spacerecounter == 7) cout << "    ";
                                    if (spacerecounter == 8) cout << "   ";
                                    if (spacerecounter == 9) cout << "  ";
                                    if (spacerecounter == 10) cout << " ";   
                                    if (spacerecounter == 2) cout << "*"<< endl;
                                    if (spacerecounter == 3) cout << "**"<< endl;
                                    if (spacerecounter == 4) cout << "***"<< endl;
                                    if (spacerecounter == 5) cout << "****"<< endl;
                                    if (spacerecounter == 6) cout << "*****"<< endl;
                                    if (spacerecounter == 7) cout << "******"<< endl;
                                    if (spacerecounter == 8) cout << "*******"<< endl;
                                    if (spacerecounter == 9) cout << "********"<< endl;
                                    if (spacerecounter == 10) cout << "*********" << endl;        
                                }
                            }
                        }
                    }
                }                 
            }
        }
    }
    
    void patternWithNestedLoopsV2(){
        using namespace std;
        int addingAsterics = 0;
        int subtractingAsterics = 0;
        int addingSpaces =0;
        int subtrackingSpaces =0;
        
        for (addingAsterics =1; addingAsterics <= 10; addingAsterics ++){ 
            if (addingAsterics >=1) cout << "*";
            if (addingAsterics >=2) cout << "*";
            if (addingAsterics >=3) cout << "*";
            if (addingAsterics >=4) cout << "*";
            if (addingAsterics >=5) cout << "*";
            if (addingAsterics >=6) cout << "*";
            if (addingAsterics >=7) cout << "*";
            if (addingAsterics >=8) cout << "*";
            if (addingAsterics >=9) cout << "*";
            if (addingAsterics >=10) cout << "*";
            if (addingAsterics <=10) cout << " " << endl;
            if (addingAsterics == 10){
                for (subtractingAsterics =1; subtractingAsterics <=10; subtractingAsterics++){
                    if (subtractingAsterics <=10) cout <<"*";
                    if (subtractingAsterics <=9) cout << "*";
                    if (subtractingAsterics <=8) cout << "*";
                    if (subtractingAsterics <=7) cout << "*";
                    if (subtractingAsterics <=6) cout << "*";
                    if (subtractingAsterics <=5) cout << "*";
                    if (subtractingAsterics <=4) cout << "*";
                    if (subtractingAsterics <=3) cout << "*";
                    if (subtractingAsterics <=2) cout << "*";
                    if (subtractingAsterics <=1) cout << "*";
                    if (subtractingAsterics <=10) cout << " " << endl;
                    if (subtractingAsterics ==10){
                        for (addingSpaces =1; addingSpaces <=10; addingSpaces ++){
                            if (addingSpaces >=2) cout << " ";
                            if (addingSpaces >=3) cout << " ";
                            if (addingSpaces >=4) cout << " ";
                            if (addingSpaces >=5) cout << " ";
                            if (addingSpaces >=6) cout << " ";
                            if (addingSpaces >=7) cout << " ";
                            if (addingSpaces >=8) cout << " ";
                            if (addingSpaces >=9) cout << " ";
                            if (addingSpaces >=10) cout << " ";
                            if (addingSpaces <=1) cout << "*";
                            if (addingSpaces <=2) cout << "*";
                            if (addingSpaces <=3) cout << "*";
                            if (addingSpaces <=4) cout << "*";
                            if (addingSpaces <=5) cout << "*";
                            if (addingSpaces <=6) cout << "*";
                            if (addingSpaces <=7) cout << "*";
                            if (addingSpaces <=8) cout << "*";
                            if (addingSpaces <=9) cout << "*";
                            if (addingSpaces <=10) cout << "*";
                            if (addingSpaces <=10) cout << "\n";
                            if (addingSpaces == 10){ 
                                for(subtrackingSpaces =1; subtrackingSpaces <=10; subtrackingSpaces ++){
                                    if (subtrackingSpaces <=1) cout << " ";
                                    if (subtrackingSpaces <=2) cout << " ";
                                    if (subtrackingSpaces <=3) cout << " ";
                                    if (subtrackingSpaces <=4) cout << " ";
                                    if (subtrackingSpaces <=5) cout << " ";
                                    if (subtrackingSpaces <=6) cout << " ";
                                    if (subtrackingSpaces <=7) cout << " ";
                                    if (subtrackingSpaces <=8) cout << " ";
                                    if (subtrackingSpaces <=9) cout << " ";
                                    if (subtrackingSpaces >=1) cout << "*";
                                    if (subtrackingSpaces >=2) cout << "*";
                                    if (subtrackingSpaces >=3) cout << "*";
                                    if (subtrackingSpaces >=4) cout << "*";
                                    if (subtrackingSpaces >=5) cout << "*";
                                    if (subtrackingSpaces >=6) cout << "*";
                                    if (subtrackingSpaces >=7) cout << "*";
                                    if (subtrackingSpaces >=8) cout << "*";
                                    if (subtrackingSpaces >=9) cout << "*";
                                    if (subtrackingSpaces >=10) cout << "*";
                                    if (subtrackingSpaces <=10) cout << "\n";
                                }
                            }
                        }
                    }  
                }
            }
        }
    }
};



int main(){

    DrawingPatternsWithNestedLoops Q5_12;
    Q5_12.patternWithNestedLoops();
    
    DrawingPatternsWithNestedLoops Q5_12_2;
    Q5_12_2.patternWithNestedLoopsV2();
    
    return 0;
};
