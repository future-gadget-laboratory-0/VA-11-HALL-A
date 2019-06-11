#include <math.h>

struct actor_property
{
	int HP=0;//Actor's Health
	int MP=0;//Actor's Magic
	int STA=0;//Actor's endurance
	int MHP=0;//Actor's MaxHP
	int MMP=0;//Actor's MaxMP
	int MSTA=0;//Actor's MAXendurance
	int RHP=0;//Actor's Regeneration;
	int RMP=0;//Actor's Regeneration;
	int RSTA=0;//Actor's Regeneration;
	int EVA=0;//Actor's evation
	int SPE=0;//Actor's Speend
	int ACC=0;//Actor's additional accuracy
	int ATK=0;//Actor's attack
	int ATKM=0;//Actor's spell attack
	int ATKS=0;//Actor's Sacred injury
	int DEF=0;//Actor's defence
	int RES=0;//Actor's spell defence
	int RDR=0;//Actor's reduction ratio
	int	BP=0;	//Battering rate
	int	ATR=0;//Attack range;
	int	ATRS = 0;//Spell st range;
	int	ATRN= 0;//Spell nd range;
	int	ATRR = 0;//Spell rd range;
	int	ATRT = 0;//Spell th range;
	int	MCS = 0;//Mana cost st
	int	MCN= 0;//Mana cost st
	int	MCR = 0;//Mana cost st
	int	MCT = 0;//Mana cost st
	float ATS = 0;//Attack speed;
	int RET=0;//Actor's Resurrection time
	int TYPE=0;//Actor's type
	float CDS=0;//Actor's st skill cool down
	float CDN=0;//Actor's nd skill cool down
	float CDR=0;//Actor's rd skill cool down
	float CDF=0;//Actor's fo skill cool down
	float CDA=0;//Actor's fo Attack cool down
	int LEVEL = 1;
	int EXP = 0;
};
//1000000 mouse;100001 bullet of Player one;200001 player one;100002 bullet of Player one's durable bullet;//10000000 red tower 10000012 red crystal 10000007 blue tower 10000013 blue crystal 
//1000001 Catherine//deleted
#define move_rate 500;//500
#define deviation 5;
#define bulletspeed 100;
#define Castinterval 0.2;
#define mousemoverange 20;
#define attackspeed 1;

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