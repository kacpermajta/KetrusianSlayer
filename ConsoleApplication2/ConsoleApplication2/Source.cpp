#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	string name;
	string speech;
	string troop;
	int s_army, s_army_l;
	int	s_enemy, s_enemy_l;
	int mid_a_army, mid_a_enemy, flank_a_army, flank_a_enemy;
	int mid_def_army, mid_def_enemy, flank_def_army, flank_def_enemy;
	int mid_a_army_l, mid_a_enemy_l, flank_a_army_l, flank_a_enemy_l;
	int mid_def_army_l, mid_def_enemy_l, flank_def_army_l, flank_def_enemy_l;
	int t1, t2, t3, t4, t5, t6, t7;
	t1 = t2 = t3 = t4 = t5 = t6 = t7 = 0;
	mid_a_army = mid_a_enemy = flank_a_enemy = flank_a_army = 20;
	mid_def_army = mid_def_enemy = flank_def_enemy = flank_def_army = 20;
	mid_a_army_l = mid_a_enemy_l = flank_a_enemy_l = flank_a_army_l = 0;
	mid_def_army_l = mid_def_enemy_l = flank_def_enemy_l = flank_def_army_l = 0;
	s_army = 60;
//	s_enemy = 63;
	s_army_l = s_enemy_l = 0;

	int end = 0;
	
	{
		cout << "Type difficulty:\n (60 is even armies, 80 is most likely unwinable)\n";
		cin >> s_enemy;
		cin.ignore();

		cout << "\nIt's a calm morning, a bit chilly, with skies covered in cluds. \
 There is, no chance of rain. The weather is so beautifull...\n"
			<< "This day, however, will be a witness of the most bloody battle you\
 ever had to fight. "
			<< "\n-Sir- say your massanger- do you want me to bring a word to the Emperor?"
			<< "\n-Yes, I will. Thank you."
			<< "\nGood lad. He might be young, be he is already smart and uses his head when \
 needed. He will go far, if guided properly."
			<< "\nBut it is not a day to think of future. There is a battle to win, and \
 a letter to write.\n\n"
			<< "\"To Emperor Bardon. I encountered Ketrusian army, and I will fight a battle\
 against them today. This may be my last massage, and in that case battle was most likely lost.\""
			<< "\n\nYou look at the massage. It is good, clear and short. No need to waste ink or parchment.\
 All that is left is to sign:\n";
		getline(cin, name);
		cout << "-Here- you say- take it to the capital. Then come to the Hellon outpost,\
 they will tell you where to find us."
			<< "\n-Yes sir!- he saluts and goes to the exit. He hasitates before leaving, turns\
 around, stands at attendion and adds:\
\n-Good luck sir!"
<< "\nYou smile and nod. He nods back and leaves.\
 You look once more at the map and unit list. Terrain is rather plain, not even a hill\
 or tree. There is no concern about that. Units, however, Is a whole different thing.\
\n Your army is made of soldiers from all around the empire, what has it's advantages\
 and drawbacks. Imperial Infantry, they will be good in the middle... Hudrasks, excellent\
 archers, will shower enemy with their arrows, they do it quite efficiently... \
 Nomads, they will wait behind a main lines, and flank Ketrusians in the right moment.\
 \"They will try to flank too\", a thought passes your mind. You alredy have troop\
 selcted to prevent that: Corsairs. Bloodthirsty warriors from the east, fithting with\
 long scythe-like weapons. Not as disciplined as rest of your army, but there are no\
 other unit you would trust so much about protecting your side.\
\nAnd, of course, there are Guards. Your unit. You never liked hiding behind your\
 men's backs, so if needed you will be glad to go into fight yourself\
\n You go outside to look at the camp. Orders were alredy given, and everyone is\
 preparing to move out.\
\n-Are you ready, soldier?- you ask a passing pikeman.\
\n-Yes sir!- he responds with a smile- can't wait to kick some Ketrusian asses!\
\n-Today we will teach them quite a memorable lesson- you respond, also smiling"
<< "\n***\n"
<< "You stand in front of your army. Good lads... and ladies- you quickly add in\
 mind, looking at Amazons. All ready to die for they homes, but still, all prefer to go\
 back to them. And all know it will be possible only if land is safe from Ketrusian\
 invasion.\
\nThey all await a speech. Time to give them one.\n-";
		getline(cin, speech);
		cout << "Whole army responds with cheer.\
\n-Forward!- you scream, and your troops advance. You see enemy lines in the distance.\
\nThis is where war no longer is beautifull. This is time for fight.\n\n";
	}

	
	while (end == 0)
	{



		cout << "Write name of troop you send to fight:";
		getline(cin, troop);
		//your actions code
		if (troop == "Corsairs" || troop == "corsairs")
		{
			t1++;
			if (t1 > 5)
				cout << "Corsairs, unwilling to flee, fought to the last man. There is\
 noone of them left alive.";
			else if (t1>2)
			{

				cout << "Corsairs rush to the flank, but they suffered heavy losses. \
They may not survive next charge.";
				flank_def_army_l = -3;
				s_enemy_l = 1;
			}
			else
			{
				
				cout << "Corsairs rush to the flank, making a massacre among enemy\
 troops. \"Good lads\", you think.";
				flank_a_enemy_l = 1;
				flank_def_army_l = -4;
				s_enemy_l = 2;
			}
		}
		else if (troop == "Imperial Infantry" || troop == "Imperial infantry" || troop == "imperial infantry")
		{
			t2++;
			if (t2 > 5)
				cout << "Proud soldiers stood to the last for their country. Now, only\
tattered banner flies where they gave their lives";
				else if (t2>2)
				{

					cout << "Despite tiredness and casualities, Imperial Infantry stands proud.";

					mid_def_army_l = -4;
				}
				else
				{
					cout << "Imperial Infantry stand firmly in the middle of the battle,\
 making it impossible to pass for enemy";

					mid_a_enemy_l = 1;
					mid_def_army_l = -5;
					s_enemy_l = 1;
				}
		}
		else if (troop == "Archers" || troop == "archers" || troop == "Hudrasks" || troop == "Hudrask archers" || troop == "hudrasks" || troop == "hudrask archers")
		{	
			t3++;
			if (t3 > 5)
				cout << "Archers are out of arrows";
			else if (t3>2)
			{

				cout << "Hudrasks make a volley but Ketrusians, prepared for arrows, raise their shields in defense.";

				s_enemy_l = 4;
			}
			else
			{
				cout << "In a moment you see a swarm of missiles above battlefield,\
 and a moment after several Ketrusian lines fall dead on the ground";
				mid_def_enemy_l = 1;
				flank_def_enemy_l = 1;
				s_enemy_l = 5;
			}
		}
		else if (troop == "Nomads" || troop == "nomads")
		{
			t4++;
			if (t4 > 5)
				cout << "Nomads fled from battlefield";
			else if (t4>2)
			{

				cout << "Ketrusian spearmen moved to the flank, making it harder for riders to attack.";

				flank_def_enemy_l = 3;
				s_enemy_l = 1;
			}
			else
			{

				cout << "A mass of riders in red armours charge apon enemy flanks,\
 taking bloody toll";
				flank_a_army_l = -1;
				flank_def_enemy_l = 4;
				s_enemy_l = 2;
			}
		}
		else if (troop == "Guards" || troop == "guards" || troop == "me" || troop == "Me")
		{
			t5++;
			if (t5 > 3)
			{
				cout << "You see Ketrusians surrounding your position. You are trapped.";
				end = 3;
			}
			else if (t5>1)
			{

				cout << "You rush into battle but enemy, aware you are the commander, sent\
 their strongest forces agains you. You must be carefull";

				mid_a_army_l = -1;
				flank_a_army_l = -1;
				mid_def_enemy_l = 2;
				flank_def_enemy_l = 2;
				s_enemy_l = 1;
			}
			else
			{
				cout << "You charge with your most trusted men. You strike like a thunder,\
 and for a moment enemy runs in a panic from your swords";
				mid_a_army_l = -1;
				flank_a_army_l = -1;
				mid_def_enemy_l = 3;
				flank_def_enemy_l = 3;
				s_enemy_l = 3;
			}
		}
		else if (troop == "Pikemen" || troop == "pikemen")
		{
			t6++;
			if (t6 > 5)
			{
				cout << "Pikemen are no more. Those few lucky who survived scattered run run in panic.";
				
			}
			else if (t6>2)
			{

				cout << "Pikeman attack, but they are exhausted.";

				mid_a_army_l = -1;
				flank_a_army_l = -1;
				s_enemy_l = 2;
			}
			else
			{
				cout << "Pikemen chrarge, piercing their way through enemy ranks. Among\
 them you see soldier you talked to before battle. He is, indeed, kicking asses.";
				mid_a_army_l = -2;
				flank_a_army_l = -2;
				s_enemy_l = 3;
			}
		}
		else {
			cout << troop << ", sent into battle, do their bloody job with pleasure.";
			mid_a_army_l = -1;
			mid_a_enemy_l = 1;
			flank_a_enemy_l = 1;
			flank_a_army_l = -1;
			mid_def_enemy_l = 1;
			flank_def_enemy_l = 1;
			s_enemy_l = 1;
		}
//filler
			cout << "\n";				
//calculations
			mid_a_army -= mid_a_army_l;
			mid_def_army -= mid_def_army_l;
			flank_a_army -= flank_a_army_l;
			flank_def_army -= flank_def_army_l;
			mid_a_enemy -= mid_a_enemy_l;
			mid_def_enemy -= mid_def_enemy_l;
			flank_a_enemy -= flank_a_enemy_l;
			flank_def_enemy -= flank_def_enemy_l;
			s_army -= s_army_l;
			s_enemy -= s_enemy_l;
			mid_a_army_l = mid_a_enemy_l = flank_a_enemy_l = flank_a_army_l = 0;
			mid_def_army_l = mid_def_enemy_l = flank_def_enemy_l = flank_def_army_l = 0;
			s_army_l = s_enemy_l = 0;


//ketrusian actions
			if (s_army < 4)
			{
				cout << "Ketrusians, seeing your army in ruins, charge recklessly\
 crushing any resistance.";
				end = 2;
			}
			else if (s_enemy < 4)
			{
				cout << "Ketrusian forces run from battlefield.";
				end = 1;
				continue;
			}
			else
			{
				cout << "Enemy fights back";
				mid_a_army_l = 1;
				mid_a_enemy_l = -1;
				flank_a_enemy_l = -1;
				flank_a_army_l = 1;
				mid_def_army_l = 1;
				flank_def_army_l = 1;
				s_army_l = 1;
			}
			//advance control
			if((mid_def_army-3)>mid_def_enemy)
			{
				cout << "\nEnemy is unable to break through your lines";
				mid_a_enemy_l += 2;
			}
			else if ((mid_def_army + 3)<mid_def_enemy)
			{
				cout << "\nYou are unable to break through enemy lines";
				mid_a_army_l += 2;
			}
			if ((flank_def_army - 3)>flank_def_enemy)
			{
				cout << "\nEnemy is unable to break through your flank";
				flank_a_enemy_l += 2;
			}
			else if ((flank_def_army + 3)<flank_def_enemy)
			{
				cout << "\nYou are unable to break through enemy flank";
				flank_a_army_l += 2;
			}
			//radosc
			if ((mid_def_army + mid_a_enemy)<40)
			{
				cout << "\nEnemy charges in main battle";
				mid_a_enemy_l -= 1;
			}
			if ((mid_def_enemy + mid_a_army)<40)
			{
				cout << "\nYour army charges in main battle";
				mid_a_army_l -= 1;
			}
			if ((flank_def_army + flank_a_enemy)<40)
			{
				cout << "\nEnemy charges on the flank";
				flank_a_enemy_l -= 1;
			}
			if ((flank_def_enemy + flank_a_army)<40)
			{
				cout << "\nYour army charges on the flank";
				flank_a_army_l -= 1;
			}
			//flankowanie
			if ((mid_a_army + flank_a_enemy)>66)
			{
				cout << "\nKetrusians surrounded your forces!";
				s_army_l += 12;
				mid_def_army_l += 5;
			}
			else if ((mid_a_army+flank_a_enemy)>46)
			{
				cout << "\nKetrusians strike from the flank!";
				s_army_l += 4;
				mid_def_army_l += 2;
			}
			if ((mid_a_enemy + flank_a_army)>66)
			{
				cout << "\nYou surrounded Ketrusian forces";
				s_enemy_l += 12;
				mid_def_enemy_l += 5;
			}
			else if ((mid_a_enemy + flank_a_army)>46)
			{
				cout << "\nYour army strike from the flank!";
				s_enemy_l += 4;
				mid_def_enemy_l += 2;
			}
			//szar¿e
			if (mid_a_army>32)
			{
				cout << "\nYour main army has an exellent morale";
				s_enemy_l += 8;
				mid_def_enemy_l += 6;
			}
			else if(mid_a_army>22)
			{
				cout << "\nYour main army has a good morale";
				s_enemy_l += 4;
				mid_def_enemy_l += 2;
			}
			if (mid_a_enemy>32)
			{
			//	cout << "\nYour main army has an exellent morale";
				s_army_l += 8;
				mid_def_army_l += 6;
			}
			else if (mid_a_enemy>22)
			{
			//	cout << "\nYour main army has a good morale";
				s_army_l += 4;
				mid_def_army_l += 2;
			}
			if (flank_a_army>32)
			{
				cout << "\nYour flank has an exellent morale";
				s_enemy_l += 8;
				flank_def_enemy_l += 6;
			}
			else if (flank_a_army>22)
			{
				cout << "\nYour flank has a good morale";
				s_enemy_l += 4;
				flank_def_enemy_l += 2;
			}
			if (flank_a_enemy>32)
			{
				//	cout << "\nYour main army has an exellent morale";
				s_army_l += 8;
				mid_def_army_l += 6;
			}
			else if (flank_a_enemy>22)
			{
				//	cout << "\nYour main army has a good morale";
				s_army_l += 4;
				flank_def_army_l += 2;
			}
			//deserters
			if (flank_a_army<2 || mid_a_army<2)
			{
				cout << "\nMany of your troops deserted";
				s_army_l += 11;

			}
			else if (flank_a_army<7||mid_a_army<7)
			{
				cout << "\nSome of your troops deserted";
				s_army_l += 4;

			}
			if (flank_a_enemy<2 || mid_a_enemy<2)
			{
				cout << "\nMany Ketrusian troops deserted";
				s_enemy_l += 11;

			}
			else if (flank_a_enemy<7 || mid_a_enemy<7)
			{
				cout << "\nSome Ketrusian troops deserted";
				s_enemy_l += 4;

			}

//filler
			cout << "\n";
//calculations
			mid_a_army -= mid_a_army_l;
			mid_def_army -= mid_def_army_l;
			flank_a_army -= flank_a_army_l;
			flank_def_army -= flank_def_army_l;
			mid_a_enemy -= mid_a_enemy_l;
			mid_def_enemy -= mid_def_enemy_l;
			flank_a_enemy -= flank_a_enemy_l;
			flank_def_enemy -= flank_def_enemy_l;
			s_army -= s_army_l;
			s_enemy -= s_enemy_l;
			mid_a_army_l = mid_a_enemy_l = flank_a_enemy_l = flank_a_army_l = 0;
			mid_def_army_l = mid_def_enemy_l = flank_def_enemy_l = flank_def_army_l = 0;
			s_army_l = s_enemy_l = 0;

//sum up
		//armies
			if (s_army < 5)
				cout << "Your army is in ruins";
			else if (s_army<15)
				cout << "Strengh of your army is failing";
			else if (s_army<35)
				cout << "You suffered heavy losses";
			else
				cout << "Your army stands strong";
			cout <<"\n";
			if (s_enemy < 5)
				cout << "Hostile army is in ruins";
			else if (s_enemy<15)
				cout << "Strengh of enemy army is failing";
			else if (s_enemy<35)
				cout << "Ketrusians suffered heavy losses";
			else
				cout << "Ketrusian army stands strong";
			cout <<  "\n";
		//your areas

			if (mid_a_army < 5)
				cout << "Your main battle flees from enemy. ";
			else if (mid_a_army < 15)
				cout << "Your main battle is pushed back. ";
			else if (mid_a_army < 25)
				cout << "Your main battle struggles to keep position. ";
			else 
				cout << "Your main battle charged deep into enemy. ";
			
			if (mid_def_army < 5)
				cout << "It's discipline is broken.";
			else if (mid_def_army < 15)
				cout << "It is weakening.";
			else if (mid_def_army < 25)
				cout << "It holds line.";
			else
				cout << "It is unbreakable.";
			cout <<  "\n";
			//flank
			if (flank_a_army < 5)
				cout << "Your flank flees from enemy.";
			else if (flank_a_army < 15)
				cout << "Your flank is pushed back.";
			else if (flank_a_army < 25)
				cout << "Your flank struggles to keep position.";
			else
				cout << "Your flank charged deep into enemy.";
			
			if (flank_def_army < 5)
				cout << "It's discipline is broken.";
			else if (flank_def_army < 15)
				cout << "It is weakening.";
			else if (flank_def_army < 25)
				cout << "It holds line.";
			else
				cout << "It is unbreakable.";
			cout << "\n";

		//enemy areas

			if (mid_a_enemy < 5)
				cout << "Ketrusian main battle flees from your forces. ";
			else if (mid_a_enemy < 15)
				cout << "Ketrusian main battle is pushed back. ";
			else if (mid_a_enemy < 25)
				cout << "Ketrusian main battle struggles to keep position. ";
			else
				cout << "Ketrusian main battle charged deep into your forces. ";
			
			if (mid_def_enemy < 5)
				cout << "It's discipline is broken.";
			else if (mid_def_enemy < 15)
				cout << "It is weakening.";
			else if (mid_def_enemy < 25)
				cout << "It holds line.";
			else
				cout << "It is unbreakable.";
			cout << "\n";
			//flank
			if (flank_a_enemy < 5)
				cout << "Ketrusian flank flees from your forces.";
			else if (flank_a_enemy < 15)
				cout << "Ketrusian flank is pushed back.";
			else if (flank_a_enemy < 25)
				cout << "Ketrusian flank struggles to keep position.";
			else
				cout << "Ketrusian flank charged deep into your forces.";
			
			if (flank_def_enemy < 5)
				cout << "It's discipline is broken.";
			else if (flank_def_enemy < 15)
				cout << "It is weakening.";
			else if (flank_def_enemy < 25)
				cout << "It holds line.";
			else
				cout << "It is unbreakable.";

//			cout <<  "\n"<< mid_a_army << " " << mid_a_enemy << " " << mid_def_army << " " << mid_def_enemy;
			cout << "\n\n\n";



	}
	switch (end)
	{
	case 1:
		cout << "\n\n\"To Emperor. Battle was victorius, Ketrusian army is no longer\
 a threat.\n"<<name<<"\"\n";
		break;
	case 2:
		cout << "\nThere is no way to win now. You command full retreat to those\
 few troops still on battlefield. You have to run to fight another day.";
		break;
	case 3:
		cout << "\nSudden strike knocks you to the ground. You are not sure where did\
 it come from or who dealt it. The world slowly falls into darkness, as you fail to\
 remain awake. \nThey say when you die your life passes before your eyes. You can't \
see any of it. Just this uncertain thought: will we win?";
		break;
	default:
		break;
	}
	cout << "\n\ngame ends here, press enter...";
	getline(cin, troop);
	return 0;
}