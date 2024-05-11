#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<iostream>
#include<stdint.h>
#include<stdlib.h>
// #include<dos.h>
#include<direct.h>
#include<iomanip>
#include<fstream>
#include<windows.h>
// user define header files
//#include"learner.h"
//#include"Voice.h"

using namespace std;

int J=0,i,xx,a;
char dii[3];

class chatbot
{
    private:
        char n[50],k[50],s[50],di[3],dii[3];
        char user_input[10];
        int d;
        char cap[20];
        char cap2[20];
        int t=0,a,T;

    public:
        void loading();
        void disp();
        void chat();
        void captcha();
        void work();
        void delay();
};

void chatbot::loading()
{
    system("cls");

	    system("Color 0A ");
	    cout<<"\n\n\n\n\n\n\n\n\n\n";
	    cout<<"\t\t\t\t\t";
	    printf("L");
		 Sleep(70);
	    printf("O");
		 Sleep(70);
	    printf("A");
		 Sleep(70);
	    printf("D");
		 Sleep(70);
	    printf("I");
	     Sleep(70);
	    printf("N");
         Sleep(70);
	    printf("G ");
         Sleep(70);
    for (i = 0; i < 40; i++)
	  {
	    printf("%c",219);
	    Sleep(70);
	  }
	  printf("\a ");
}

void chatbot::captcha()
{
    system("cls");
    system("Color 0A ");
    printf("\n\t\t\t\t\t\tWellcome to AI CHATBOT\t\t\t\t\n");
    Sleep(1000);
  HI:
    cout<<"\n\n\n\t\t\t\t\t\t ARE YOU A ROBOT..?\n\n\n";
    cout<<"\t\t\t\t\tYES                               NO \n\t\t";
    gets(di);
    if(strcmp(di,"no")==0||strcmp(di,"No")==0)
    {
        system("cls");
    }
    else if(strcmp(di,"yes")==0||strcmp(di,"Yes")==0)
    {
        system("cls");
        cout<<"Ok TEN BYE....!";
        Sleep(800);
        exit(0);
    }
    else //if(strcmp(di,"no")==1||strcmp(di,"No")==1||strcmp(di,"yes")==1||strcmp(di,"Yes")==1)
    {
        system("cls");
        goto HI;
    }

    printf("\n\t\tEnter the lines written in the IMAGE displayed\n ");
        //PlaySound(TEXT("please.wav"),NULL,SND_SYNC);
    Sleep(1000);
    system("start https://unsplash.com/photos/mRMQwK513hY");
    printf("\n\t\tENTER THE LINES :\n\t\t\t\t");
    gets(cap);

    if(strcmp(cap,"go up and never stop")==0||strcmp(cap,"1234"))
        {
            system("cls");
            system("Color 0F");
            Sleep(500);
            system("Color 0A");
            Sleep(500);
            system("Color 0F");
            printf(" \n OK, Your are not a ROBOT ! \n");
            system("Color 0A");
        }
    else if(strcmp(cap,"go up and never stop")==1)
        {
            system("cls");
            system("Color 0F");
            Sleep(500);
            system("Color 0A");
            Sleep(500);
            system("Color 0F");
            printf("\n\n\n\n\t\t\t\t\t please try again\n");
            system("Color 0A");
            Sleep(700);
            system("cls");
            printf("\n\t\tEnter the lines written in the IMAGE displayed\n ");
               // PlaySound(TEXT("please.wav"),NULL,SND_SYNC);
            Sleep(1000);
            system("start https://unsplash.com/photos/MGKGuMP9nLY");
            // J++;
            printf("\n\t\tENTER THE LINES :\n\t\t\t\t");
            gets(cap2);
        }

    if(strcmp(cap2,"good vibes only")==1)
        {
            system("cls");
            printf("\n\t\tYOUR REQUEST HAS BEEN DECLINED ! \n");
            system("Color 0A");
            printf("\n\t\tProject Terminated !!!!!! \n\n");
            Sleep(1000);
            exit(0);
        }
        else if(strcmp(cap2,"good vibes only")==0)
        {
            system("cls");
            printf(" \n OK, You are not a ROBOT ! \n");
            printf("WELLCOME>>>");
            system("cls");
        }
}

void chatbot::disp()
{
            time_t s,val=1;
            struct tm* current_time;
            // time in seconds
            s = time(NULL);
            current_time = localtime(&s);
            // print time in minute
            // print hour and seconds
            cout<<"\t\t\t\t\t\t\t\t\t\t\t";
            printf("%02d:%02d:%02d\n",current_time->tm_hour,
            current_time->tm_min,
            current_time->tm_sec);
}

