#include <iostream>
#include <string>

using namespace std;

int main()
{
    string mario[] = {
        "                ********",
        "               ************",
        "               ####....#.",
        "             #..###.....##....",
        "             ###.......######              ###            ###",
        "                ...........               #...#          #...#",
        "               ##*#######                 #.#.#          #.#.#",
        "            ####*******######             #.#.#          #.#.#",
        "           ...#***.****.*###....          #...#          #...#",
        "           ....**********##.....           ###            ###",
        "           ....****    *****....",
        "             ####        ####",
        "           ######        ######",
        "##############################################################",
        "#...#......#.##...#......#.##...#......#.##------------------#",
        "###########################################------------------#",
        "#..#....#....##..#....#....##..#....#....#####################",
        "##########################################    #----------#",
        "#.....#......##.....#......##.....#......#    #----------#",
        "##########################################    #----------#",
        "#.#..#....#..##.#..#....#..##.#..#....#..#    #----------#",
        "##########################################    ############"};
    for (int i = 0; i < 22; i++)
    {
        cout << mario[i] << endl;
    }
    return 0;
}