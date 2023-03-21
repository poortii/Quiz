#include<iostream>

#include<conio.h>

#include<cstdlib>

#include<windows.h>

using namespace std;

struct student{

	char nam[20],rollno[20];

	int marks,random;

};

student st;

void c_programming(){

	int i=0,arr[6];

	st.marks=0;

	char choice;

	while(i<5){

	back:	

	st.random=rand()%6;

	for(int j=0;j<=6;j++){

		if(st.random==arr[j]){

			goto back;

		}

	}

	arr[i]=st.random;

	switch(st.random)

    {

case 0:

	cout<<i+1<<") What is a correct syntax to output \"Hello World\" in C++?"<<endl;

	cout<<"A. System.out.println(\"Hello world\");"<<endl;

	cout<<"B. Console.WriteLine(\"Hello world\");"<<endl;

	cout<<"C. print(\"Hello world\");"<<endl;

	cout<<"D. cout<<\"Hello world\";"<<endl;

	choice=getch();

	if(choice=='D'||choice=='d'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is d"<<endl<<endl;

	}

	break;

	case 1:

	cout<<i+1<<") Which of these is NOT a relational or logical operator? "<<endl;

	cout<<"a) = "<<endl;

	cout<<"b) || "<<endl;

	cout<<"c) == "<<endl;

	cout<<"d) != "<<endl;

	choice=getch();

	if(choice=='A'||choice=='a'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is a"<<endl<<endl;

	}

	break;

	case 2:

	cout<<i+1<<") Out of the following, which one is not valid as an if-else statement? "<<endl;

	cout<<"a) if ((char) x){} "<<endl;

	cout<<"b) if (x){} "<<endl;

	cout<<"c) if (func1 (x)){}"<<endl;

	cout<<"d) if (if (x == 1)){}"<<endl;

	choice=getch();

	if(choice=='d'||choice=='D'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is d"<<endl<<endl;

	}

	break;

	case 3:

	cout<<i+1<<") Who created the language C++?"<<endl;

	cout<<"a) Bjarne Stroustrup"<<endl;

	cout<<"b) Dennis Ritchie"<<endl;

	cout<<"c) Ken Thompson"<<endl;

	cout<<"d) Brian Kernighan"<<endl;

	choice=getch();

	if(choice=='A'||choice=='a'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is a"<<endl<<endl;

	}

	break;

	case 4:

	cout<<i+1<<")  We cannot use the keyword ''break'' simply within"<<endl;

	cout<<"a) if-else"<<endl;

	cout<<"b) for"<<endl;

	cout<<"c) do-while"<<endl;

	cout<<"d) while"<<endl;

	choice=getch();

	if(choice=='A'||choice=='a'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is a"<<endl<<endl;

	}

	break;

	case 5:

	cout<<i+1<<") Out of the following operations, which one is not possible in the case of a register variable? "<<endl;

	cout<<"a) Global declaration of the register variable"<<endl;

	cout<<"b) Copying the value from the memory variable"<<endl;

	cout<<"c) Reading any value into the register variable"<<endl;

	cout<<"d) All of the above"<<endl;

	choice=getch();

	if(choice=='d'||choice=='D'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl<<endl;

		cout<<"The corrent answer is d"<<endl;

	}

	break;

	case 6:

	cout<<i+1<<") The #include <stdio.h> is a ______________"<<endl;

	cout<<"a) Inclusion directive"<<endl;

	cout<<"b) File inclusion directive"<<endl;

	cout<<"c) Preprocessor directive"<<endl;

	cout<<"d) None of the above"<<endl;

	choice=getch();

	if(choice=='c'||choice=='C'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is c"<<endl<<endl;

	}

	break;

    }

    i++;

    
    

}

	

}

