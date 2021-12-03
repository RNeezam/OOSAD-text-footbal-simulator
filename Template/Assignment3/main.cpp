#include "DefaultHeaderFiles.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	srand(time(NULL));
	int selection;
	cout<<"#####################################################################"<<endl;
	cout<<"#                         Football Simulation                       #"<<endl;
	cout<<"#####################################################################"<<endl<<endl;
	cout<<"Football Match : [Barcelona F.C] vs [Real Madrid F.C]"<<endl<<endl;
	cout<<"Please choose the type of Stadium: "<<endl;
	cout<<"1 = Classic Stadium, 2 = Standard Stadium "<<endl<<endl;
	cout<<"Please input ur choice : ";
	cin>>selection;
	Director director;
	StadiumBuilder* builder;
	if(selection == 1)
	{
		builder = new ClassicStadium();
	}
	else if(selection == 2)
	{
		builder = new StandardStadium();
	}	
	director.SetBuilder(builder);
	director.Build();
	
	Ball ball;
	ball.InitializePosition(builder);
	Team* team1 = new Team("Team 1");
	Manager* manager1 = new Manager("Manager 1");
	team1->SetField(builder);
	team1->RandomizeFieldPosition();
	manager1->setTeam(team1);
		
	Team* team2 = new Team("Team 2");
	Manager* manager2 = new Manager("Manager 2");
	team2->SetField(builder);
	team2->RandomizeFieldPosition();
	manager2->setTeam(team2);

	Observer* referee = new Referee(builder,&ball);
	system("CLS");
	director.Display();
	
	int choice;
	
	do
	{	
		cout<<"Enter 1 to Kick the ball."<<endl;
		cout<<"Enter 2 to Exit the Simulator"<<endl;
		cout<<"Please input your choice : ";
		cin>>choice;
		if(choice == 1)
		{
			ball.ChangePosition(builder);
			system("CLS");
			ball.Detach();
			manager1->getBallPosition(ball.getXpos());
			manager2->getBallPosition(ball.getXpos());
			director.Display();
			ball.Attach(manager1);
			ball.Attach(manager2);
			for(int i=0;i<team1->playerList.size();i++)
			{
				if(team1->playerList[i]->getFieldPositionX()<ball.xPos+3 && team1->playerList[i]->getFieldPositionX() >ball.xPos-3 
					&& team1->playerList[i]->getFieldPositionY() > ball.yPos-3 && team1->playerList[i]->getFieldPositionY() < ball.yPos+3)
				{
					ball.Attach(team1->playerList[i]);
				}
			}
			for(int i=0;i<team2->playerList.size();i++)
			{
				if(team2->playerList[i]->getFieldPositionX()<ball.xPos+3 && team2->playerList[i]->getFieldPositionX() >ball.xPos-3 
					&& team2->playerList[i]->getFieldPositionY() > ball.yPos-3 && team2->playerList[i]->getFieldPositionY() < ball.yPos+3)
				{
					ball.Attach(team2->playerList[i]);
				}
			}
			ball.Attach(referee);
			ball.Notify();
			cout<<endl<<endl;
		}
		else if(choice == 2)
		{
			exit(0);
		}
	}while(choice != 99);
	
	system("PAUSE");
	return 0;
}


