//Ben Walker Samier Mukhashen Cj Murdoch Expert System
#include <iostream>
#include <string>
using namespace std;
int main(){
	string userResponse, maincolor;
	//Ben's Rules
	bool choanoflagellate = true, animalia = false, multicellular = false, diploblastic = false, porifera = false, triploblastic = false, acoela = false;
	bool CNS = false, coelem = false, cephalization = false, protostome = false, deuterostome = false, platyhelminthes = false, annelida = false;
	bool echinodermata = false, chordata = false, arthropoda = false, nematoda = false;
	//Samier's Rules
	bool lophotrochozoan = false, ecdysozoan = false;
	//Cj's Rules
	bool shell = false, fur = false, claws = false, pincers = false, exoskeleton = false, warmblood = false, scales = false, herbivore = false, carnivore = false;
	bool whiskers = false, scales = false, water = false, saltwater= false, freshwater = false, changecolor = false, domesticated = false, 


	cout<<"Is your organism a Choanoflagellate?"<<endl;
	cin>>userResponse;
	if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		cout<<"Your organism is a Choanoflagellate which is a unicellular and colonial eukaryote considered to be the closest living relative of the animals";
		cout<<endl;
		system("pause");
		return 0;
	}
	else{
		choanoflagellate = false;
		animalia = true;
		multicellular = true;

		cout<<"This means your organism is multicellular and belongs to the kingdom Animalia"<<endl;
	}
	cout<<"Is your animal Diploblastic?"<<endl;
	cin>>userResponse;
	if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		diploblastic = true;
	}
	else{//The Porifera Else
		//Can ask about specific types of porifera or just end
		diploblastic = false;
		porifera = true;
		cout<<"Your animal belongs to the phylum porifera"<<endl;
		system("pause");
		return 0;
	}
	cout<<"Is your animal Triploblastic?"<<endl;
	cin>>userResponse;
	if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		triploblastic = true;
		diploblastic = false;
	}
	else{   //The Ctenophora and Cnidaria Else
		//FILL THIS IN!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
		//Must ask questions to differ between Ctenophora and Cnidaria then jellyfish vs corals vs sea anemones
		diploblastic = true;
		cout<<" "<<endl;
	}
	cout<<"Does your animal have a coelem?"<<endl;
	cin>>userResponse;
	if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		coelem = true;
	}
	else{//The Acoela Else  MUST DO IN ALL 3 ELSE LOCATIONS
		//Can ask questions about types of Acoela
		acoela = true;
		cout<<"Your animal belongs to the phylum Acoela"<<endl;
		system("pause");
		return 0;
	}
	cout<<"Does your animal have a Central Nervous System?"<<endl;
	cin>>userResponse;
	if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		CNS = true;
	}
	else{//The Acoela Else   MUST DO IN ALL 3 ELSE LOCATIONS
		//Can ask questions about types of Acoela
		acoela = true;
		cout<<"Your animal belongs to the phylum Acoela"<<endl;
		system("pause");
		return 0;
	}
	cout<<"Are your animal's nervous tissues concentrated toward one end of its body?"<<endl;
	cin>>userResponse;
	if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){
		cephalization = true;
	}
	else{//The Acoela Else   MUST DO IN ALL 3 ELSE LOCATIONS
		//Can ask questions about types of Acoela
		acoela = true;
		cout<<"Your animal belongs to the phylum Acoela"<<endl;
		system("pause");
		return 0;
	}
	cout<<"Is your animal a Protostome?"<<endl;
	cin>>userResponse;
	if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){
		protostome = true;
	}
	else{//The Deuterostome(YELLOW) Else  

		//All Deuterostome(YELLOW) questions below inside this else loop
		deuterostome = true;
		cout<<"Your animal is a Deuterostome"<<endl;
		cout<<"Is your animal segmented?"<<endl;
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		chordata = true;
	}
	else{
		chordata = false;
		echinodermata = true;
		cout<<"Your animal is an Echinoderm"<<endl;
		
		//All Specific Echinoderm Questions




	}
	//All Specific Chordata Questions
	

	}



	//All Protostome questions below(PURPLE)
	cout<<"Does your animal keep its coelem?"<<endl;
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		platyhelminthes = false;
	}
	else{
		platyhelminthes = true;
		cout<<"Your animal is a Platyhelminthes (a flatworm)"<<endl;
		system("pause");
		return 0;

	}
	cout<<"Is your animal a Lophotrochozoan?"<<endl;
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		lophotrochozoan = true;
	}
	else{
		lophotrochozoan = false;
		ecdysozoan = true;
		//All Ecdysozoans below (Nematoda and Arthropoda)
		cout<<"Your animal is Ecdysozoan"<<endl;//Nematoda or Arthropoda
		cout<<"Is your animal segmented?"<<endl;
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		arthropoda = true;
	}
	else{
		arthropoda = false;
		nematoda = true;
	//All Specific Nematode Questions

	}
	//All Specific Arthropod Questions





	}
	cout<<"Is your animal segmented?"<<endl;
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		annelida = true;
	}
	else{
		annelida = false;
		//Differentiate between Rotifera and Mollusca Below

	}
		//All Specific Annelida Questions





}