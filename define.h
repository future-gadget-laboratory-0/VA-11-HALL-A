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
};


#define move_rate 1000;
#define deviation 5;