void chatbot::chat()
{
    // textcolor(LIGHTBLUE);
    system("Color 0A");
    Sleep(500);
    system("Color 0F");
    Sleep(500);
    system("Color 0A");
    cout<<"\n";
    cout<<"\t\t";
    cout<<"comp : Hello, I am AIRI. A virtual AI bot. MAY I KNOW YOUR NAME?";
    //PlaySound(TEXT("namehello.wav"),NULL,SND_SYNC);
    cout<<"\n";
    cout<<"\t\t";
    cout<<"YOU  : ";

 HE : cin.getline(n,50);
    {
        if(strcmpi(n,"Hello")==0&&t==0||strcmpi(n,"Hi")==0&&t==0||strcmpi(n,"ok")==0&&t==0)
        {
            t++;
            cout<<"\t\t";
            cout<<"comp : Your NAME please! NOT a greeting!";
            //PlaySound(TEXT("notgreeting.wav"),NULL,SND_SYNC);
            cout<<"\n";
            cout<<"\t\t";
            cout<<"YOU  : ";
            goto HE;
        }
        else if(strcmp(s,"exit")==0||strcmp(s,"Exit")==0)
        {
            cout<<"\t\t";
            system("cls");
                cout<<"\n\t\t";
                cout<<"Ok THEN BYE....!";
                Sleep(800);
                exit(0);
        }
        else if(strcmpi(n,"Hello")==0&&t==1||strcmpi(n,"hi")==0&&t==1||strcmpi(n,"ok")==0&&t==1)
        {
            cout<<"\t\t";
            cout<<"COMP : Fine Your name is ";
           // PlaySound(TEXT("ifthat2.wav"),NULL,SND_SYNC);
            cout<<n;
            cout<<" \n\t\t\t\t[stubborn humans] ";
           // PlaySound(TEXT("human2.wav"),NULL,SND_SYNC);
            cout<<"\n";
            goto kelu;
        }
    }

 kelu :
    cout<<"\t\t";
    cout<<"COMP : what would you like me to call you ,  ";
    //PlaySound(TEXT("callyou.wav"),NULL,SND_SYNC);
    cout<<(n);
    cout<<("?");
    cout<<"\n";
    cout<<"\t\t";
    cout<<("YOU : ");
    cin.getline(k,50);
    system("cls");
    chatbot B;
    B.disp();
    cout<<"\n";
    cout<<"\t\t";
    cout<<("COMP : HELLO ");
    cout<<(k);
    cout<<(" ");
    cout<<(n);

 AAA :
    cout<<endl;
    B.disp();
    cout<<endl;
    cout<<"\t\t";
    cout<<strupr(k);
    cout<<" : ";
    chatbot A;
    //A.delay();
    gets(s);
    if(strcmp(s,"Hello")==0||strcmp(s,"Hi")==0||strcmp(s,"hey")==0||strcmp(s,"hi")==0||strcmp(s,"hello")==0)
    {
        cout<<"\t\t";
        cout<<("COMP : haven't we met ?");
        //PlaySound(TEXT("haventwe.wav"),NULL,SND_SYNC);
        cout<<endl;
        cout<<"\t\t";
        cout<<(strupr(k));
        cout<<(" : ");
       // cout<<"\t\t";
        gets(s);
        if(strcmp(s,"yes")==0||strcmp(s,"Yeah")==0||strcmp(s,"yes")==0||strcmp(s,"ya")==0)
        {
            cout<<"\t\t";
            cout<<("COMP : Don't Play Games With Me ");
            //PlaySound(TEXT("dont2.wav"),NULL,SND_SYNC);
            goto AAA;
        }
        else if(strcmp(s,"No")==0||strcmp(s,"no")==0)
        {
            cout<<"\t\t";
            cout<<("COMP : I KNOW who you are \n \t\t\t\t YOU ARE : ");
            //PlaySound(TEXT("know.wav"),NULL,SND_SYNC);
            cout<<(n);
            cout<<(" \n\t\t\t\t YOU are irritating");
            Sleep(500);
           // PlaySound(TEXT("irritating2.wav"),NULL,SND_SYNC);
            goto AAA;
        }
        else
        {
            cout<<"\t\t";
            cout<<"COMP : Pardon ME? I did't get you "<<endl;
            cout<<"\t\t";
            cout<<"COMP : Try using : "<<endl;
            cout<<"\t\t\t LearnerBot mode "<<endl;
            cout<<"\t\t\t WORK mode "<<endl;
            goto AAA;
        }
    }
    if(strcmp(s,"ok")==0||strcmp(s,"Ok")==0)
    {
        cout<<"\t\t";
        cout<<("COMP : Ya ever things Ok.....");
        cout<<(n);
        Sleep(500);
        goto AAA;
    }
    if(strcmp(s,"how are you")==0||strcmp(s,"How are you")==0)
    {
        cout<<"\t\t";
        cout<<("COMP : I am always Happy! How are you?");
        //PlaySound(TEXT("happy2.wav"),NULL,SND_SYNC);
        goto AAA;
    }
    if(strcmp(s,"I am good")==0||strcmp(s,"fine")==0)
    {
        cout<<"\t\t";
        cout<<("COMP : NICE......!");
       // PlaySound(TEXT("nice2.wav"),NULL,SND_SYNC);
        goto AAA;
    }
    if(strcmp(s,"whats next")==0||strcmp(s,"Ok")==0)
    {
        cout<<"\t\t";
        cout<<("COMP : Nothing much");
        goto AAA;
    }
    if(strcmp(s,"what can you do")==0||strcmp(s,"can you do me a work")==0||strcmpi(s,"work")==0||strcmpi(s,"WORK")==0||strcmpi(s,"work mode")==0)
    {
        cout<<"\n\t\t";
       cout<<" Yes , OFFCOURSE....\n";
       J++;
       work();
    }
    if(strcmp(s,"learner bot")==0||strcmp(s,"learnerBot")==0||(strcmp(s,"can you learn something")==0||strcmp(s,"Learner Bot")==0))
    {
            //Learner AI;
            int kkj=0;
        for(;;)
        {
            cout<<"\n\t\t";
            cout <<"YOU : ";
            string exit ="exit";
            string phrase;
            getline(cin,phrase);
            if(phrase==exit)
            {
                cout<<"EXITING THE LEARNER  "<<endl;
                kkj++;
                break;
            }
            else if(kkj==0)
            {
            cout<<"\n\t\t";
            cout << "COMP : ";
            //AI.respond(phrase);
            }
        }
        cout<<"exited"<<endl;
        Sleep(400);
        goto AAA;
    }
    if(strcmp(s,"exit")==0||strcmp(s,"Exit")==0)
    {
        cout<<"\t\t";
        system("cls");
            cout<<"\n\t\t";
            cout<<"Ok THEN BYE....!";
            Sleep(800);
            // exit(0);
        // cout<<("COMP : I am always Happy! How are you?");
        // PlaySound(TEXT("happy2.wav"),NULL,SND_SYNC);
        // goto AAA;
    }
    else
    {
        cout<<"\t\t";
        cout<<"COMP : Pardon ME? I didn't get you"<<endl;
        cout<<"\t\t";
        cout<<"COMP : Try using : "<<endl;
        cout<<"\t\t\t LearnerBot mode "<<endl;
        cout<<"\t\t\t WORK mode "<<endl;
        goto AAA;
    }

}

