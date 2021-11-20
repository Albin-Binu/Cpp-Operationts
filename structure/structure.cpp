
// it's only for study purpose...


#include <iostream> // input-output stream
#include <cstdio> // for functions
using namespace std;
struct student // for defining

{
  int reg_no;
  char name[20];
  short ce;
  short pe;
  short te;
};
int main()
{

   student s;
   int tot_score;
   cout<<"enter your register number:";
   cin>>s.reg_no;
   fflush (stdin);

   cout<<"enter your name";
   cin>>(s.name);
   cout<<"enter your scores in CE PE and TE:";
   cin>>s.ce>>s.pe>>s.te;
   tot_score=s.ce+s.pe+s.te;
   cout<<"enter your register number: "<<s.reg_no;
   cout<<"Name of Student: "<<s.name";
   cout<<"CE score: "<<s.ce"TPE Score: <<s.pe<<"TE score: "<<s.te;
   cout<<"Total Score: "<<tot_score;
   return 0;
}
