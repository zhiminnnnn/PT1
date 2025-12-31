/*
NAME: CHENG ZHI MIN
MATRICS NUMBER: A25CS0050

NAME: NG XUAN YEE
MATRICS NUMBER: A25CS0291

DATE: 1 JANUARY 2026
*/

//header
#include <iostream>
#include <fstream>
using namespace std;

//function to display 52 dashes in a line
void displayLine(){
    for(int i=1; i<=52; i++){
        cout<<"-"; //print 52 dashes in a line
    }
    cout<<endl;
}

//function to find participant with highest total score
int findIndWinner(int totalParticipant[]){
    int highest=0; //assume first participant is the highest
    for(int i=1; i<12; i++){
        if(totalParticipant[i]>totalParticipant[highest])
            highest=i;
    }
    return highest;
}

//function to find team with highest total score
int findTeamWinner(int totalTeam[]){
    int highest=0; //assume first team is the highest
    for(int i=1; i<3; i++){
        if(totalTeam[i]>totalTeam[highest])
            highest=i;
    }
    return highest;
}

int main(){
    ifstream infile("input.txt"); //open input file
    int marks[12][7];
    int totalParticipant[12]={0};
    int totalTeam[3]={0};
    int index=0, sum=0, indWinIndex, teamWinIndex;

    if(!infile){
        cout<<"Sorry, input file does not exist!"<<endl;
        cout<<"Press any key to continue . . .";
        return 0;
    }

    for(int i=0; i<12; i++){
        for(int j=0; j<7; j++){
            infile>>marks[i][j]; //read data from input file
        }
    }
    
    //print table header
    displayLine();
    cout<<"Id\tE1\tE2\tE3\tE4\tE5\tTotal"<<endl;
    displayLine();

    for(int team=1; team<=3; team++){ //3 teams
        cout<<"TEAM "<<team<<endl;

        for(int p=0; p<4; p++){ //4 participants per team
            sum=0;
            cout<<marks[index][1]<<"\t";
            
            for(int j=2; j<7; j++){
                cout<<marks[index][j]<<"\t";
                sum+=marks[index][j];
            }

            cout<<sum<<endl;
            totalParticipant[index]=sum;
            totalTeam[team-1]+=sum;
            index++;
        }
        cout << "TOTAL\t\t\t\t\t\t"<<totalTeam[team-1]<<endl;
        displayLine();
    }
    indWinIndex=findIndWinner(totalParticipant);
    teamWinIndex=findTeamWinner(totalTeam);

    cout<<endl;
    cout<<"Winner for Individual Category: "<<marks[indWinIndex][1]<<" (Team "<<marks[indWinIndex][0]<<")"<<endl;
    cout<<"Winner for Group Category: Team "<<(teamWinIndex+1)<<" (Score = "<<totalTeam[teamWinIndex]<<")"<<endl<<endl;
    cout<<"Press any key to continue . . .";

    infile.close();
    return 0;
}
