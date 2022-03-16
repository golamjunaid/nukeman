#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
    system("cls");
     std::cout << "\n\nCurrent Level  " << Difficulty;

    std::cout << std::endl << std::endl;
    std::cout << "MUAHAHAHA! I, The Mad Atomaniac have set my nuclear bomb to detonate on Gingapoor!!\n";
    std::cout << "the ONLY way you can stop it is by solving my riddle!\n\n";
    std::cout << "Solver! Help us! You must get the correct codes to save the city!, Mlilions of lives are in your hands!\n"; //A random citizen crying out for help
}


bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);
    
    
    // Declaration of numbers code
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;

    const int CodeProduct = CodeA * CodeB * CodeC;

    //Printing of said code
    std::cout << "\n";
    std::cout << "Riddle me THIS solver!\n";
    std::cout << std::endl;
    std::cout << "+If there are 3 numbers in the code...\n";
    std::cout << "+And once we add them together we get " << CodeSum << std::endl;
    std::cout << "+But if we mutiply them it results in " << CodeProduct << std::endl;

    // Store Player
    int GuessA, GuessB, GuessC;

    std::cin >> GuessA >> GuessB >> GuessC;
    

   

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the players guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\n*** Well done on clearing this level!***";
        return true;
    }
    else
    {
        std::cout << "\nYou lost Solver! HAHAHA!\n\n";
        std::cout << "~The enitre city of Gingapoor has been vapourised.~\n";
        std::cout << "\n*** You entered the wrong codes, Try again.***";
        return false;

    }
}


int main()
{
    srand(time(NULL));

    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;

    while (LevelDifficulty <= MaxDifficulty) // Loop game until all levels cleared
    {
        
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Cleanrs any errors
        std::cin.ignore(); // Discards the buffer

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
        

    }
    
    std::cout << "\n*** Congratulations you have cleared all the levels and saved the city!***\n";

    
    
    return 0;
}