void chatbot::work()
{
    J++;
    system("cls");
    while(1)
    {
     work2 :
        printf("\n\t\tWhat can I D0 For You ...?\n");
        system("Color 0A");
        Sleep(500);
        system("Color 0F");
        Sleep(500);
        system("Color 0A");
        Sleep(500);
        system("Color 0F");
        cout<<"\n\t\t";
        cout<<strupr(k);
        printf(" ==> ");
        gets(user_input);
        system("Color 0A");
        Sleep(500);
        system("Color 0F");
        Sleep(500);
        system("Color 0A");
        if(strcmp(user_input,"exit")==0)
        {
            system("cls");
            cout<<"\t\t";
            printf("COMP ==> OK BYE Then....");
            break;
        }
        else if(strcmp(user_input,"hi")==0)
        {
            cout<<"\t\t";
            printf("COMP ==>  HI SIR \n");
                //PlaySound(TEXT("well.wav"),NULL,SND_SYNC);
        }
        else if(strcmp(user_input,"open chrome")==0)
        {
            cout<<"\t\t";
            printf("COMP ==>  OK SIR ,opening wait a min.\n");
                //PlaySound(TEXT("confirmed.wav"),NULL,SND_SYNC);
            system("start chrome");
        }
        else if(strcmp(user_input,"open notepad")==0)
        {
            cout<<"\t\t";
            printf("COMP ==>  OK SIR ,opening wait a min.\n");
               // PlaySound(TEXT("confirmed.wav"),NULL,SND_SYNC);
            system("start notepad");
        }
        else if(strcmp(user_input,"open cmd")==0)
        {
            cout<<"\t\t";
            printf("COMP ==>  OK SIR ,opening wait a min.\n");
                //PlaySound(TEXT("confirmed.wav"),NULL,SND_SYNC);
            system("start cmd");
        }
        else if(strcmp(user_input,"time")==0)
        {
            time_t s,val=1;
            struct tm* current_time;
            // time in seconds
            s = time(NULL);
            current_time = localtime(&s);
            // print time in minute
            // print hour and seconds
            cout<<"\t\t";
            printf("current time == %02d:%02d:%02d\n",current_time->tm_hour,
            current_time->tm_min,
            current_time->tm_sec);
        }
        else if(strcmp(user_input,"open youtube")==0)
        {
            cout<<"\t\t";
            printf("COMP ==>  OK SIR ,opening wait a min.\n");
               // PlaySound(TEXT("confirmed.wav"),NULL,SND_SYNC);
            system("start http://youtube.com");
        }

        else if(strcmp(user_input,"open file")==0)
        {
            cout<<"\t\t";
            printf("COMP ==>  OK SIR ,opening wait a min.\n");
                //PlaySound(TEXT("confirmed.wav"),NULL,SND_SYNC);
            system(" start notepad aboutus123.txt");
        }
        else if(strcmp(user_input,"open report")==0)
        {
            cout<<"\t\t";
            printf("COMP ==>  OK SIR ,opening wait a min.\n");
                //PlaySound(TEXT("confirmed.wav"),NULL,SND_SYNC);
            system(" start winword REPORT2");
        }
        else if(strcmp(user_input,"open synopsis")==0)
        {
            cout<<"\t\t";
            printf("COMP ==>  OK SIR ,opening wait a min.\n");
                //PlaySound(TEXT("confirmed.wav"),NULL,SND_SYNC);
            system(" start notepad aboutus123.txt");
        }
        else 
        {
            cout << "\t\t\a service not available "<<endl;
        }

    }
}

