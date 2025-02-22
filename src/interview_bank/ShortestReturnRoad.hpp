#include "src/utilities/CommonHeaders.hpp"

/**
  @remark 
   Synopsys (No.2 of 3), Microsoft
  @details
    You want to visit your friend, who lives abroad. It is time to plan the whole journey, both there and back. The trip will be long, so you would like to make it interesting. You do not want to revisit the same places or go along the same paths twice. Also, you do not have much time, so you do not want to head back from any point.
    You will represent your planned path by a string containing four letters: 'N' for north, 'S' for south, 'E' for east and 'W' for west. For example, a path going north, east, east, north, west, south would be notated as "NEENWS".
    You have already made a plan of the outward part of your journey. How will you plan the shortest path back home, fulfilling the criteria described above?
    Write a function:
    string solution(string &forth);
    that, given a string forth of length N, which denotes the path leading to your friend, returns one of the shortest possible paths back home and fulfils the above conditions. You can assume that you are heading north at both the beginning and the end of the first part of your journey (the first and the last element in forth are equal to 'N'). Moreover, forth does not contain any occurrence of the letter 'S'.
   @example
   1. forth = "NEENWN", return "WWSSSE" or "WSWSSE"
   2. forth = "NWNENWNEN", return "ESSSSSW"
   3. forth = "NENENWWWWN", return "WSSSSEEE"
 */

class ShortestReturnRoad {
public:
    static string GetTestArg(TestCase caseIdx);

    string operator()(const string &forth);
};