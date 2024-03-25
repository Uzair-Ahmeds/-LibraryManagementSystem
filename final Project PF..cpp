//programmer name is uzair ahmed solangi date --23
			//this progaram is developed
#include <iostream>
#include <string>
using namespace std;

struct book{
	string bname;
	string b_a_name;
	string b_p_name;
	 
};
struct shelf{
	string s_name;
	struct book *b;
};
struct libirary{
	string l_name;
	string l_o_time;
	string l_c_time;
	string l_adress;
	struct shelf s[3];
};
void input(libirary *ptr);
void disply(libirary *ptr, int *n1, int *n2, int *n3);
void search(libirary *ptr,int *n1,int *n2,int *n3);
void add(libirary *ptr,int *n1,int *n2,int *n3);
void update(libirary *ptr,int *n1,int *n2,int *n3);
void dlt(libirary *ptr,int *n1,int *n2,int *n3);

int main()
{
libirary l;
libirary *ptr;
ptr=&l;
int n1=3;
int n2=3;
int n3=3;
ptr->s[0].b=new book[n1];
ptr->s[1].b=new book[n2];
ptr->s[2].b=new book[n3];


string ans;

input(ptr);
cout<<endl<<endl;
disply(ptr, &n1, &n2, &n3);


do
{
int a;
cout<<endl<<"*******************************************************************************************************************************";			
cout<<endl<<"\n\tfor searching press 1 : ";
cout<<endl<<"\tfor updating press 2 : ";
cout<<endl<<"\tfor deleting press 3 : ";
cout<<endl<<"\tfor adding press 4 : ";
cout<<endl<<"\tfor display data press 5 : \n";
cin>>a;

switch(a){
	case 1:
			search(ptr,&n1,&n2,&n3);
		break;
	case 2:
		update(ptr,&n1,&n2,&n3);
		break;
	case 3:
		 dlt( ptr,&n1,&n2,&n3);
		break;
	case 4:
			add(ptr,&n1,&n2,&n3);
		break;
	case 5:
			disply(ptr, &n1, &n2, &n3);
		break;
}
cout<<endl<<"\t\ndo u want to continue (yes/no) : ";
cin>>ans;
}while(ans!="no");

return 0;
}

