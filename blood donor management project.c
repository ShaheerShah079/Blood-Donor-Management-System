#include<stdio.h>
#include<string.h>
#include<conio.h>
struct date
{
	int date;
	int month;
	int year;
};

struct donar
{
	char donor_name[100];
	int donor_id;
	char donor_bloodgroup[100];
	char donor_address[500];
	char donor_contact[100];
	char donor_cnic[100];
	char donor_disease[100];
	char donor_gender;
	int donor_age;
	int donor_weight;
	struct date donor_ldate;
	
};
struct acceptor
{
	char acceptor_name[100];
	char acceptor_bloodgroup[100];
	char acceptor_address[500];
	char acceptor_contact[100];
	int acceptor_age;
	int acceptor_quantity;
	struct date acceptor_ldate;	
	
};

struct staff
{
	char staff_name[200];
	int staff_id;
	int staff_sallary;

};

void list_donor(struct donar[]);
void searchbyname(struct donar[]);
void searchbyage(struct donar[]);
void sortbyname(struct donar[]);
void sortbyage(struct donar[]);
void donor_male(struct donar[]);
void donor_available(struct donar[]);
void donor_summary(struct donar[]);
void acceptor_quantity(struct acceptor[]);
void totalsalary(struct staff[]);
void compareunits(struct acceptor[]);
void staffinfo(struct staff[]);
void donor_city(struct donar[]);
void donor_year(struct donar[]);
void donor_malefemale(struct donar[]);
int main()
{
	struct donar donor_patients[20]={{"Ali",12345,"A+","Lahore","03456632332","37201-1424057-1","No Disease",'M',22,65,12,4,2013},
		        {"Ahmed",12346,"A-","Karachi","03456632534","37201-1424057-2","No Disease",'M',24,67,16,5,2014},
		        {"Mishal",12347,"B+","Isb","03456632535","37201-1424057-3","Typhoid\t",'F',32,60,19,4,2017},
			    {"Assad",12348,"B-","Pesh","03456632536","37201-1424057-4","No Disease",'F',25,65,12,7,2016},
			    {"Saad",12349,"AB+","Quetta","03456632537","37201-1424057-5","No Disease",'M',28,70,12,9,2017},
		        {"Atif",12350,"AB-","Muree","03456632536","37201-1424057-6","Malaria\t",'M',30,75,12,4,2018},
		        {"Ammna",12351,"O+","Abtd","03456632536","37201-1424057-7","No Disease",'F',19,50,12,1,2015},
		        {"Sidra",12352,"O-","Haripur","03456632540","37201-1424057-8","No Disease",'F',42,72,12,4,2016},
			    {"Misbah",12353,"A+","Wah","03456632541","37201-1424057-9","Fever\t",'F',26,57,16,4,2018},
		        {"Mushtaq",12354,"A-","Taxila","03456632542","37201-1424058-0","No Disease",'M',24,72,9,12,2015},
		        {"Amjad",12355,"B+","Fslbd","03456632543","37201-1424058-1","No Disease",'M',25,62,22,4,2016},
		        {"Asif",12356,"O+","Haripur","03456632544","37201-1424058-2","No Disease",'M',23,59,12,3,2016},
			    {"Hamid",12357,"O-","Muree","03456632545","37201-1424058-3","Dibetic\t",'M',22,72,20,8,2017},
			    {"Haider",12358,"A+","Mzfrabd","03456632546","37201-1424058-4","No Disease",'M',20,65,30,4,2015},
		        {"Boom",12359,"B-","Multan","03456632547","37201-1424058-5","No Disease",'M',24,80,12,5,2018},
		        {"Shahid",12360,"AB+","Chakwal","03456632546","37201-1424058-6","No Disease",'M',20,58,15,06,2015},
		        {"Amir",12361,"A+","Karachi","03456632566","37201-1424058-7","No Disease",'M',26,72,6,11,2015},
			    {"Areesha",12362,"A-","Lahore","03456632550","37201-1424058-8","No Disease",'F',29,68,22,9,2017},
			    {"Naila",12363,"B+","Haripur","03456632551","37201-1424058-9","No Disease",'F',25,60,12,6,2017},
		        {"Shakila",12364,"A+","Kashmir","03456632552","37201-1424059-0","No disease",'F',33,68,19,7,2016}
			    	};
			    	
	struct	acceptor acceptor_patients[20]={{"Asfand","A+","Lahore","0345663233",22,4,22,4,2013},
		     	    {"Sharyar","A-","Karachi","03446632534",24,5,18,5,2014},
		     	    {"Allina","B+","Isb","03456632835",26,3,19,3,2017},
			        {"Zara","B-","Pesh","03456632436",28,2,12,5,2016},
			        {"Hamid","AB+","Quetta","03459632537",30,3,12,12,2017},
			 	    {"Ashraf","AB-","Muree","03456632536",33,1,12,9,2018},
			  	    {"Naseer","O+","Abtd","03456632836",25,2,12,3,2014},
			  	    {"Zain","O-","Haripur","03456632540",23,1,12,4,2015},
			  	    {"Nasir","A+","Wah","03456832541",26,3,16,4,2018},
			  	    {"Waseem","A-","Taxila","03456854542",36,2,9,11,2013},
			  	    {"Nauman","B+","Fslbd","03456665843",31,2,22,4,2015},
			   	    {"Sana","O+","Bakhar","03456634784",19,2,12,3,2015},
			        {"Zufishaan","O-","Muree","03456631235",23,1,20,8,2016},
			  	    {"Faryal","A+","Mzfrabd","03456784546",21,2,30,3,2015},
			        {"Zeeshan","B-","Multan","03456686547",19,2,12,5,2018},
			        {"Zubaida","AB+","Chakwal","03456458246",37,5,06,6,2015},
			        {"Haroon","A+","Karachi","03456352456",44,3,27,11,2016},
			        {"Jhangir","A-","Lahore","03456694550",55,2,21,9,2016},
			        {"Imran","B+","Haripur","03456632351",30,3,22,7,2017},
			        {"Nwaz","A+","Kashmir","03456638532",28,5,19,6,2016}
			     	};
					
			
		struct staff office_staff[20]=
		 			{{"Ashfaq",1598,18000},
				    {"Ashir",1599,19000},
				    {"Kaleem",1600,19000},
				    {"Jalil",1601,19000},
				    {"Umar",1602,18000},
				    {"Uzair",1603,18000},
				    {"Jafir",1604,19000},
				    {"Saleem",1605,18000},
				    {"Azhar",1606,18000},
				    {"Waseem",1607,19000},
				    {"Akbar",1608,17000},
			 	    {"Anam",1609,17000},
			  	    {"Shabeer",1610,20000},
				    {"Salma",1611,17000},
				    {"Atif",1612,19000},
				    {"Wasif",1613,17000},
				    {"Sarmad",1614,17000},
				    {"Abdullah",1615,17000},
				    {"Qaisar",1617,17000},
				    {"Usama",1618,17000}
				    };
	int options;
	lb1:
		printf("						______________________________\n");
		printf("						|                            |\n");
		printf("						|    Blood Donation Society  |\n");
		printf("						|____________________________|\n");
		printf("\n\n\n");
		printf("		ENTER OPTION TO CHECK\n\n");				
		printf("		1)List of all Donars\n");  
		printf("		2)Search Donar Information By Name\n");
		printf("		3)Search  Donar On The Basis Of Their Age\n");					
		printf("		4)Sort Donar by Name\n");
		printf("		5)Sort Donor by Age \n");
		printf("		6)List of Male Donars\n");
		printf("		7)Available Blood Donars\n");
		printf("		8)Summary Of Blood Groups\n");
		printf("		9)Total Quantity Of Blood Donated\n");
		printf("		10)Total Salary Of Staff Members\n");
		printf("		11)Staff Name And Salary On The Basis Of Id\n");
		printf("		12)Highest Numbers Of Blood Units Donated To Patients\n");
		printf("		13)Donors In Same City\n");
		printf("		14)Donar Details On The Basis Of Year\n");
		printf("		15)Numbers Of Male And Female Donors\n");

	
		printf("\n\n\n");

	printf("Enter option From 1 to 16\n");
	scanf("%d",&options);
	if(options==1)
	{
		list_donor(donor_patients);
	}
	else if(options==2)
	{
		searchbyname(donor_patients);
	}
	else if(options==3)
	{
		searchbyage(donor_patients);
	}
	else if(options==4)
	{
		sortbyname(donor_patients);	
	}
	else if(options==5)
	{
		sortbyage(donor_patients);	
		
	}
	else if(options==6)
	{
		donor_male(donor_patients);
	}
	else if(options==7)
	{
		donor_available(donor_patients);
	}
	else if(options==8)
	{

		donor_summary(donor_patients);
	}
	
	else if(options==9)
	{
		acceptor_quantity(acceptor_patients);
	}
	else if(options==10)
	{
		totalsalary(office_staff);
	}
	else if(options==12)
	{
		compareunits(acceptor_patients);
	}
	else if(options==11)
	{
		staffinfo(office_staff);
	}
	else if(options==13)
	{
		donor_city(donor_patients);
	}
	else if(options==14)
	{
		donor_year(donor_patients);
	}
	else if(options==15)
	{
		donor_malefemale(donor_patients);
	}
		printf("\n\n");
		printf("1) Go Back To The Menu\n");
		printf("2) Exit\n");
		int n1;
		printf("\n");
		printf("Enter options: ");
		scanf("%d",&n1);
		printf("\n\n");
		if(n1==1)
		{
			goto lb1;
		}
return 0;	
}
void list_donor(struct donar t[])
{	int i;
		printf("NAME\tID\tBLOOD GROUP\tADDRESS\t\tCONTACT NUMBER\tCNIC\t\t\tDISEASE\t\t\tGENDER\tAGE\tWEIGHT\tBLOOD DONATION DATE\n\n");
		for(i=0; i<20; i++)
		{
		printf("%s\t%d\t  %s\t\t%s\t\t%s\t%s\t\t%s\t\t  %c\t%d\t %d\t  %d-%d-%d\n\n",t[i].donor_name,t[i].donor_id,t[i].donor_bloodgroup,t[i].donor_address,t[i].donor_contact,t[i].donor_cnic,t[i].donor_disease,t[i].donor_gender,t[i].donor_age,t[i].donor_weight,t[i].donor_ldate.date,t[i].donor_ldate.month,t[i].donor_ldate.year);
		}
}
void searchbyname(struct donar t[])
{
	char donor_name_temp[100];
	printf("\nEnter Donar Name:\n");
	scanf("%s", donor_name_temp);
	int flag=0;
	
	printf("\nNAME\tID\tBLOOD GROUP\tADDRESS\t\tC.NUMBER\tCNIC\t\t\tDISEASE\t\t\tGENDER\tAGE\tWEIGHT\tBLOOD DONATION DATE\n\n");
	int i;
	for(i=0;i<20;i++)
	{
		if(strcmp(donor_name_temp,t[i].donor_name)==0)
		{
			printf("%s\t%d\t  %s\t\t%s\t\t%s\t%s\t\t%s\t\t  %c\t%d\t %d\t  %d-%d-%d\n\n",t[i].donor_name,t[i].donor_id,t[i].donor_bloodgroup,t[i].donor_address,t[i].donor_contact,t[i].donor_cnic,t[i].donor_disease,t[i].donor_gender,t[i].donor_age,t[i].donor_weight,t[i].donor_ldate.date,t[i].donor_ldate.month,t[i].donor_ldate.year);
			flag=1;
		}		
	}
	if(flag==0)
	{
		printf("No Record Found");
	}
}
void searchbyage(struct donar t[])
{
	int age;
	printf("Enter Age of Donor:\n");
	scanf("%d",&age);
	printf("\nNAME\tID\tBLOOD GROUP\tADDRESS\t\tC.NUMBER\tCNIC\t\t\tDISEASE\t\t\tGENDER\tAGE\tWEIGHT\tBLOOD DONATION DATE\n\n");
	int flag=0;
	int i;
	for(i=0;i<20;i++)
	{
		if(age==t[i].donor_age)
		{
			printf("%s\t%d\t  %s\t\t%s\t\t%s\t%s\t\t%s\t\t  %c\t%d\t %d\t  %d-%d-%d\n\n",t[i].donor_name,t[i].donor_id,t[i].donor_bloodgroup,t[i].donor_address,t[i].donor_contact,t[i].donor_cnic,t[i].donor_disease,t[i].donor_gender,t[i].donor_age,t[i].donor_weight,t[i].donor_ldate.date,t[i].donor_ldate.month,t[i].donor_ldate.year);	
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("No Record Found");
	}
}
void sortbyname(struct donar t[])
{
	int i,j;
	for(i=0; i<20; i++)
	{
		for(j=0; j<19; j++)
		{
			if(strcmp(t[j].donor_name,t[j+1].donor_name)==1)
			{
				struct donar temp=t[j];
				t[j]=t[j+1];
				t[j+1]=temp;
			}
		}
	}
	list_donor(t);
}
void sortbyage(struct donar t[])
{
	int i,j;
	for(i=0; i<20; i++)
	{
		for(j=0; j<19; j++)
		{
			if(t[j].donor_age > t[j+1].donor_age)
			{
				int temp=t[j].donor_age;
				t[j].donor_age=t[j+1].donor_age;
				t[j+1].donor_age=temp;
			}
		}
		
	}
	list_donor(t);
	
}
void donor_male(struct donar t[])
{
	printf("\nNAME\tID\tBLOOD GROUP\tADDRESS\t\tC.NUMBER\tCNIC\t\t\tDISEASE\t\t\tGENDER\tAGE\tWEIGHT\tBLOOD DONATION DATE\n\n");
	int total_donor_male=0;
	int i;
	for(i=0; i<20; i++)
	{
			if(t[i].donor_gender=='M')
			{
				printf("%s\t%d\t  %s\t\t%s\t\t%s\t%s\t\t%s\t\t  %c\t%d\t %d\t  %d-%d-%d\n\n",t[i].donor_name,t[i].donor_id,t[i].donor_bloodgroup,t[i].donor_address,t[i].donor_contact,t[i].donor_cnic,t[i].donor_disease,t[i].donor_gender,t[i].donor_age,t[i].donor_weight,t[i].donor_ldate.date,t[i].donor_ldate.month,t[i].donor_ldate.year);
				total_donor_male++;
			}
	}
		printf("Total Male Donor : %d\n",total_donor_male);
}
void donor_available(struct donar t[])
{
	printf("\nNAME\tID\tBLOOD GROUP\tADDRESS\t\tC.NUMBER\tCNIC\t\t\tDISEASE\t\t\tGENDER\tAGE\tWEIGHT\tBLOOD DONATION DATE\n\n");
	int total_donor_available= 0;
	int i;
	for(i=0; i<20; i++)
	{
			if(strcmp(t[i].donor_disease,"No Disease")==0)
			{
				printf("%s\t%d\t  %s\t\t%s\t\t%s\t%s\t\t%s\t\t  %c\t%d\t %d\t  %d-%d-%d\n\n",t[i].donor_name,t[i].donor_id,t[i].donor_bloodgroup,t[i].donor_address,t[i].donor_contact,t[i].donor_cnic,t[i].donor_disease,t[i].donor_gender,t[i].donor_age,t[i].donor_weight,t[i].donor_ldate.date,t[i].donor_ldate.month,t[i].donor_ldate.year);
				total_donor_available++;
			}
	}
		 		printf("Total Available Donor : %d\n",total_donor_available);
}
void donor_summary(struct donar t[])
{	
	char blood_group[100];
	printf("Enter Blood Group:\n");
	scanf("%s",blood_group);
	printf("\nNAME\tID\tBLOOD GROUP\tADDRESS\t\tC.NUMBER\tCNIC\t\t\tDISEASE\t\t\tGENDER\tAGE\tWEIGHT\tBLOOD DONATION DATE\n\n");
	int total_bloodgroup= 0;
	int i;
	for(i=1; i<20; i++)
	{
			if(strcmp(t[i].donor_bloodgroup,blood_group)==0)
			{
				printf("%s\t%d\t  %s\t\t%s\t\t%s\t%s\t\t%s\t\t  %c\t%d\t %d\t  %d-%d-%d\n\n",t[i].donor_name,t[i].donor_id,t[i].donor_bloodgroup,t[i].donor_address,t[i].donor_contact,t[i].donor_cnic,t[i].donor_disease,t[i].donor_gender,t[i].donor_age,t[i].donor_weight,t[i].donor_ldate.date,t[i].donor_ldate.month,t[i].donor_ldate.year);
				total_bloodgroup++;
			}		
	}
				printf("Total Blood Record of %s is : %d\n",blood_group,total_bloodgroup);
	
}
void acceptor_quantity(struct acceptor t[])
{
	int total_acceptor=0;
	int i;
	for(i=0;i<20;i++)
	{
		total_acceptor+=t[i].acceptor_quantity;
	}
		printf("Total Quantity Of Blood Donation Is : %d Units", total_acceptor );
}
void totalsalary(struct staff t[])
{
	int total_salary=0;
	int i;
	for(i=0;i<20;i++)
	{
		total_salary+=t[i].staff_sallary;
	}
		printf("\nTotal Sallary Of Staff Members Is: %d",e);
}
void compareunits(struct acceptor t[])
{
	int i;
	for(i=0;i<20;i++)
	{
		if(t[i].acceptor_quantity==5)
		{
		printf("\t\tRecord no       : %d\n",i+1);
		printf("\t\tName            :%s\n",t[i].acceptor_name);
		printf("\t\tAcceptor Blood Group    : %s\n",t[i].acceptor_bloodgroup);
		printf("\t\tAcceptor Address        : %s\n",t[i].acceptor_address);
		printf("\t\tAcceptor Contact Number : %s\n",t[i].acceptor_contact);
		printf("\t\tAge Of Acceptor         : %d\n",t[i].acceptor_age);
		printf("\t\tQuantity Of Blood       : %d units\n",t[i].acceptor_quantity);
		printf("\t\tDate Of Blood Acceptance: %d-%d_%d\n",t[i].acceptor_ldate.date,t[i].acceptor_ldate.month,t[i].acceptor_ldate.year);
		printf("\n\t\tUnits: %d\n",t[i].acceptor_quantity);
		printf("........................................................................................\n");
		printf("........................................................................................\n");
		}
	}
}
void staffinfo(struct staff t[])
{
	int id;
	printf("Enter Staff Id:\n");
	scanf("%d",&id);
	int flag=0;
	int i;
	for (i=0;i<20;i++)
	{	
		if(id==t[i].staff_id)
			{
				printf("\t\tRecord o : %d\n",i+1);
				printf("\t\tName      : %s\n",t[i].staff_name);
				printf("\t\tSalary   : %d\n",t[i].staff_sallary);
				flag=1;
			}	
	}	
		if(flag==0)
		{
			printf("No Record Found\n");
		}		
}
void donor_city(struct donar t[])
{
	char city[100];
	printf("Enter Donar City Name:\n");
	scanf("%s",city);
	int flag=0;
	int i;
	for(i=0;i<20;i++)
	{
		if(strcmp(t[i].donor_address,city)==0)
		{
			printf("\nName    : %s\n",t[i].donor_name);
			printf("Address : %s\n",t[i].donor_address);
			printf(".....................................................\n");
			printf(".....................................................\n");
		flag=1;	
		}
	}	
		if(flag==0)
		{
			printf("No Record Found");
		}
}
void donor_year(struct donar t[])
{
	int year;
	printf("Enter Year:\n");
	scanf("%d",&year);
	printf("\nNAME\tID\tBLOOD GROUP\tADDRESS\t\tC.NUMBER\tCNIC\t\t\tDISEASE\t\t\tGENDER\tAGE\tWEIGHT\tBLOOD DONATION DATE\n\n");
	int i;
	for(i=0;i<20;i++)
	{
		if(year == t[i].donor_ldate.year)
		{
			printf("%s\t%d\t  %s\t\t%s\t\t%s\t%s\t\t%s\t\t  %c\t%d\t %d\t  %d-%d-%d\n\n",t[i].donor_name,t[i].donor_id,t[i].donor_bloodgroup,t[i].donor_address,t[i].donor_contact,t[i].donor_cnic,t[i].donor_disease,t[i].donor_gender,t[i].donor_age,t[i].donor_weight,t[i].donor_ldate.date,t[i].donor_ldate.month,t[i].donor_ldate.year);
		}	
	}
}
void donor_malefemale(struct donar t[])
{
	int male_donor= 0;
	int female_donor=0;
	int i;
	for(i=0; i<20; i++)
	{
		if(t[i].donor_gender=='M')
		{
			male_donor++;
		}
		if(t[i].donor_gender=='F')
		{
			female_donor++;
		}
	}
	printf("\nNumber Of Male Donors   : %d\n",male_donor);
	printf("\nNumber Of Female Donors : %d\n",female_donor);	
}
