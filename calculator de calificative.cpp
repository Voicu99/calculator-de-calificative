// calculator de calificative.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int scor;

    // Cerem utilizatorului să introducă scorul
    std::cout << "Introduceti scorul numeric intre 0 si 100: ";
    std::cin >> scor;

    // Verificăm intervalul scorului și atribuim calificativul corespunzător
    if (scor >= 90 && scor <= 100) {
        std::cout << "Calificativul tau este A.\n";
    }
    else if (scor >= 80 && scor <= 89) {
        std::cout << "Calificativul tau este B.\n";
    }
    else if (scor >= 70 && scor <= 79) {
        std::cout << "Calificativul tau este C." << std::endl;
    }
    else if (scor >= 60 && scor <= 69) {
        std::cout << "Calificativul tau este D." << std::endl; 
    }
    else if (scor < 60 && scor >= 0) {
        std::cout << "Calificativul tau este E." << std::endl;
    }
    else {
        std::cout << "Scorul introdus nu este valid. Te rog sa introduci un scor intre 0 si 100.\n";
    }

    return 0;





 
//char CE_Calculator_Calificativ_()
//{
   // int intScor = 0;
   // char charResult;

    //std::cout << "Introduceti scorul: ";
    //std::cin >> intScor;
    //std::cout << std::endl;

    //if (intScor >= 90 && intScor <= 100) {
        //return 'A';
    //}
    //else if (intScor >= 80 && intScor <= 89) {
        //return 'B';
    //}
   // else if (intScor >= 70 && intScor <= 79) {
        //return 'C';
    //}
   // else if (intScor >= 60 && intScor <= 69) {
       // return 'D';
    //}
    //else if (intScor >= 0 && intScor < 60) {
       // return 'E';
    //}
    //else {
        //std::cout << "Scor invalid !" << std::endl;
        //CE_Calculator_Calificativ_();
    //}
//}

//void CE_OutScore_()
//{
    //char charScore = CE_Calculator_Calificativ_();
    //std::cout << "Calificativul este " << charScore << " !" << std::endl;
//}

//int main()
//{
    // Apelam functia de Log In
    //CE_UserIsLoggedIn_();

    //CE_OutScore_();


   // return 0;
//}﻿



    //std::string ask = "Introduceti scorul obtinut:\n";
    //std::string res = "Calificativul tau este ";
    //int scorObtinut = 0;
    //char c;

    //std::cout << ask;
    //std::cin >> scorObtinut;
    //while (scorObtinut < 0 || scorObtinut > 100)
   // {
       // std::cout << "introduceti un scor valid." << std::endl;
        //std::cin >> scorObtinut;
   // }
    //if (scorObtinut < 60)
    //{
        //c = 'E';
        //std::cout << res << c << std::endl;
   // }
    //else if (scorObtinut >= 60 && scorObtinut <= 69)
    //{
       // c = 'D';
       // std::cout << res << c << std::endl;
    //}
    //else if (scorObtinut >= 70 && scorObtinut <= 79)
    //{
        //c = 'C';
        //std::cout << res << c << std::endl;
    //}
   // else if (scorObtinut >= 79 && scorObtinut && scorObtinut <= 89)
    //{
       // c = 'B';
       // std::cout << res << c << std::endl;
    //}
   // else
    //{
       // c = 'A';
        //std::cout << res << c << std::endl;
   // }
   