void input(libirary *ptr)
{
	
			
			ptr->l_name="knowledge Center ";
			
		
			ptr->l_o_time="9 : 00";
			
			ptr->l_c_time="7 : 30";
			
	
			ptr->l_adress="Old Cafe Streat ";
			
		
//				shelf details
				ptr->s[0].s_name="Science";
				ptr->s[1].s_name="Math";
				ptr->s[2].s_name="History";

				
				
//					       book-1 details in shelf -1

					ptr->s[0].b[0].bname="Cosmos";
					ptr->s[0].b[0].b_a_name="carl sagan";
					ptr->s[0].b[0].b_p_name="John marsh";
					
//					book-2 details in shelf -1

					ptr->s[0].b[1].bname="The breif history of time";
					ptr->s[0].b[1].b_a_name="Stephin Hawking";
					ptr->s[0].b[1].b_p_name="Tom Heldon";
					
//					book-3 details in shelf -1

					ptr->s[0].b[2].bname="On the origen of the species";
					ptr->s[0].b[2].b_a_name="Charls darwin";
					ptr->s[0].b[2].b_p_name="Charls darwin";
					
//		       book-1 details in shelf -2

					ptr->s[1].b[0].bname="What Is Mathematics";
					ptr->s[1].b[0].b_a_name="Richard coraint";
					ptr->s[1].b[0].b_p_name="John marsh";
					
//					book-2 details in shelf -2

					ptr->s[1].b[1].bname="Abstract Algebra";
					ptr->s[1].b[1].b_a_name="Devid steven dummit";
					ptr->s[1].b[1].b_p_name="paul walker";
					
//					book-3 details in shelf -2

					ptr->s[1].b[2].bname="Flatland";
					ptr->s[1].b[2].b_a_name="Edwin Abbott Abbott";
					ptr->s[1].b[2].b_p_name="Charls darwin ";			
						
//		       book-1 details in shelf -3

					ptr->s[2].b[0].bname="Guns, Germs, and Steel";

					ptr->s[2].b[0].b_a_name="Jared Diamond";
					ptr->s[2].b[0].b_p_name="mark wood";
					
//					book-2 details in shelf -3

					ptr->s[2].b[1].bname="A People's History of the United States";
					ptr->s[2].b[1].b_a_name="Haward zinn";
					ptr->s[2].b[1].b_p_name="smith warm";
					
//					book-3 details in shelf -3

					ptr->s[2].b[2].bname="the concise history of pakistan";
					ptr->s[2].b[2].b_a_name="Muhammad raza kazimi";
					ptr->s[2].b[2].b_p_name="Hafeez talpur";	
					
cout<<endl<<"*******************************************************************************************************************************";			
  									cout<<endl<<"\t\t\t\t\t\t\tLIBIRARY \n\n";
  cout<<endl<<"*******************************************************************************************************************************";			

  cout<<endl<<"\t\tLibirary Name : \t\t"<<ptr->l_name;
	cout<<endl<<"\t\tLibirary Opening time  : \t\t"<<ptr->l_o_time<<"\t\t\t\t\tLibirary closing time : "<<ptr->l_c_time;
     cout<<endl<<"\t\tLibirary Address : \t\t"<<ptr->l_adress;
cout<<endl<<endl;


	
}
void disply(libirary *ptr, int *n1, int *n2, int *n3)
{
	
			for(int j=0;j<1;j++)
			{
								cout<<endl;
cout<<endl<<"*******************************************************************************************************************************";			
				cout<<endl<<"\t\t  SHELF : \t\t\t\t\t\t"<<ptr->s[j].s_name<<"\n";
cout<<endl<<"*******************************************************************************************************************************";			

							cout<<endl;

				cout<<endl<<" \t   Book name "<<" \t\t\t\t\t   Author name "<<" \t\t\t\t   Publisher name ";
				for(int k=0;k<*n1;k++)
				{

					cout<<endl<<"\n \t |"<<ptr->s[j].b[k].bname<<"  \t\t\t\t |"<<ptr->s[j].b[k].b_a_name<<"  \t |"<<ptr->s[j].b[k].b_p_name;
					
				}
			}
			for(int j=1;j<2;j++)
			{
								cout<<endl;
cout<<endl<<"*******************************************************************************************************************************";			
				cout<<endl<<"\t\t  SHELF : \t\t\t\t\t\t"<<ptr->s[j].s_name;
cout<<endl<<"*******************************************************************************************************************************";			
				
							cout<<endl;

				cout<<endl<<" \t   Book name "<<" \t\t\t\t\t   Author name "<<" \t\t\t\t   Publisher name ";
				for(int k=0;k<*n2;k++)
				{

					cout<<endl<<"\n \t |"<<ptr->s[j].b[k].bname<<"  \t\t\t\t |"<<ptr->s[j].b[k].b_a_name<<"  \t |"<<ptr->s[j].b[k].b_p_name;
					
				}
			}
			for(int j=2;j<3;j++)
			{
								cout<<endl;
cout<<endl<<"*******************************************************************************************************************************";			
				cout<<endl<<"\t\t  SHELF : \t\t\t\t\t\t"<<ptr->s[j].s_name;
cout<<endl<<"*******************************************************************************************************************************";			

							cout<<endl;

				cout<<endl<<" \t   Book name "<<" \t\t\t\t\t   Author name "<<" \t\t\t\t   Publisher name ";
				for(int k=0;k<*n3;k++)
				{

					cout<<endl<<"\n \t |"<<ptr->s[j].b[k].bname<<"  \t\t\t\t |"<<ptr->s[j].b[k].b_a_name<<"  \t |"<<ptr->s[j].b[k].b_p_name;
					
				}
			}
			
}
void search(libirary *ptr,int *n1,int *n2,int *n3)
{
	int n;
	string name;
	char ans;
	do{
	
	cout<<endl<<"\tpress (1) to search by book name : ";
	cout<<endl<<"\tpress (2) to search by book author name : ";
	cout<<endl<<"\tpress (3) to search by book publisher name : ";
	cin>>n;
	cin.ignore();
	switch(n){
		
		case 1:
			cout<<endl<<"\tenter book name : ";
			getline(cin,name);
				for(int j=0;j<3;j++)
				{
					for(int k=0;k<*n1;k++)
					{
						if(ptr->s[j].b[k].bname==name)
						{
							cout<<endl<<"\tdetail of book "<<k+1<<" is : ";
							cout<<endl<<ptr->s[j].b[k].bname<<"   "<<ptr->s[j].b[k].b_a_name<<"    "<<ptr->s[j].b[k].b_p_name;
						}
					}	
				}
			break;
		case 2:
			cout<<endl<<"\tenter book author name : ";
			getline(cin,name);
				for(int j=0;j<3;j++)
				{
					for(int k=0;k<*n2;k++)
					{
						if(ptr->s[j].b[k].b_a_name==name)
						{
							cout<<endl<<"\tdetail of book "<<k+1<<" is : ";
							cout<<endl<<ptr->s[j].b[k].bname<<"   "<<ptr->s[j].b[k].b_a_name<<"    "<<ptr->s[j].b[k].b_p_name;
						}
					}	
				}
			break;
		case 3:
			cout<<endl<<"\tenter book publisher name : ";
			getline(cin,name);
				for(int j=0;j<3;j++)
				{
					for(int k=0;k<*n3;k++)
					{
						if(ptr->s[j].b[k].b_p_name==name)
						{
							cout<<endl<<"\tdetail of book "<<k+1<<" is : ";
							cout<<endl<<ptr->s[j].b[k].bname<<"   "<<ptr->s[j].b[k].b_a_name<<"    "<<ptr->s[j].b[k].b_p_name;
						}
					}	
				}
			break;
	}
	
		cout<<endl<<"\tdo u want to continue searching (y/n) : ";
	cin>>ans;
}while(ans=='y');
}

