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
	float CDS;//Actor's st skill cool down
	float CDN;//Actor's nd skill cool down
	float CDR;//Actor's rd skill cool down
	float CDF;//Actor's fo skill cool down
	float CDA;//Actor's fo Attack cool down
};
//1000000 mouse;100001 bullet of Player one;200001 player one
//1000001 Catherine//deleted
#define move_rate 1000;
#define deviation 5;
#define bulletspeed 100;
#define Castinterval 0.1;

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

enum class BULLET {
	one = 100001,
	two = 100002,
	three = 100003,
	four = 100004,
	five = 100005,
	six = 100006,
	seven = 100007,
	eight = 100008,
	nine = 100009,
	ten = 100010
};