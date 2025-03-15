#include<iostream>
using namespace std;

struct player{ 
	string name;
	int score;
	int level;
};
	
	void displayplayer(const player&p){
		cout<<"player name: "<<p.name<<endl;
		cout<<"player score: "<<p.score<<endl;
		cout<<"player level: "<<p.level<<endl;
	}
	
	int main() {
    player player1 = {"Kangethe", 50, 25};
    player player2 = {"Mutiso", 40, 25};

    displayplayer(player1);
    displayplayer(player2);

    player player3;  

    cout << "Input player name: ";
    cin >> player3.name;

    cout << "Input player score: ";
    cin >> player3.score;

    cout << "Input level attained: ";
    cin >> player3.level;

    cout << "\nDisplaying new player details:\n";
    displayplayer(player3);  

    return 0;
}