void gk(){

	int i=0,arr[6];

	st.marks=0;

	char choice;

	while(i<5){

	back:	

	st.random=rand()%6;

	for(int j=0;j<=6;j++){

		if(st.random==arr[j]){

			goto back;

		}

	}

	arr[i]=st.random;

	switch(st.random)

    {

    case 0:

	cout<<i+1<<") Which one of the following river flows between Vindhyan and Satpura ranges?"<<endl;

	cout<<"A. Narmada"<<endl;

	cout<<"B. Mahanadi"<<endl;

	cout<<"C. Son"<<endl;

	cout<<"D. Brahmaputra"<<endl;

	choice=getch();

	if(choice=='A'||choice=='a'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is a"<<endl<<endl;

	}

	break;

	case 1:

	cout<<i+1<<") The Central Rice Research Station is situated in? "<<endl;

	cout<<"a) Cuttack"<<endl;

	cout<<"b) Calcutta "<<endl;

	cout<<"c) Banglore "<<endl;

	cout<<"d) Bombay "<<endl;

	choice=getch();

	if(choice=='A'||choice=='a'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is a"<<endl<<endl;

	}

	break;

	case 2:

	cout<<i+1<<") Who among the following wrote Sanskrit grammar? "<<endl;

	cout<<"a) Kalidasa "<<endl;

	cout<<"b) Charak "<<endl;

	cout<<"c) Aryabhatt"<<endl;

	cout<<"d) Panini"<<endl;

	choice=getch();

	if(choice=='d'||choice=='D'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is d"<<endl<<endl;

	}

	break;

	case 3:

	cout<<i+1<<")Patanjali is well known for the compilation of –"<<endl;

	cout<<"a) Yoga Sutra"<<endl;

	cout<<"b) Panchtantra"<<endl;

	cout<<"c) Brahma Sutra"<<endl;

	cout<<"d) Ayurveda"<<endl;

	choice=getch();

	if(choice=='A'||choice=='a'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is a"<<endl<<endl;

	}

	break;

	case 4:

	cout<<i+1<<") The country that has the highest in Barley Production? "<<endl;

	cout<<"a) Russia"<<endl;

	cout<<"b) India"<<endl;

	cout<<"c) Australia"<<endl;

	cout<<"d) Nepal"<<endl;

	choice=getch();

	if(choice=='A'||choice=='a'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is a"<<endl<<endl;

	}

	break;

	case 5:

	cout<<i+1<<") Tsunamis are not caused by"<<endl;

	cout<<"a) Hurricanes"<<endl;

	cout<<"b) Earthquakes"<<endl;

	cout<<"c) Landslides"<<endl;

	cout<<"d) Volcanic eruptions"<<endl;

	choice=getch();

	if(choice=='a'||choice=='A'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl<<endl;

		cout<<"The corrent answer is A"<<endl;

	}

	break;

	case 6:

	cout<<i+1<<") D.D.T. was invented by?"<<endl;

	cout<<"a) Moseley"<<endl;

	cout<<"b) Rudolf"<<endl;

	cout<<"c) Karl Benz"<<endl;

	cout<<"d) None of the above"<<endl;

	choice=getch();

	if(choice=='a'||choice=='A'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is a"<<endl<<endl;

	}

	break;

    }

    i++;

}

}

