//entering clrscr() at req areas
//to align
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>
static int last=0;
char summa[10];
char lastuser[20]="\0",preuser[20]="\0";
int arun,balavignesh,guna,discovery;
static int a=0,lamid=0,murid=0,carrid=0,cayid=0;
static int id=0;
static char lamreport[100],lamco[15];
static char murreport[100],murco[15];
static char carrreport[100],carrco[15];
static char cayreport[100],cayco[15];
static int l=0,m=0,ca=0,c=0,carno;
static char lam_user[15]="In Carlot",mur_user[15]="In Carlot",carr_user[15]="In Carlot",cay_user[15]="In Carlot";
static int a_car=0,bv_car=0,g_car=0,d_car=0;
static char pre_lamuser[15]="In Carlot",pre_muruser[15]="In Carlot",pre_carruser[15]="In Carlot",pre_cayuser[15]="In Carlot";
static char pre_lam[15]="In Carlot",pre_mur[15]="In Carlot",pre_carr[15]="In Carlot",pre_cay[15]="In Carlot";
static char a_pass[20]="1234",bv_pass[20]="1234",g_pass[20]="1234",d_pass[20]="1234",m_pass[20]="1234";
char ans1[3];
static int r=0,i=0,j=0,n=0,o=0;
class managing
{
public:
	void manager()
	{
		man_menu:
		char cha,cha1;
		cha='\0';
		cha1='\0';
		clrscr();
		cout<<"\n press c to view the current status of cars";
		cout<<"\n------------------------------------------------------";
		cout<<"\n press p to view the previous status of cars";
		cout<<"\n------------------------------------------------------";
		cout<<"\n no . of . reports : "<<a;
		cout<<"\n press r to see the reports...";
		cout<<"\n------------------------------------------------------";
		cout<<"\n no . of . cars to be added from garage : "<<id;
		cout<<"\n press a to add cars back from the garage...";
		cout<<"\n------------------------------------------------------";
		cout<<"\n press enter to close the file and return to normal...";
		cout<<"\n------------------------------------------------------";
		cout<<"\n enter your choice : ";
		cha=(char)getch();
		if(cha=='c'||cha=='C')
		{
			clrscr();
			cout<<"\n   cars       : status/user\n";
			cout<<"\n-----------------------------";
			cout<<"\nlamborghini   : "<<lam_user;
			cout<<"\nmurcielago    : "<<mur_user;
			cout<<"\ncarrera       : "<<carr_user;
			cout<<"\ncaymen        : "<<cay_user;
			cout<<"\n to go to manager menu press enter...";
			cha1=(char)getch();
			if(cha1==13)
			{
				goto man_menu;
			}
		}
		if(cha=='p'||cha=='P')
		{
			clrscr();
			cout<<"\n\n previous user details...\n";
			cout<<"\n-----------------------------";
			if(strcmp(pre_lamuser,"In Carlot")==0&&strcmp(pre_lam,"In Carlot")==0)
			{
				cout<<"\nlamborghini  : "<<pre_lam;
			}
			else
			{
				cout<<"\nlamborghini  : "<<pre_lamuser<<". before "<<pre_lamuser<<" : "<<pre_lam;
			}
			if(strcmp(pre_muruser,"In Carlot")==0&&strcmp(pre_mur,"In Carlot")==0)
			{
				cout<<"\nmurcielago   : "<<pre_mur;
			}
			else
			{
				cout<<"\nmurcielago   : "<<pre_muruser<<". before "<<pre_muruser<<" : "<<pre_mur;
			}
			if(strcmp(pre_carruser,"In Carlot")==0&&strcmp(pre_carr,"In Carlot")==0)
			{
				cout<<"\ncarrera      : "<<pre_carr;
			}
			else
			{
				cout<<"\ncarrera      : "<<pre_carruser<<". before "<<pre_carruser<<" : "<<pre_carr;
			}
			if(strcmp(pre_cayuser,"In Carlot")==0&&strcmp(pre_cay,"In Carlot")==0)
			{
				cout<<"\ncaymen       : "<<pre_cay;
			}
			else
			{
				cout<<"\ncaymen       : "<<pre_cayuser<<". before "<<pre_cayuser<<" : "<<pre_cay;
			}
			cout<<"\n to go to manager menu press enter...";
			cha1=(char)getch();
			if(cha1==13)
			{
				goto man_menu;
			}
		}
		if(cha==13)
		{
			cha='\0';
			clrscr();
		}
		if(cha=='r'||cha=='R')
		{
			cha='\0';
			clrscr();
			if(a!=0)
			{
				if(lamid==1)
				{
					strcpy(lam_user,"Sent to garage");
					cout<<"\n"<<lamco<<" : "<<lamreport;
					//lamid=0;
				}
				if(murid==1)
				{
					strcpy(mur_user,"Sent to garage");
					cout<<"\n"<<murco<<" : "<<murreport;
					//murid=0;
				}
				if(carrid==1)
				{
					strcpy(carr_user,"Sent to garage");
					cout<<"\n"<<carrco<<" : "<<carrreport;
					//carrid=0;
				}
				if(cayid==1)
				{
					strcpy(cay_user,"Sent to garage");
					cout<<"\n"<<cayco<<" : "<<cayreport;
					//cayid=0;
				}
				id=lamid+murid+carrid+cayid;
				cout<<"\n to go to manager menu press enter...";
				cha1=(char)getch();
				if(cha1==13)
				{
					a=0;
					goto man_menu;
				}
			}
		}
		if(cha=='a'||cha=='A')
		{
			again5:
			char b='\0';
			cha='\0';
			clrscr();
			if(lamid>0)
			{
				cout<<"\n press l to add back lamborghini to carlot ";
			}
			if(murid>0)
			{
				cout<<"\n press m to add back murcielago to carlot ";
			}
			if(carrid>0)
			{
				cout<<"\n press c to add back carrera to carlot ";
			}
			if(cayid>0)
			{
				cout<<"\n press d to add back caymen to carlot ";
			}
			cout<<"\n press g to add back all cars";
			cout<<"\n press enter to return to manager menu";
			cout<<"\n enter your choice : ";
			b=(char)getch();
			if(b=='l'||b=='L')
			{
				strcpy(lam_user,"In Carlot");
				cout<<"\n lamborghini added back to carlot";
				if(lamid==1&&l==0)
				{
					lamid=0;
					l=0;
				}
				//cout<<"l : "<<l;
			}
			if(b=='m'||b=='M')
			{
				strcpy(mur_user,"In Carlot");
				cout<<"\n murcielago added back to carlot";
				if(murid==1&&m==0)
				{
					murid=0;
					m=0;
				}
				//cout<<"m : "<<m;
			}
			if(b=='c'||b=='C')
			{
				strcpy(carr_user,"In Carlot");
				cout<<"\n carrera added back to carlot";
				if(carrid==1&&ca==0)
				{
					carrid=0;
					ca=0;
				}
				//cout<<"ca : "<<ca;

			}
			if(b=='d'||b=='D')
			{
				strcpy(cay_user,"In Carlot");
				cout<<"\n caymen added back to carlot";
				if(cayid==1&&c==0)
				{
					cayid=0;
					c=0;
				}
				//cout<<"c : "<<c;
			}
			if(b=='g'||b=='G')
			{
				if(cayid==1&&c==0)
				{
					strcpy(cay_user,"In Carlot");
					//cout<<"cayid : "<<cayid<<" c : "<<c;
					cayid=0;
					c=0;
				}
				if(carrid==1&&ca==0)
				{
					strcpy(carr_user,"In Carlot");
					//cout<<"carrid : "<<carrid<<" ca : "<<ca;
					carrid=0;
					ca=0;
				}
				if(murid==1&&m==0)
				{
					strcpy(mur_user,"In Carlot");
					//cout<<"murid : "<<murid<<" m : "<<m;
					murid=0;
					m=0;
				}
				if(lamid==1&&l==0)
				{
					strcpy(lam_user,"In Carlot");
					//cout<<"lamid : "<<lamid<<" l : "<<l;
					lamid=0;
					l=0;
				}
				//sleep(10);
				cout<<"\n all the cars were added back to the carlot";
			}
			id=lamid+murid+carrid+cayid;

			cout<<"\n to go to manager menu press enter...";
			cha1=(char)getch();
			if(cha1==13)
			{
				//a=0;
				goto man_menu;
				//strcpy(preuser,lastuser);
				//strcpy(lastuser,user);
			}
		}

	}
};
class car:public managing
{
public:
	//char summa[10];
	char cars[15];
	int lam,mur,carr,cay;
	car()
	{
		l=0;
		m=0;
		ca=0;
		c=0;
		lam=101;
		mur=102;
		carr=103;
		cay=104;
	}
	int getcar(char user[])
	{
		list:
		cout<<"\n welcome to carlot\n";
		list1:
		lamborghini();
		murcielago();
		carrera();
		caymen();
		nocars(user);
		cout<<"\n type exit to exit the carlot";
		cout<<"\n Enter (car_name/exit) : ";
		cin>>cars;
		if((strcmpi(cars,"lam")==0||strcmpi(cars,"lamborghini")==0)||(strcmpi(cars,"murcielago")==0||strcmpi(cars,"mur")==0)||(strcmpi(cars,"carrera")==0||strcmpi(cars,"car")==0)||(strcmpi(cars,"caymen")==0||strcmpi(cars,"cay")==0))
		{
			goto next;
		}
		else if(strcmpi(cars,"exit")==0)
		{
			cout<<"\nsee ya ";
			carno=0;
			cout<<" car no : "<<carno;
			return carno;
			goto end;
		}
		else
		{
			cout<<"\n there is no car in this carlot as "<<cars<<"\n try again ";
			sleep(2);
			clrscr();
			goto list;
		}
		next:
		if(strcmpi(cars,"lamborghini")==0||strcmpi(cars,"lam")==0)
		{
			strcpy(cars,"lamborghini");
		}
		if(strcmpi(cars,"murcielago")==0||strcmpi(cars,"mur")==0)
		{
			strcpy(cars,"murcielago");
		}
		if(strcmpi(cars,"carrera")==0||strcmpi(cars,"car")==0)
		{
			strcpy(cars,"carrera");
		}
		if(strcmpi(cars,"caymen")==0||strcmpi(cars,"cay")==0)
		{
			strcpy(cars,"caymen");
		}
		cout<<"\n sure with "<<cars<<" ? (yes/no) : ";
		cin>>ans1;
		//adayenda:
		if(strcmpi(ans1,"yes")==0||strcmpi(ans1,"y")==0)
		{
			goto success;
		}
		else
		{
			goto list1;
		}
		success:
		cout<<"\n have a safe journey with "<<cars;
		strcpy(lastuser,user);
		strcpy(preuser,lastuser);
		end:
		sleep(2);
		clrscr();
		if(strcmpi(cars,"lamborghini")==0||strcmpi(cars,"lam")==0)
		{
			strcpy(lam_user,user);
			l=1;
			carno=lam;
			if(strcmpi(user,"arun")==0)//||strcmp(user,"Arun")==0||strcmp(user,"ARUN")==0)
			{
				arun=1;
				a_car=101;
				return a_car;
			}
			if(strcmpi(user,"balavignesh")==0||strcmpi(user,"balavignesh")==0)
			{
				balavignesh=1;
				bv_car=101;
				return bv_car;
			}
			if(strcmpi(user,"discovery")==0)
			{
				discovery=1;
				d_car=101;
				return d_car;
			}
			if(strcmpi(user,"guna")==0)
			{
				guna=1;
				g_car=101;
				return g_car;
			}
		//cout<<" car no : "<<carno;
		//sleep(1);
		//return 101;
		}
		if(strcmpi(cars,"murcielago")==0||strcmpi(cars,"mur")==0)
		{
			strcpy(mur_user,user);
			m=1;
			carno=mur;
			if(strcmpi(user,"arun")==0)
			{
				arun=1;
				a_car=102;
				return a_car;
			}
			if(strcmpi(user,"balavignesh")==0)
			{
				balavignesh=1;
				bv_car=102;
				return bv_car;
			}
			if(strcmpi(user,"discovery")==0)
			{
				discovery=1;
				d_car=102;
				return d_car;
			}
			if(strcmpi(user,"guna")==0)
			{
				guna=1;
				g_car=102;
				return g_car;
			}
		//cout<<" car no : "<<carno;
		//sleep(1);
	    //	return 102;
		}
		if(strcmpi(cars,"carrera")==0||strcmpi(cars,"car")==0)
		{
			strcpy(carr_user,user);
			ca=1;
			carno=carr;
			if(strcmpi(user,"arun")==0)
			{
				arun=1;
				a_car=103;
				return a_car;
			}
			if(strcmpi(user,"balavignesh")==0)
			{
				balavignesh=1;
				bv_car=103;
				return bv_car;
			}
			if(strcmpi(user,"discovery")==0)
			{
				discovery=1;
				d_car=103;
				return d_car;
			}
			if(strcmpi(user,"guna")==0)
			{
				guna=1;
				g_car=103;
				return g_car;
			}
		//cout<<" car no : "<<carno;
		//sleep(1);
		//return 103;
		}
		if(strcmpi(cars,"caymen")==0||strcmpi(cars,"cay")==0)
		{
			strcpy(cay_user,user);
			c=1;
			carno=cay;
			if(strcmpi(user,"arun")==0)
			{
				arun=1;
				a_car=104;
				return a_car;
			}
			if(strcmpi(user,"balavignesh")==0)
			{
				balavignesh=1;
				bv_car=104;
				return bv_car;
			}
			if(strcmpi(user,"discovery")==0)
			{
				discovery=1;
				d_car=104;
				return d_car;
			}
			if(strcmpi(user,"guna")==0)
			{
				guna=1;
				g_car=104;
				return g_car;
			}
		//cout<<" car no : "<<carno;
		///sleep(1);
		}

	}
	void nocars(char user1[])
	{
		god:
		char temp='\0';
		char temp1[20]="\0";
		int o=0;
		if((l==1)||(lamid==1))//(lamid==0&&l==1)||(lamid==1&&l==0))
		{
			//cout<<"\n l : "<<l<<" lamid : "<<lamid;
			//cout<<"\nlamborghini is not available right now";
			if((m==1)||(murid==1))//(murid==0&&m==1)||(murid==1&&m==0))
			{
				//cout<<"\n m : "<<m<<" murid : "<<murid;
				//cout<<"\nmurcielago is not available right now";
				if((ca==1)||(carrid==1))//(carrid==0&&ca==1)||(carrid==1&&c==0))
				{
					//cout<<"\n ca : "<<ca<<" carrid : "<<carrid;
					//cout<<"\ncarrera is not available right now";
					if((c==1)||(cayid==1))//(cayid==0&&c==1)||(cayid==1&&c==0))
					{
						//cout<<"\n c : "<<c<<" cayid : "<<cayid;
						//cout<<"\ncaymen is not available right now";
						cout<<"\n no cars are available right now.\n verify the manager for details";
						cout<<"\ncalling manager...\n";
						sleep(2);
						cout<<"\n manager password : ";
						while(temp!=13)
						{
							temp=(char)getch();
							if(temp==13)break;
							cout<<"*";
							temp1[o]=temp;
							o=o+1;
							temp='\0';
						}
						if(strcmp(temp1,m_pass)==0)
						{
							manager();
							clrscr();
							cout<<"\n Giving control to the user("<<user1<<")now...";
							cout<<"\n welcome to carlot\n";
							lamborghini();
							murcielago();
							carrera();
							caymen();
							//cout<<"\nuser 1:"<<user1;
							nocars(user1);
							strcpy(temp1,"\0");
							temp='\0';
							o=0;
						}
						else
						{
							goto god;
						}
					}
				}

			}

		}

	}
	void lamborghini()
	{
		if(l==0&&lamid==0)
		{
			cout<<"\n* lamborghini alias lam";
		}
	}
	void murcielago()
	{
		if(m==0&&murid==0)
		{
			cout<<"\n* murcielago alias mur";
		}
	}
	void carrera()
	{
		if(ca==0&&carrid==0)
		{
			cout<<"\n* carrera alias car";
		}
	}
	void caymen()
	{
		if(c==0&&cayid==0)
		{
			cout<<"\n* caymen alias cay";
		}
	}
	void returncar(char user[])
	{
		strcpy(lastuser,user);
		strcpy(preuser,lastuser);
		if(strcmp(user,lam_user)==0)
		{
			char dude;
			cout<<"\n Hope you enjoyed lamborghini";
			if(lamid==0)
			{
				cout<<"\n do you want to report this car ?\n press y for yes\n press n for no \n enter your choice : ";
				dude=(char)getch();
				if(dude=='y'||dude=='Y')
				{
					lamid=1;
					l=0;
					reportcar(user);
					dude='\0';
				}
				if(dude=='n'||dude=='N')
				{
					l=0;
					dude='\0';
					if(strcmpi(user,"arun")==0)
					{
						arun=0;
						a_car=0;
					}
					if(strcmpi(user,"balavignesh")==0)
					{
						balavignesh=0;
						bv_car=0;
					}
					if(strcmpi(user,"discovery")==0)
					{
						discovery=0;
						d_car=0;
					}
					if(strcmpi(user,"guna")==0)
					{
						guna=0;
						g_car=0;
					}
					clrscr();
					strcpy(pre_lam,pre_lamuser);
					strcpy(pre_lamuser,lam_user);
					strcpy(lam_user,"In Carlot");
				}
			}
			else if(lamid==1)
			{
				l=0;
			}
		}
		if(strcmpi(user,mur_user)==0)
		{
			cout<<"\n Hope you enjoyed murcielago";
			char dude1;
			if(murid==0)
			{
				cout<<"\n do you want to report this car ?\n press y for yes\n press n for no\n enter your choice : ";
				dude1=(char)getch();
				if(dude1=='y'||dude1=='Y')
				{
					murid=1;
					m=0;
					reportcar(user);
					dude1='\0';
				}
				if(dude1=='n'||dude1=='N')
				{
					dude1='\0';
					m=0;
					if(strcmpi(user,"arun")==0)
					{
						arun=0;
						a_car=0;
					}
					if(strcmpi(user,"balavignesh")==0)
					{
						balavignesh=0;
						bv_car=0;
					}
					if(strcmpi(user,"discovery")==0)
					{
						discovery=0;
						d_car=0;
					}
					if(strcmpi(user,"guna")==0)
					{
						guna=0;
						g_car=0;
					}
					clrscr();
					strcpy(pre_mur,pre_muruser);
					strcpy(pre_muruser,mur_user);
					strcpy(mur_user,"In Carlot");

				}
			}
			else if(murid==1)
			{
				m=0;
			}
		}
		if(strcmpi(user,carr_user)==0)
		{
			cout<<"\n Hope you enjoyed carrera";
			char dude2;
			if(carrid==0)
			{
				cout<<"\n do you want to report this car ?\n press y for yes\n press n for no \n enter your choice :";
				dude2=(char)getch();
				if(dude2=='y'||dude2=='Y')
				{
					carrid=1;
					ca=0;
					dude2='\0';
					reportcar(user);
				}
				if(dude2=='n'||dude2=='N')
				{
					dude2='\0';
					ca=0;
					if(strcmpi(user,"arun")==0)
					{
						arun=0;
						a_car=0;
					}
					if(strcmpi(user,"balavignesh")==0)
					{
						balavignesh=0;
						bv_car=0;
					}
					if(strcmpi(user,"discovery")==0)
					{
						discovery=0;
						d_car=0;
					}
					if(strcmpi(user,"guna")==0)
					{
						guna=0;
						g_car=0;
					}
					clrscr();
					strcpy(pre_carr,pre_carruser);
					strcpy(pre_carruser,carr_user);
					strcpy(carr_user,"In Carlot");

				}
			}
			else if(carrid==1)
			{
				ca=0;
			}
		}
		if(strcmpi(user,cay_user)==0)
		{
			cout<<"\n Hope you enjoyed caymen";
			char dude3;
			if(cayid==0)
			{
				cout<<"\n do you want to report this car ?\n press y for yes\n press n for no\n enter your choice :";
				dude3=(char)getch();
				if(dude3=='y'||dude3=='Y')
				{
					cayid=1;
					c=0;
					dude3='\0';
					reportcar(user);
				}
				if(dude3=='n'||dude3=='N')
				{
					dude3='\0';
					c=0;
					if(strcmpi(user,"arun")==0)
					{
						arun=0;
						a_car=0;
					}
					if(strcmpi(user,"balavignesh")==0)
					{
						balavignesh=0;
						bv_car=0;
					}
					if(strcmpi(user,"discovery")==0)
					{
						discovery=0;
						d_car=0;
					}
					if(strcmpi(user,"guna")==0)
					{
						guna=0;
						g_car=0;
					}
					clrscr();
					strcpy(pre_cay,pre_cayuser);
					strcpy(pre_cayuser,cay_user);
					strcpy(cay_user,"In Carlot");

				}
			}
			else if(cayid==1)
			{
				c=0;
			}
		}
	}
	void reportcar(char user[])
	{
		if(strcmpi(user,lam_user)==0)
		{
			if(strcmpi(user,"arun")==0)
			{
				a_car=0;
				arun=0;
			}
			if(strcmpi(user,"balavignesh")==0)
			{
				bv_car=0;
				balavignesh=0;
			}
			if(strcmpi(user,"guna")==0)
			{
				g_car=0;
				guna=0;
			}
			if(strcmpi(user,"discovery")==0)
			{
				d_car=0;
				discovery=0;
			}
			strcpy(pre_lam,pre_lamuser);
			strcpy(pre_lamuser,lam_user);
			strcpy(lam_user,"In Carlot");
			again2:
			cout<<"\n report on lamborghini :\n ";
			cout<<"\n about damage : press 1\n about low perfomance : press 2\n enter your choice : ";
			cin>>i;
			switch(i)
			{
				case 1:cout<<"\n the car will be sent to garage by manager after seeing the report";
					  sleep(3);
					  strcpy(lamreport,"lamborghini damaged");
					  strcpy(lamco,user);
					  //note_man(user,);
					  a=a+1;
					  lamid=1;
					  break;
				case 2:cout<<"\n the car will be sent to garage by manager after seeing the report";
					  sleep(3);
					  strcpy(lamreport,"provide service to lamborghini");
					  strcpy(lamco,user);
					  //note_man(user,"provide service to lamborghini");
					  a=a+1;
					  lamid=1;
					  break;
				default:cout<<"\n invalid choice";goto again2;
			}
		}
		if(strcmpi(user,mur_user)==0)
		{
			if(strcmpi(user,"arun")==0)
			{
				a_car=0;
			}
			if(strcmpi(user,"balavignesh")==0)
			{
				bv_car=0;
			}
			if(strcmpi(user,"guna")==0)
			{
				g_car=0;
			}
			if(strcmpi(user,"discovery")==0)
			{
				d_car=0;
			}
			strcpy(pre_mur,pre_muruser);
			strcpy(pre_muruser,mur_user);
			strcpy(mur_user,"In Carlot");
			again3:
			cout<<"\n report on murcielago :\n ";
			cout<<"\n about damage : press 1\n about low perfomance : press 2\n enter your choice : ";
			cin>>i;
			switch(i)
			{
				case 1:cout<<"\n the car will be sent to garage by manager after seeing the report";
					  sleep(3);
					  strcpy(murreport,"murcielago damaged");
					  strcpy(murco,user);
					  //note_man(user,"murcielago damaged");
					  a=a+1;
					  murid=1;
					  break;
				case 2:cout<<"\n the car will be sent to garage by manager after seeing the report";
					  sleep(3);
					  strcpy(murreport,"provide service to murcielago");
					  strcpy(murco,user);
					  //note_man(user,"provide service to murcielago");
					  a=a+1;
					  murid=1;
					  break;
				default:cout<<"\n invalid choice";goto again3;
			}
		}
		if(strcmpi(user,carr_user)==0)
		{
			if(strcmpi(user,"arun")==0)
			{
				a_car=0;
			}
			if(strcmpi(user,"balavignesh")==0)
			{
				bv_car=0;
			}
			if(strcmpi(user,"guna")==0)
			{
				g_car=0;
			}
			if(strcmpi(user,"discovery")==0)
			{
				d_car=0;
			}
			strcpy(pre_carr,pre_carruser);
			strcpy(pre_carruser,carr_user);
			strcpy(carr_user,"In Carlot");
			again4:
			cout<<"\n report on carrera :\n ";
			cout<<"\n about damage : press 1\n about low perfomance : press 2\n enter your choice : ";
			cin>>i;
			switch(i)
			{
				case 1:cout<<"\n the car will be sent to garage by manager after seeing the report";
					  sleep(3);
					  strcpy(carrreport,"carrera damaged");
					  strcpy(carrco,user);
					  //note_man(user,"carrera damaged");
					  a=a+1;
					  carrid=1;
					  break;
				case 2:cout<<"\n the car will be sent to garage by manager after seeing the report";
					  sleep(3);
					  strcpy(carrreport,"provide service to carrera");
					  strcpy(carrco,user);
					  //note_man(user,"provide service to carrera");
					  a=a+1;
					  carrid=1;
					  break;
				default:cout<<"\n invalid choice";goto again4;
			}
		}
		if(strcmpi(user,cay_user)==0)
		{
			if(strcmpi(user,"arun")==0)
			{
				a_car=0;
			}
			if(strcmpi(user,"balavignesh")==0)
			{
				bv_car=0;
			}
			if(strcmpi(user,"guna")==0)
			{
				g_car=0;
			}
			if(strcmpi(user,"discovery")==0)
			{
				d_car=0;
			}
			strcpy(pre_cay,pre_cayuser);
			strcpy(pre_cayuser,cay_user);
			strcpy(cay_user,"In Carlot");
			again5:
			cout<<"\n report on caymen :\n ";
			cout<<"\n about damage : press 1\n about low perfomance : press 2\n enter your choice : ";
			cin>>i;
			switch(i)
			{
				case 1:cout<<"\n the car will be sent to the garage by manager after seeing the report";
					  sleep(3);
					  strcpy(cayreport,"caymen danaged");
					  strcpy(cayco,user);
					  //note_man(user,"caymen damaged");
					  a=a+1;
					  cayid=1;
					  break;
				case 2:cout<<"\n the car will be sent to garage by manager after seeing the report";
					  sleep(3);
					  strcpy(cayreport,"provide service to caymen");
					  strcpy(cayco,user);
					  //note_man(user,"provide service to caymen");
					  a=a+1;
					  cayid=1;
					  break;
				default:cout<<"\n invalid choice";goto again5;
			}
		}

	}
};
class family:public car
{
public:

