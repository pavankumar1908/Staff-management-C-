#include<iostream>
#include<cstring>
using namespace std;
#define Details_Limit 10
int count_details=0;
class Details{
	public:
	int id;
	string name;
	int age;
	string sex;
};
Details obj[Details_Limit];
void input(){
	if(count_details<Details_Limit){
	cout<<"Enter your Id:";
	cin>>obj[count_details].id;
	cout<<"\nEnter your Name:";
	cin>>obj[count_details].name;
	cout<<"\nEnter your Age:";
	cin>>obj[count_details].age;
	cout<<"\nEnter your Gender (Male/Female) :";
	cin>>obj[count_details].sex;
	count_details++;
}
	else{
		cout<" Limit has reached max ";
	}
}
void print_Records(){
cout<<"\n total number of persons : "<<count_details<<endl;
for(int i=0;i<count_details;i++){
cout<<"\n Id : "<< obj[i].id;
cout<<"\t Name : "<<obj[i].name;
cout<<"\t Age : "<<obj[i].age;
cout<<"\t Gender : "<<obj[i].sex;
}    
}
void print_detailsbyage(){
cout<<"\n **** **** Printing All Records by Age********";   
int count_40_plus =0;
int count_30_plus=0;
int lessthen30=0;

for(int i=0;i<count_details;i++){
if(obj[i].age>40)
count_40_plus++;
else if(obj[i].age>30)
count_30_plus++;
else
lessthen30++;
} 
cout<<"\n Persons more than 40 : "<<count_40_plus;
cout<<"\n Persons more than 30 : "<<count_30_plus;
cout<<"\n Persons less than 30 : "<<lessthen30;
}
void print_details_by_SexCount(){
int malecount=0;
int femalecount=0;

for(int i=0;i<count_details;i++){
if(obj[i].sex =="Male")
malecount++;
else if(obj[i].sex=="Female")
femalecount++;
}
cout<<"\n Number of Male : "<< malecount;
cout<<"\n Number of Female : "<< femalecount;
}
int main(){
	int choice=6;
	while(choice!=0){
	cout<<"\n1.Input Records.\n";
	cout<<"2.Print Records.\n";
	cout<<"3.Print Records by Age.\n";
	cout<<"4.Print Records by Sex.\n";
	cout<<"0.Exit\n";
	cout<<"Enter your chioce:";
	cin>>choice;
	if(choice==1){
		input();	
	}
	else if(choice==2){
		print_Records();
	}
	else if(choice==3){
		print_detailsbyage();
	}
	else if(choice==4){
		print_details_by_SexCount();
	}
	else if(choice==0){
		cout<<"THANKS!!!";
	}
	else{
		cout<<"Invalid choice !!!";
	}
}
	return 0;
}
