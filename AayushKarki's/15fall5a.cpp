/* Design a soccer player class three integer fields : playerjersy num, num of goals and number of assist. use
necessary constructor to initialize the data members. Overload > operator. one player is considered greater than
others if the sum of goals plus assist is greater than other player. create an array of 11 soccer player,
then use the overloaded > operator to find the player who has the greatest total goals plus assist*/
#include <iostream>
using namespace std;
class SoccerPlayer
{
public:
    int jerseyNum[11], NumofGoals[11], NumofAssist[11], maxGoalAssist, compare;
    SoccerPlayer()
    {
        cout << "enter the jersey number, number of goal scored and number of assist of 2 player respectively " << endl;
        for (int i = 0; i < 11; i++)
        {
            cin >> jerseyNum[i] >> NumofGoals[i] >> NumofAssist[i];
        }
    }

    void displayInfo()
    {
        for (int i = 0; i < 11; i++)
        {
            cout << endl;
            cout << "jersey num of player " << i + 1 << " : " << jerseyNum[i];
            cout << "\nNo of goals scored by player  " << i + 1 << " : " << NumofGoals[i];
            cout << "\nNo of asssist by player " << i + 1 << " : " << NumofAssist[i];
            cout << endl;
        }
    }
    void operator+()
    {
        maxGoalAssist = NumofAssist[0] + NumofGoals[0];
        for (int i = 0; i < 11; i++)
        {
            compare = NumofAssist[i] + NumofGoals[i];
            if (maxGoalAssist < compare)
            {
                maxGoalAssist = compare;
            }
        }
        cout << "Greates player has scored : " << maxGoalAssist << " goals by him and by his assist in total " << endl;
    }
};

int main()
{
    SoccerPlayer P;
    P.displayInfo();
    +P;
}