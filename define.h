#include <math.h>

struct actor_property
{
	int HP;//Actor's Health
	int MP;//Actor's Magic
	int STA;//Actor's endurance
	int MHP;//Actor's MaxHP
	int MMP;//Actor's MaxMP
	int MSTA;//Actor's MAXendurance
	int RHP;//Actor's Regeneration;
	int RMP;//Actor's Regeneration;
	int RSTA;//Actor's Regeneration;
	int EVA;//Actor's evation
	int SPE;//Actor's Speend
	int ACC;//Actor's additional accuracy
	int ATK;//Actor's attack
	int ATKM;//Actor's spell attack
	int ATKS;//Actor's Sacred injury
	int DEF;//Actor's defence
	int RES;//Actor's spell defence
	int RDR;//Actor's reduction ratio
	int	BP;	//Battering rate
	int	ATR;//Attack range;
	int RET;//Actor's Resurrection time
	int TYPE;//Actor's type
};
//1000000 mouse; 1000001 Catherine ;100001 bullet

#define move_rate 1000;
#define deviation 5;
#define bulletspeed 50;

enum class Player{
	one = 1,
	two = 2,
	three=3,
	four=4,
	five=5,
	six=6,
	seven=7,
	eight=8,
	nine=9,
	ten=10
};

enum class Character {
	Catherine = 1,
	nighttide = 2,
	three = 3,
	four = 4,
	five = 5,
	six = 6,
	seven = 7,
	eight = 8,
	nine = 9,
	ten = 10
};