	family()
	{
		arun=0;
		balavignesh=0;
		guna=0;
		discovery=0;
	}
	void arun1()
	{
		if(arun==0)
		{
			a_car=getcar("arun");
			//arun=1;
		}
		else if(arun==1)
		{
			returncar("arun");
			arun=0;
		}

	}
	void balavignesh1()
	{
		if(balavignesh==0)
		{
			bv_car=getcar("balavignesh");
			//balavignesh=1;
		}
		else if(balavignesh==1)
		{
			returncar("balavignesh");
			balavignesh=0;
		}

	}
	void guna1()
	{
		if(guna==0)
		{
			g_car=getcar("guna");
			//guna=1;
		}
		else  if(guna==1)
		{
			returncar("guna");
			guna=0;
		}

	}
	void discovery1()
	{
		if(discovery==0)
		{
			d_car=getcar("discovery");
			//discovery=1;
		}
		else if(discovery==1)
		{
			returncar("discovery");
			discovery=0;
		}

	}

//friend class car;
};

void main()
{
clrscr();
	//int *lobby[4];
	managing ob1;
	car ob;
	family obj;
	again:
	int back=0;
	char user[15]="\0",ans[3];
	char pass[20]="\0";
	char ch='\0';
	int e=0;
	char pass1[20]="\0";
	char ch1='\0';
	int e1=0;
	char pass2[20]="\0";
	char ch2='\0';
	int e2=0;
	char pass3[20]="\0";
	char ch3='\0';
	int e3=0;
	char pass4[20]="\0";
	char ch4='\0';
	char yo[3]="\0";
	int e4=0;
	clrscr();
	if(strcmp(lastuser,"\0")!=0)
	{
		cout<<"\n last user : "<<lastuser;
		cout<<"\n if you are last user type no\n\n new user...? (yes/no/exit) :";
		cin>>ans;
		//goto mainmenu;
			//mainmenu:
		//cout<<"\n last user : "<<lastuser;
		//cout<<"\n if you are last user type no\n\n new user...? (yes/no/exit) :";
		//cin>>ans;
		e=0;
		e1=0;
		e2=0;
		e3=0;
		e4=0;
		ch='\0';
		ch1='\0';
		ch2='\0';
		ch3='\0';
		ch4='\0';
		strcpy(user,"\0");
		strcpy(pass,"\0");
		strcpy(pass1,"\0");
		strcpy(pass2,"\0");
		strcpy(pass3,"\0");
		strcpy(pass4,"\0");
		clrscr();
		if(strcmpi(ans,"exit")==0)
		{
			goto exit;
		}
		if(strcmpi(ans,"yes")==0||strcmpi(ans,"y")==0)
		{
			strcpy(lastuser,"\0");
			goto again;
		}
		if(strcmpi(ans,"no")==0||strcmpi(ans,"n")==0)
		{
			again1:
			if(strcmpi(lastuser,"manager")==0)
			{
				//ch4='\0';
				cout<<"\n enter password : ";
				ch4='\0';
				e4=0;
				strcpy(pass4,"\0");
				while(ch4!=13)
				{
					ch4=(char)getch();
					if(ch4==13)break;
					pass4[e4]=ch4;
					cout<<"*";
					e4=e4+1;
					ch4='\0';
				}
				if(strcmp(pass4,m_pass)==0)
				{
					//clrscr();
					ob1.manager();
					strcpy(lastuser,user);
					strcpy(preuser,lastuser);
					ch4='\0';
					e4=0;
					goto again;
				}
				else
				{
					e4=0;
					ch4='\0';
					strcpy(pass4,"\0");
					cout<<"\n unautorized access\n try again in 2 sec...";
					sleep(2);
					goto again;
				}
			}
			else
			{
				if(strcmpi(lastuser,"arun")==0)
				{
					ch='\0';
					cout<<"\n welcome back Arun ";
					cout<<"\n enter password : ";
					ch='\0';
					e=0;
					strcpy(pass,"\0");
					while(ch!=13)
					{
						ch=(char)getch();
						if(ch==13)break;
						pass[e]=ch;
						cout<<"*";
						e=e+1;
						ch='\0';
					}
					if(strcmp(pass,a_pass)==0)
					{
						back=1;
						cout<<"\n Your current car : ";
						if(a_car==101)cout<<"lamborghini";
						if(a_car==102)cout<<"murcielago";
						if(a_car==103)cout<<"carrera";
						if(a_car==104)cout<<"caymen";
						if(a_car==0)cout<<"Nil";
						ch='\0';
						e=0;
						goto backstage;
						//clrscr();
						ch='\0';
						e=0;
					}
					else
					{
						e=0;
						ch='\0';
						strcpy(pass,"\0");
						cout<<"\n unautorized access\n try again in 2 sec...";
						sleep(2);
						goto again;
					}
				}
				if(strcmpi(lastuser,"balavignesh")==0)
				{
					ch1='\0';
					cout<<"\n welcome back balavignesh ";
					cout<<"\n enter password : ";
					ch1='\0';
					e1=0;
					strcpy(pass1,"\0");
					while(ch1!=13)
					{
						ch1=(char)getch();
						if(ch1==13)break;
						pass1[e1]=ch1;
						cout<<"*";
						e1=e1+1;
						ch1='\0';
					}
					if(strcmp(pass1,bv_pass)==0)
					{
						cout<<"\n Your current car : ";
						if(bv_car==101)cout<<"lamborghini";
						if(bv_car==102)cout<<"murcielago";
						if(bv_car==103)cout<<"carrera";
						if(bv_car==104)cout<<"caymen";
						if(bv_car==0)cout<<"Nil";
						ch1='\0';
						e1=0;
						back=1;
						goto backstage;
						//clrscr();
						ch1='\0';
						e1=0;
					}
					else
					{
						e1=0;
						ch1='\0';
						strcpy(pass1,"\0");
						cout<<"\n unautorized access\n try again in 2 sec...";
						sleep(2);
						goto again;
					}
				}
				if(strcmpi(lastuser,"guna")==0)
				{
					ch2='\0';
					cout<<"\n welcome back guna ";
					cout<<"\n enter password : ";
					ch2='\0';
					e2=0;
					strcpy(pass2,"\0");
					while(ch2!=13)
					{
						ch2=(char)getch();
						if(ch2==13)break;
						pass2[e2]=ch2;
						cout<<"*";
						e2=e2+1;
						ch2='\0';
					}
					if(strcmp(pass2,g_pass)==0)
					{
						ch2='\0';
						e2=0;
						cout<<"\n Your current car : ";
						if(g_car==101)cout<<"lamborghini";
						if(g_car==102)cout<<"murcielago";
						if(g_car==103)cout<<"carrera";
						if(g_car==104)cout<<"caymen";
						if(g_car==0)cout<<"Nil";
						ch2='\0';
						e2=0;
						back=1;
						goto backstage;
						//clrscr();
						ch2='\0';
						e2=0;
					}
					else
					{
						e2=0;
						ch2='\0';
						strcpy(pass2,"\0");
						cout<<"\n unautorized access\n try again in 2 sec...";
						sleep(2);
						goto again;
					}
				}
				if(strcmpi(lastuser,"discovery")==0)
				{
					ch3='\0';
					cout<<"\n welcome back discovery ";
					cout<<"\n enter password : ";
					ch3='\0';
					e3=0;
					strcpy(pass3,"\0");
					while(ch3!=13)
					{
						ch3=(char)getch();
						if(ch3==13)break;
						pass3[e3]=ch3;
						cout<<"*";
						e3=e3+1;
						ch3='\0';
					}
					if(strcmp(pass3,d_pass)==0)
					{
						ch3='\0';
						e3=0;
						cout<<"\n Your current car : ";
						if(d_car==101)cout<<"lamborghini";
						if(d_car==102)cout<<"murcielago";
						if(d_car==103)cout<<"carrera";
						if(d_car==104)cout<<"caymen";
						if(d_car==0)cout<<"Nil";
						ch3='\0';
						e3=0;
						back=1;
						goto backstage;
						//clrscr();
						ch3='\0';
						e3=0;
					}
					else
					{
						e3=0;
						ch3='\0';
						strcpy(pass3,"\0");
						cout<<"\n unautorized access\n try again in 2 sec...";
						sleep(2);
						goto again;
					}
				}
			}
		}
	}
	else if(strcmp(lastuser,"\0")==0)
	{

		if(strcmp(preuser,"\0")!=0)
		{
			cout<<"\nlast user : "<<preuser;
		}
		if(last>0)
		{
			cout<<"\nwanna exit ? (y/n) : ";
			cin>>yo;
			if(strcmpi(yo,"yes")==0||strcmpi(yo,"y")==0)
			{
				goto exit;
			}
		}
		cout<<"\n Who's this?\n";
		cin>>user;
		//cout<<arun;
		//sleep(2);
		if(strcmpi(user,"arun")==0)
		{
			cout<<"\n enter password : ";
			//cin>>pass;
			while(ch!=13)
			{
				ch='\0';
				ch=(char)getch();
				if(ch==13)break;
				pass[e]=ch;
				cout<<"*";
				e=e+1;
				ch='\0';
			}
			if(strcmp(pass,a_pass)==0)
			{
				//clrscr();
				obj.arun1();
				e=0;
				ch='\0';
				last=1;
				goto again;

			}
			else
			{
				cout<<"\n unautorized access\n try again in 2 sec...";
				sleep(2);
				e=0;
				ch='\0';
				goto again;
			}
		}
		if(strcmpi(user,"balavignesh")==0)
		{
			cout<<"\n enter password : ";
			//cin>>pass;
			while(ch1!=13)
			{
				ch1='\0';
				ch1=(char)getch();
				if(ch1==13)break;
				pass1[e1]=ch1;
				cout<<"*";
				e1=e1+1;
				ch1='\0';
			}
			if(strcmp(pass1,bv_pass)==0)
			{
				//clrscr();
				obj.balavignesh1();
				ch1='\0';
				e1=0;
				last=1;
				goto again;
			}
			else
			{
				e1=0;
				ch1='\0';
				cout<<"\n unautorized access\n try again in 2 sec...";
				sleep(2);
				goto again;
			}

		}
		if(strcmpi(user,"guna")==0)
		{
			cout<<"\n enter password : ";
			//cin>>pass;
			while(ch2!=13)
			{
				ch2='\0';
				ch2=(char)getch();
				if(ch2==13)break;
				pass2[e2]=ch2;
				cout<<"*";
				e2=e2+1;
				ch2='\0';
			}
			if(strcmp(pass2,g_pass)==0)
			{
				//clrscr();
				obj.guna1();
				ch2='\0';
				e2=0;
				last=1;
				goto again;
			}
			else
			{
				e2=0;
				ch2='\0';
				cout<<"\n unautorized access\n try again in 2 sec...";
				sleep(2);
				goto again;
			}
		}
		if(strcmpi(user,"discovery")==0)
		{
			cout<<"\n enter password : ";
			//cin>>pass;
			while(ch3!=13)
			{
				ch3='\0';
				ch3=(char)getch();
				if(ch3==13)break;
				pass3[e3]=ch3;
				cout<<"*";
				e3=e3+1;
				ch3='\0';
			}
			if(strcmp(pass3,d_pass)==0)
			{
				//clrscr();
				obj.discovery1();
				ch3='\0';
				e3=0;
				last=1;
				goto again;
			}
			else
			{
				e3=0;
				ch3='\0';
				cout<<"\n unautorized access\n try again in 2 sec...";
				sleep(2);
				goto again;
			}

		}
		if(strcmpi(user,"manager")==0)
		{
			cout<<"\n enter password : ";
			//cin>>pass;
			while(ch4!=13)
			{
				ch4='\0';
				ch4=(char)getch();
				if(ch4==13)break;
				pass4[e4]=ch4;
				cout<<"*";
				e4=e4+1;
				ch4='\0';
			}
			if(strcmp(pass4,m_pass)==0)
			{
				//clrscr();
				ob1.manager();
				ch4='\0';
				e4=0;
				last=1;
				goto again;
			}
			else
			{
				e4=0;
				ch4='\0';
				cout<<"\n unautorized access\n try again in 2 sec...";
				sleep(2);
				goto again;
			}
		}
		if(strcmpi(user,"arun")!=0&&strcmpi(user,"balavignesh")!=0&&strcmpi(user,"guna")!=0&&strcmpi(user,"discovery")!=0&&strcmp(user,"manager")!=0)
		{
			cout<<"\n Try again in 2 sec Loser";
			sleep(2);
			goto again;
		}
	}
			backstage:
				if(back==1)
				{
					back=0;
					if(strcmpi(lastuser,"arun")==0&&a_car>1)
					{
						cout<<"\n * return car : press 1\n * report & return car : press 2";
					}
					if(strcmpi(lastuser,"balavignesh")==0&&bv_car>1)
					{
						cout<<"\n * return car : press 1\n * report & return car : press 2";
					}
					if(strcmpi(lastuser,"guna")==0&&g_car>1)
					{
						cout<<"\n * return car : press 1\n * report & return car : press 2";
					}
					if(strcmpi(lastuser,"discovery")==0&&d_car>1)
					{
						cout<<"\n * return car : press 1\n * report & return car : press 2";
					}
					cout<<"\n * choose another car : press 3\n * exit lastuser menu : press 4\n enter your choice : ";
					cin>>r;
					switch(r)
					{
						case 1:ob.returncar(lastuser);
							  goto again;
							  break;
						case 2:ob.returncar(lastuser);
							  ob.reportcar(lastuser);
							  goto again;
							  break;
						case 3:if(strcmpi(lastuser,"arun")==0&&a_car>1)
							  {
								ob.returncar(lastuser);
							  }
							  if(strcmpi(lastuser,"balavignesh")==0&&bv_car>1)
							  {
								ob.returncar(lastuser);
							  }
							  if(strcmpi(lastuser,"guna")==0&&g_car>1)
							  {
								ob.returncar(lastuser);
							  }
							  if(strcmpi(lastuser,"discovery")==0&&d_car>1)
							  {
								ob.returncar(lastuser);
							  }
							  ob.getcar(lastuser);
							  goto again;
							  break;
						case 4:goto again;
						default:cout<<"\n invalid choice";
							   goto backstage;
					}

				}
				else
				{
					;
				}

exit:
getch();
}