void add(libirary *ptr,int *n1,int *n2,int *n3)
{
	int ans;
	
	cout<<endl<<"\tin which shelf u want to addd : ";
	cin>>ans;
	ans=ans-1;
	switch(ans)
	{
		case 0:
			{
				book *temp=new book[*n1];
				for(int i=0; i<*n1; i++)
				temp[i]=ptr->s[0].b[i];
		     	int add;
			    int t=*n1;
			    cout<<endl<<"\thow many books u want to add : ";
			    cin>>add;
			
			    ptr->s[0].b=new book[*n1+add];
			    
			    for(int i=0; i<*n1; i++)
			    ptr->s[0].b[i]=temp[i];
			    *n1=*n1+add;
			    
			    delete[] temp;
			
			    for(int i=0;i<1;i++)
		    	{
				for(int j=t ;j<*n1;j++)
				{
				
				cout<<endl<<"\tbook name : ";
				cin>>ptr->s[i].b[j].bname;
			
				cout<<endl<<"\tbook author name : ";
				cin>>ptr->s[i].b[j].b_a_name;
				//cin.ignore();
				cout<<endl<<"\tbook pulisher name : ";
				cin>>ptr->s[i].b[j].b_p_name;
				//cin.ignore();
				}
			}
			
		}
			break;
		case 1:
			{
				book *temp=new book[*n2];
				for(int i=0; i<*n2; i++)
				temp[i]=ptr->s[1].b[i];
		     	int add;
			    int t=*n2;
			    cout<<endl<<"\thow many books u want to add : ";
			    cin>>add;
			
			    ptr->s[1].b=new book[*n2+add];
			    
			    for(int i=0; i<*n2; i++)
			    ptr->s[1].b[i]=temp[i];
			    *n2=*n2+add;
			    
			    delete[] temp;
			
			    for(int i=0;i<1;i++)
		    	{
				for(int j=t ;j<*n2;j++)
				{
				cout<<endl<<"\tbook name : ";
				cin>>ptr->s[1].b[j].bname;
				cin.ignore();
				cout<<endl<<"\tbook author name : ";
				cin>>ptr->s[1].b[j].b_a_name;
				cin.ignore();
				cout<<endl<<"\tbook pulisher name : ";
				cin>>ptr->s[1].b[j].b_p_name;
				cin.ignore();
				}
			}
		}
		
			break;
    	case 2:
			{
			
			book *temp=new book[*n3];
				for(int i=0; i<*n3; i++)
				temp[i]=ptr->s[2].b[i];
		     	int add;
			    int t=*n3;
			    cout<<endl<<"\thow many books u want to add : ";
			    cin>>add;
			
			    ptr->s[2].b=new book[*n3+add];
			    
			    for(int i=0; i<*n3; i++)
			    ptr->s[2].b[i]=temp[i];
			    *n3=*n3+add;
			    
			    delete[] temp;
			
			    for(int i=0;i<1;i++)
		    	{
				for(int j=t ;j<*n3;j++)
				{
				cout<<endl<<"\tbook name : ";
				cin>>ptr->s[2].b[j].bname;
				cin.ignore();
				cout<<endl<<"\tbook author name : ";
				cin>>ptr->s[2].b[j].b_a_name;
				cin.ignore();
				cout<<endl<<"\tbook pulisher name : ";
				cin>>ptr->s[2].b[j].b_p_name;
				cin.ignore();
				}
			}
		}
			break;			
	}
	
	
}
void update(libirary *ptr,int *n1,int *n2,int *n3)
{
	int ans;
	
	cout<<endl<<"\tin wich shelf u want to update : ";
	cin>>ans;
	ans=ans-1;
	switch(ans){
		case 0:
			{
			bool c=false;
			int upd;
			int t=0;
			cout<<endl<<"\twhich book u want to update : ";
			cin>>upd;
			upd=upd-1;
			for(int i=0;i<*n1;i++)
			{
				if(i==upd)
				t=upd;
				c=true;
			}
			if(c==true)
			{
			
			for(int i=0;i<1;i++)
			{
				for(int j=t;j<t+1;j++)
				{
				
				cout<<endl<<"\tbook name : ";
				getline(cin,ptr->s[i].b[j].bname);
				cin.ignore();
				cout<<endl<<"\tbook author name : ";
				getline(cin,ptr->s[i].b[j].b_a_name);
				cin.ignore();
				cout<<endl<<"\tbook pulisher name : ";
				getline(cin,ptr->s[i].b[j].b_p_name);
				cin.ignore();
				}
			}
			}
			else
			cout<<endl<<"\tthere is no boook wich u entered!!";
		}
			break;
		case 1:
			{
			bool c=false;
			int upd;
			int t=0;
			cout<<endl<<"\twhich book u want to update : ";
			cin>>upd;
			upd=upd-1;
			for(int i=1;i<*n2;i++)
			{
				if(i==upd)
				t=upd;
				c=true;
			}
			if(c==true)
			{
			
			for(int i=1;i<2;i++)
			{
				for(int j=t;j<t+1;j++)
				{
				
				cout<<endl<<"\tbook name : ";
				getline(cin,ptr->s[i].b[j].bname);
				cin.ignore();
				cout<<endl<<"\tbook author name : ";
				getline(cin,ptr->s[i].b[j].b_a_name);
				cin.ignore();
				cout<<endl<<"\tbook pulisher name : ";
				getline(cin,ptr->s[i].b[j].b_p_name);
				cin.ignore();
				}
			}
			}
			else
			cout<<endl<<"\tthere is no boook wich u entered!!";
		}
			break;
		case 2:
			{
			bool c=false;
			int upd;
			int t=0;
			cout<<endl<<"\twhich book u want to update : ";
			cin>>upd;
			upd=upd-1;
			for(int i=2;i<*n3;i++)
			{
				if(i==upd)
				t=upd;
				c=true;
			}
			if(c==true)
			{
			
			for(int i=2;i<3;i++)
			{
				for(int j=t;j<t+1;j++)
				{
				
				cout<<endl<<"\tbook name : ";
				getline(cin,ptr->s[i].b[j].bname);
				cin.ignore();
				cout<<endl<<"\tbook author name : ";
				getline(cin,ptr->s[i].b[j].b_a_name);
				cin.ignore();
				cout<<endl<<"\tbook pulisher name : ";
				getline(cin,ptr->s[i].b[j].b_p_name);
				cin.ignore();
				}
			}
			}
			else
			cout<<endl<<"\tthere is no boook wich u entered!!";
		}
			break;			
	}
	
	
}
void dlt(libirary *ptr,int *n1,int *n2,int *n3)
{	string AnsweR, answ,name;
	int ans;
	bool chk=false;
	do
	{
		cout<<"\t\nFrom which shelf you want to delete book?";
		cin>>ans;
		ans=ans-1;
		if(ans==0){
    	cout<<"\n\tEnter book name that you want to delete: ";
    	cin>>name;
	    for(int i=0; i<*n1; i++)
	    {
	        if(ptr->s[0].b[i].bname==name)
	        {
		    	chk=true;
			    for(int j=i; j<*n1-1; j++)
		       {
		   	        ptr->s[0].b[j]=ptr->s[0].b[j+1];
		       }
		       *n1=*n1-1;
		    break;
		    }
		    break;
	    }
	    
	if(chk==false)
	cout<<"\n\tOh! Book name not found."<<endl;
	
	if(*n1>0){
	cout<<"\n\tDO you want to delete more books?(yes/no)";
	cin>>answ;
	}
	else
	{
		cout<<endl<<"\n\tThere is no book data remaining in shelf 1 to delete."<<endl;
		break;
	}
    }
	else if(ans==1){
    	cout<<"\t\nEnter book name that you want to delete: ";
    	cin>>name;
	    for(int i=0; i<*n2; i++)
	    {
	        if(ptr->s[1].b[i].bname==name)
	        {
		    	chk=true;
			    for(int j=i; j<*n2-1; j++)
		       {
		   	        ptr->s[1].b[j]=ptr->s[1].b[j+1];
		       }
		       *n2=*n2-1;
		    break;
		    }
		    break;
	    }
	    
	if(chk==false)
	cout<<"\n\tOh! Book name not found."<<endl;
	
	if(*n2>0){
	cout<<"\t\nDO you want to delete more books?(yes/no)";
	cin>>answ;
	}
	else
	{
		cout<<endl<<"\t\nTHere is no book data remaining in shelf 2 to delete."<<endl;
		break;
	}
    }
    else 	if(ans==2){
    	cout<<"\n\tEnter book name that you want to delete: ";
    	cin>>name;
	    for(int i=0; i<*n3; i++)
	    {
	        if(ptr->s[2].b[i].bname==name)
	        {
		    	chk=true;
			    for(int j=i; j<*n3-1; j++)
		       {
		   	        ptr->s[2].b[j]=ptr->s[2].b[j+1];
		       }
		       *n3=*n3-1;
		    break;
		    }
		    break;
	    }
	    
	if(chk==false)
	cout<<"\n\tOh! Book name not found."<<endl;
	
	if(*n3>0){
	cout<<"\n\tDO you want to delete more books?(yes/no)";
	cin>>answ;
	}
	else
	{
		cout<<endl<<"\n\tTHere is no book data remaining in shelf 3 to delete."<<endl;
		break;
	}
    }
    }
	while(answ!="no");
	
	
	
}