void science(){

	int i=0,arr[6];

	st.marks=0;

	char choice;

	while(i<5){

	back:	

	st.random=rand()%6;

	for(int j=0;j<=6;j++){

		if(st.random==arr[j]){

			goto back;

		}

	}

	arr[i]=st.random;

	switch(st.random)

    {

    case 0:

	cout<<i+1<<") Entomology is the science that studies"<<endl;

	cout<<"A. Insects "<<endl;

	cout<<"B. Behavior of human beings"<<endl;

	cout<<"C. The origin and history of technical and scientific terms"<<endl;

	cout<<"D. The formation of rocks "<<endl;

	choice=getch();

	if(choice=='A'||choice=='a'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is a"<<endl<<endl;

	}

	break;

	case 1:

	cout<<i+1<<") Exposure to sunlight helps a person improve his health because "<<endl;

	cout<<"a) the ultraviolet rays convert skin oil into Vitamin D"<<endl;

	cout<<"b) resistance power increases "<<endl;

	cout<<"c) the infrared light kills bacteria in the body  "<<endl;

	cout<<"d) the pigment cells in the skin get stimulated and produce a healthy tan "<<endl;

	choice=getch();

	if(choice=='A'||choice=='a'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is a"<<endl<<endl;

	}

	break;

	case 2:

	cout<<i+1<<") Friction can be reduced by changing from "<<endl;

	cout<<"a) rolling to sliding "<<endl;

	cout<<"b) potential energy to kinetic energy "<<endl;

	cout<<"c) dynamic to static"<<endl;

	cout<<"d) sliding to rolling "<<endl;

	choice=getch();

	if(choice=='d'||choice=='D'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is d"<<endl<<endl;

	}

	break;

	case 3:

	cout<<i+1<<") Gravity setting chambers are used in industries to remove"<<endl;

	cout<<"a) NOx"<<endl;

	cout<<"b) CO"<<endl;

	cout<<"c) SOx"<<endl;

	cout<<"d) Suspended particulate matter"<<endl;

	choice=getch();

	if(choice=='D'||choice=='d'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is d"<<endl<<endl;

	}

	break;

	case 4:

	cout<<i+1<<") The hottest planet in the solar system? "<<endl;

	cout<<"a) Venus"<<endl;

	cout<<"b) Mercury"<<endl;

	cout<<"c) Mars"<<endl;

	cout<<"d) Jupiter"<<endl;

	choice=getch();

	if(choice=='A'||choice=='a'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is a"<<endl<<endl;

	}

	break;

	case 5:

	cout<<i+1<<") Tsunamis are not caused by"<<endl;

	cout<<"a) Hurricanes"<<endl;

	cout<<"b) Earthquakes"<<endl;

	cout<<"c) Landslides"<<endl;

	cout<<"d) Volcanic eruptions"<<endl;

	choice=getch();

	if(choice=='a'||choice=='A'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl<<endl;

		cout<<"The corrent answer is A"<<endl;

	}

	break;

	case 6:

	cout<<i+1<<") D.D.T. was invented by?"<<endl;

	cout<<"a) Moseley"<<endl;

	cout<<"b) Rudolf"<<endl;

	cout<<"c) Karl Benz"<<endl;

	cout<<"d) None of the above"<<endl;

	choice=getch();

	if(choice=='a'||choice=='A'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is a"<<endl<<endl;

	}

	break;

    }

    i++;
    }

}

void result(){

	

	float percentage=0;

	cout<<"Student Name: "<<st.nam<<endl;

	cout<<"Roll no: "<<st.rollno<<endl;

	cout<<"Marks: "<<st.marks<<" out of 6"<<endl;

	percentage=100*st.marks/6;

	cout<<"Percentage: "<<percentage<<"%"<<endl;

	if(percentage>=50){

		cout<<"Status: Pass"<<endl;

	}

	else {

	cout<<"Status: Fail"<<endl;

    }

}



main(){

	char press,select;

	do

	{

	

	cout<<"\t\t  --|QUIZZING: QUIZ LIKE A CHAMPION|--  "<<endl;

	

	cout<<"\t\tEnter your name: ";

	gets(st.nam);

	cout<<"\t\tEnter rollno: ";

	gets(st.rollno);

	system("CLS");

	cout<<"\t\tMarks less than 50% will be fail"<<endl;

	cout<<"\n\nSelect option which subject's quiz you want to perform"<<endl;

	cout<<"1) C programming"<<endl;

	cout<<"2) Science"<<endl;

	cout<<"3) General Knowledge"<<endl;

	select=getch();

	system("CLS");

	switch(select){

		case '1':

			cout<<"\t\tC++ Quiz"<<endl;

			c_programming();

			system("CLS");

			cout<<"\t\tC++ Quiz Result"<<endl;

			result();

			break;

		case '2':

			cout<<"\t\tJava Quiz"<<endl;

		    science();

		    system("CLS");

		    cout<<"\t\tJava Quiz Result"<<endl;

		    result();

		    break;

		case '3':

			cout<<"\t\tHtml Quiz"<<endl;

			gk();

			system("CLS");

			cout<<"\t\tHtml Quiz Result"<<endl;

			result();

			break;

		default:

			cout<<"Invalid input"<<endl;

			break;

	}

	cout<<"Press y if you want to continue or any key to terminate"<<endl;

	press=getch();

	system("CLS");

   }while(press=='y'||press=='Y');

}