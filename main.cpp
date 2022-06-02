#include <iostream>

using namespace std;

void x1();
int r;
void x2 ();
char s='x';
bool chekv(int);
bool chekwinnerx ();
bool chekwinnero ();
void gameagain ();

char s1='1';
char s2='2';
char s3='3';
char s4='4';
char s5='5';
char s6='6';
char s7='7';
char s8='8';
char s9='9';


//الداله الرئيسيه
int main()
{
    while (true)
    {
      gameagain ();

    int returngame;
    int timer=0;
    x1();
    while (true)
    {
         if (chekwinnerx ())

       {
            cout << " ------congratulate player \"x\" ----- \n ___ your win ___ \n";
            cout << "if you want finish game .. \n inter -1 \n";
            cout << " if you want play again.. \n inter any number \n";
           cin >>returngame;
           if (returngame==-1)
               return 0;
           else
            main();
       }

      if (chekwinnero ())
      {
           cout << " ------congratulate player \"o\" ----- \n ___ your win ___ \n";
           cout << "if you want finish game .. \n Eilnter -1 \n";
            cout << " if you want  play again.. \n Enter any number \n";
           cin >>returngame;
           if (returngame==-1)
               return 0;

               else
                main();

      }

       if (timer %2 ==0)
       {
           cout <<endl<<"player\"x\"..."<<endl;
          s='x';
       }

    else
    {
         cout <<endl<<"player\"o\"..."<<endl;
        s='o';
    }

    cout << "Enter number from 1 to 9 \n";
    cin >>r;

     while (chekv(r))
           {
            cout << "your number incorrect \n";
            cout << " Enter another number..\n";
            cin >>r;

           }
    x2();
    cout <<endl;

    x1();
    timer++;
    }

    }
    return 0;
}
  // داله الرسم
    void x1()
    {
        cout << "|\t"<<s1<<"\t|\t"<<s2<<"\t|\t"<<s3<<"\t|\n";
        cout << "-------------------------------------------------"<<endl;
        cout << "|\t"<<s4<<"\t|\t"<<s5<<"\t|\t"<<s6<<"\t|\n";
        cout << "-------------------------------------------------"<<endl;
        cout << "|\t"<<s7<<"\t|\t"<<s8<<"\t|\t"<<s9<<"\t|\n";
    }
    void x2()
    {
        switch(r)
        {
            case 1:
                s1=s;
                break;
            case 2:
                s2=s;
                break;
            case 3:
                s3=s;
                break;
            case 4:
                s4=s;
                break;
            case 5:
                s5=s;
                break;
            case 6:
                s6=s;
                break;
            case 7:
                s7=s;
                break;
            case 8:
                s8=s;
                break;
            case 9:
                s9=s;
                break;
        }
    }

// داله التحقق من الرقم اذا كان صحيحا
     bool chekv(int x)
    {
        if (x<1 || x>9)
            return true;

            switch(x)
        {
            case 1:
               if (s1=='1')
                return false;
                break;
            case 2:
               if (s2=='2')
                return false;
                break;
            case 3:
               if (s3=='3')
                return false;
                break;
            case 4:
               if (s4=='4')
                return false;
                break;
            case 5:
               if (s5=='5')
                return false;
                break;
            case 6:
               if (s6=='6')
                return false;
                break;
            case 7:
               if (s7=='7')
                return false;
                break;
            case 8:
               if (s8=='8')
                return false;
                break;
            case 9:
               if (s9=='9')
                return false;
                break;
        }

       return true;
    }

  // x داله التحقق ممن الفائز الاول
   bool chekwinnerx ()
   {
if ( s1=='x'&&s2=='x'&&s3=='x'||s4=='x'&&s5=='x'&&s6=='x'||s7=='x'&&s8=='x'&&s9=='x')
return true;

if ( s1=='x'&&s4=='x'&&s7=='x'||s2=='x'&&s5=='x'&&s8=='x'||s3=='x'&&s6=='x'&&s9=='x')
return true;

if ( s3=='x'&&s6=='x'&&s9=='x'||s1=='x'&&s5=='x'&&s9=='x'||s3=='x'&&s5=='x'&&s7=='x')
return true;


    return false;
   }
   // o داله التحقق من الفائز الثانى
   bool chekwinnero ()

   {
 if ( s1=='o'&&s2=='o'&&s3=='o'||s4=='o'&&s5=='o'&&s6=='o'||s7=='o'&&s8=='o'&&s9=='o')
return true;
 if ( s1=='o'&&s4=='o'&&s7=='o'||s2=='o'&&s5=='o'&&s8=='o'||s3=='o'&&s6=='o'&&s9=='o')
return true;
 if ( s3=='o'&&s6=='o'&&s9=='o'||s1=='o'&&s5=='o'&&s9=='o'||s3=='o'&&s5=='o'&&s7=='o')
return true;


    return false;
   }


   void gameagain ()

   {
       s1='1';
       s2='2';
       s3='3';
       s4='4';
       s5='5';
       s6='6';
       s7='7';
       s8='8';
       s9='9';
   }
