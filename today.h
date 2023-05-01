#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<time.h>
using namespace std;

void today()
{
	system("cls");
const 	char *todayp[]={"YOUR TALENTS WIL BE RECOGNIZED AND SUITABLY REWARDED.",
                      "YOU ARE GOING TO HAVE SOME NEW CLOTHES.",
                      "DO NOT MISTAKE TEMPTATION FOR OPPORTUNITY.",
                      "THE WORLD MAY BE YOUR OYSTER, BUT IT DOESN'T MEAN YOU'LL GET ITS PEARL.",
                      "FLATTERY WILL GO FAR TONIGHT.",
                      "THE GREATEST DANGER COULD BE YOUR STUPIDITY.",
                      "A SECRET ADMIRER WILL SOON SEND YOU A SIGN OF AFFECTION.",
                      "WE CANNOT DO GREAT THINGS; ONLY SMALL THINGS WITH GREAT LOVE. -- MOTHER TERESA.",
                      "YOU WERE BORN WITH THE SKILL TO COMMUNICATE WITH PEOPLE EASILY.",
                      "NONE OF THE SECRETS OF SUCCESS WILL WORK UNLESS YOU DO.",
                      "YOU ARE VERY EXPRESSIVE AND POSITIVE IN WORDS, ACT AND FEELING.",
                      "TRUST YOUR INTUITION. THE UNIVERSE IS GUIDING YOUR LIFE.",
                      "IF YOU WANT THE RAINBOW, YOU MUST TO PUT UP WITH THE RAIN. -- D. PARTON",
                      "A BUG IN THE HAND IS BETTER THAN ONE AS YET UNDETECTED.",
                      "A COMPLEX SYSTEM THAT WORKS IS INVARIABLY FOUND TO HAVE EVOLVED FROM A SIMPLE SYSTEM THAT WORKS.",
                      "A BLACK CAT CROSSING YOUR PATH SIGNIFIES THAT THE ANIMAL IS GOING SOMEWHERE.",
                      "AND NOW THE TIME FOR SOMETHING COMPLETELY DIFFERENT."
                      "THE HARD TIMES WILL BEGIN TO FADE, JOY WILL TAKE THEIR PLACE.",
                      "LIES TODAY.",
                      "SMALL ONES CAN BE JUST AS EFFECTIVE.",
                      "DON'T YOU WISH YOU HAD MORE ENERGY... OR LESS AMBITION?",
                      "FINE DAY FOR FRIENDS.",
                      "O-SO DAY FOR YOU.",
                      "IT IS SO VERY HARD TO BE AN ON-YOUR-OWN-TAKE-CARE-OF-YOURSELF-BECAUSE-THERE-IS-NO-ONE-ELSE-TO-DO-IT-FOR-YOU GROWNUP.",
                      "ITS A VERY *__UN*LUCKY WEEK IN WHICH TO BE TOOK DEAD.",
                      "IT'S ALL IN YOUR HEAD.",
                      "GET A LIFE!",
                      "MANY CHANGES OF MIND AND MOOD; DO NOT HESITATE TOO LONG.",
                      "STAY AWAY FROM CARS TODAY.",
                      "ALL YOUR HARD WORK WILL SOON PAY OFF.",
                      "YOU'LL DIE IN A LOTTLE MORE THAN A MONTH.",
                      "A GOOD TIME TO FINISH UP OLD TASKS.",
                      "YOU DONT REALLY BELIEVE IN FORTUNES.",
                      "STAY AWAKE TILL LATE TODAY.",
                      "YOU'LL BE SURPRISED.",
                      "LET YOUR FOOT LOOSE TODAY!",
                      "YOUR CRUSH WILL MEET TO YOU TODAY.",
                      "YOU NEED SOME FUN IN LIFE.",
                      "WHAT HAPPENED LAST NIGHT CAN HAPPEN AGAIN.",
                      "A FRIEND ASKS ONLY FOR YOUR TIME, NOT YOUR MONEY.",
                      "NEVER TROUBLE TROUBLE UNTIL TROUBLE TROUBLES YOU.",
                      "MISUNDERSTANDING WILL BREAK YOUR FRIENDSHIP SOON.",
                      "YOU HAVE TAKEN YOURSELF TOO SERIOUSLY.",
                      "YOU'RE STUPID.",
                      "YOU HAVE THE CAPACITY TO LEARN FROM MISTAKES.",
                      "YOU'LL LEARN A LOT TODAY."
                      "YOU HAVE UNUSUAL EQUIPMENT FOR SUCCESS, USE IT PROPERLY.",
                      "YOU WILL RECEIVE A FORTUNE COOKIE.",
                      "SOMEONE WILL INVITE YOU TO A KARAOKE PARTY.",
                      "HELP! IM STUCK INSIDE THE FORTUNE TELLER!",
                      "THERE IS NO MISTAKE SO GREAT AS THAT OF BEING ALWAYS RIGHT.",
                      "SOMEONE THINKS YOU ARE WONDERFULLY MYSTERIOUS",
                      "A TUB AND A RUB WILL CHANGE YOUR DAY.",
                      "EAT YOUR VEGETABLE AND YOU WILL BE STRONG LIKE POPEYE.",
                      "A CLOSED MOUTH GATHERS NO FEET.",
                      "YOU WILL MAKE A GREAT LAWYER.",
                      "IF YOU THINK YOU’RE TOO SMALL TO BE EFFECTIVE, YOU’VE NEVER BEEN IN BED WITH A MOSQUITO.",
                      "A ROLLING STONE GATHERS NO MOSS.",
                      "YOU CAN ALWAYS FIND HAPPINESS AT WORK ON FRIDAY.",
                      "A FANATIC IS ONE WHO CAN'T CHANGE HIS MIND, AND WON'T CHANGE THE SUBJECT.",
                      "HE WHO LAUGHS AT HIMSELF NEVER RUNS OUT OF THINGS TO LAUGH AT.",
                      "FLATTERY WILL GO FAR TONIGHT.",
                      "HE WHO FARTS IN CHURCH, SITS IN HIS OWN PEW!",
                      "YOU WILL RECEIVE A FORTUNE.",
                      "SING AND REJOICE, FORTUNE IS SMILING ON YOU.",
                      "YOU HAVE THE RARE ABILITY TO RECOGNIZE ABILITY IN OTHERS.",
                      "LIFE TO YOU IS A DASHING AND BOLD ADVENTURE.",
                      "THE TIME IS RIGHT TO MAKE NEW FRIENDS.",
                      "YOU WILL MAKE A SUDDEN RISE IN LIFE.",
                      "SOMEONE FROM YOUR PAST HAS RETURNED TO STEAL YOUR HEART.",
                      "YOU DISPLAY THE WONDERFUL TRAITS OF CHARM AND COURTESY.",
                      "HAPPINESS ALWAYS ACCOMPANIES WITH YOU.",
                      "YOUR HEART IS PURE, AND YOUR MIND CLEAR, AND SOUL DEVOUT.",
                      "WHEN WINTER COMES HEAVEN WILL RAIN SUCCESS ON YOU.",
                      "YOU WILL HAVE A FINE CAPACITY FOR THE ENJOYMENT OF LIFE.",
                      "YOU WILL ENJOY GOOD HEALTH.",
                      "ACCEPT THE NEXT PROPOSITION YOU HEAR.",
                      "YOU SHOULD BE ABLE TO UNDERTAKE AND COMPLETE ANYTHING.",
                      "IN GOD WE TRUST ALL OTHERS MUST PAY CASH.",
                      "THESE THREE GO TOGETHER:\nYOU WILL BE CALLED UPON TO HELP A FRIEND IN TROUBLE.\nDON'T LET FRIENDS IMPOSE ON YOU, WORK CALMLY AND SILENTLY.\nYOUR ROAD WILL BE MADE SMOOTH FOR YOU BY GOOD FRIENDS.",
                      "YOU WILL ALWAYS BE SUCCESSFUL IN YOUR PROFESSIONAL CAREER.",
                      "THERE IS NO WISDOM GREATER THAN KINDNESS.",
                      "YOU LEAD A USEFUL LIFE NO MATTER WHAT RICHES ARE COMING TO YOU.",
                      "YOUR MIND IS CREATIVE, ORIGINAL AND ALERT.",
                      "YOU COULD PROSPER IN THE FIELD OF MEDICAL RESEARCH.",
                      "YOU ARE A HAPPY MAN.",
                      "YOUR PRESENT PLANS ARE GOING TO SUCCEED.",
                      "A PLEASANT SURPRISE IS WAITING FOR YOU.",
                      "THESE TWO GO TOGETHER:\nYOU HAVE MUCH SKILL IN EXPRESSING YOURSELF TO BE EFFECTIVE.\nYOU HAVE GREAT SKILL IN EXPRESSING YOURSELF TO BE EFFECTIVE.",
                      "YOUR HOME IS A PLEASANT PLACE FROM WHICH YOU DRAW HAPPINESS.",
                      "A VISIT TO A MUSEUM WILL BRING YOU A NEW SENSE OF APPRECIATION.",
                      "YOUR GOOD DEEDS ARE NEVER FORGOTTEN.",
                      "IT'S TIME YOU ASKED THAT SPECIAL SOMEONE OUT ON A DATE.",
                      "THE WORLD IS ALWAYS READY TO RECIEVE TALENT WITH OPEN ARMS.",
                      "WISH YOU A LONG LIFE.",
                      "YOU WILL HAVE A LONG AND HEALTHY LIFE.",
                      "HAPPINESS IS FOUND WHEN ONE IS NOT LOOKING.",
                      "SOMEONE HAS COMPLEMENTED YOU TODAY IN YOUR ABSENCE.",
                      "YOU WILL BECOME BETTER ACQUAINTED WITH A COWORKER.",
                      "Look before you leap",
};

int x=0;
cout<<"\n";
cout<<setw(60)<<"YOURS   TODAY";
cout<<"\n \n";
for(int i=0;i<3;i++)
{

srand((unsigned) time(NULL));
int n=rand()%100-3+x;
cout<<setw(60)<<"\n___________________________________________________________________________________________\n";
cout<<setw(60)<<todayp[n];
cout<<setw(60)<<"\n___________________________________________________________________________________________";
cout<<"\n";
x++;
}
}