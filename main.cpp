#include <iostream>
#include <conio.h> //consule input output library
/* add aditional information to discern where two functions may have the same name.
 and  make all things under the std namespace available without having to prefix */
using namespace std;
//True or false statement for game over
bool gameOver;

//create the variables for the map/canvas dimensions
const int width = 20;
const int height = 20;
//create the snake head position & the fruit it will eat. 
int x, y, fruitX, fruitY, score;
//track the direction of the snake
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

//create all the main functions
void Setup(){
    //at the beining the direction is stop
    gameOver = false;
    dir = STOP;
    // center the snake head on the map
    x = width / 2;
    y = height / 2;
    //create a random number for the position of the fruit the snake will eat.
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;

}

void Draw(){
    //clear the screen and draw a map, using terminal output. 
    system("clear");
    //print put the top block for the canvas
    for (int i = 0; i < width+2; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++ )
        {
            if ( j == 0)
                cout << "#";
            if (i == y && j == x)
                cout << "O";
            else if (i == fruitY && j == fruitX)
                cout << "F";
            else
                cout << " ";

            if ( j == width - 1)
                cout << "#";
        }
        cout << endl;
    }

    for (int i = 0; i < width+2; i++)
        cout << "#";
    cout << endl;
}

void Input(){
    // use asynchronous functions
    if (_kbhit()) //positive value is returned if keyboard is pressed, 0 if not.
    {

    }

}

void Logic(){


}

int main(){
    Setup();
    while (!gameOver){
        Draw();
        Input();
        Logic();
        //Sleep(10); - slows the game a little
    }
    return 0;
}