//void Voice1::say(string phrase)
/*{
    string command = "espeak \"" + phrase + "\"";
    const char* charCommand = command.c_str();
    cout << phrase <<endl;
    system(charCommand);
};*/

/*void Learner::respond(string phrase)
{
    fstream memory;
    memory.open("memory/memory.txt",ios::in);

    while (!memory.eof())
    {
        string identifier;
        getline(memory,identifier);

        if(identifier == phrase)
        {
            string response;
            getline(memory,response);
            voice.say(response);
            return;
        }
    }*/

    //memory.close();
    /*memory.open("memory/memory.txt",ios::out | ios::app);
    memory<< phrase <<endl;

    voice.say("can you please enter a response! for :");
    cout<<"\t\t";
    voice.say(phrase);
    string userResponse;
    cout<<"can you please enter a response please! :"<<endl;
    cout<<"YOU :";
    getline(cin,userResponse);
    memory<<userResponse<<endl;
    memory.close();

}*/

/*void Learner::say(string phrase)
{
        this->voice.say(phrase);
}*/

int main()
{
    char running[3];
    system("cls");
    //Learner AI;
    chatbot A;
    A.loading();
    A.captcha();
    cout<<"\t\t\t";
    A.disp();
    A.chat();
    if (J==0)
    {   
        cout<<"\t\t\nRunning WORK function"<<endl;
        cout<<"\t\t\tY to continue"<<endl;
        cout<<"\t\t\tN to Exit"<<endl;
        gets(running);
        if (strcmp(running,"Y")==0)
        {
            A.work();     
        }
        else
        {
            cout<<"Exiting the Program..."<<endl;
        }
    }
    else if(J!=0)
    {
     HIII:
       cout<<"\n\n\t\t\t\t DO YOU WANT SOMETHING AGAIN..?\n\n\n";
       cout<<"\t\t\tYES                            \t\t\tNO \n";
       cout<<"\t\t";
       gets(dii);
        if(strcmp(dii,"yes")==0||strcmp(dii,"Yes")==0)
        {
            system("cls");
            A.work();
        }
        else if(strcmp(dii,"no")==0||strcmp(dii,"No")==0)
        {
            system("cls");
            cout<<"\n\t\t";
            cout<<"Ok THEN BYE....!\n";
            Sleep(800);
            exit(0);
        }
        else if(strcmp(dii,"no")==1||strcmp(dii,"No")==1||strcmp(dii,"yes")==1||strcmp(dii,"Yes")==1)
        {
            system("cls");
            goto HIII;
        }
    }
    getch();
}

                                                                                                              
