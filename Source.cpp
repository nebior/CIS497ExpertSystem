//Ben Walker Samier Mukhashen Cj Murdoch Expert System
#include <iostream>
#include <string>
using namespace std;
int main(){
	string userResponse, mainColor;
	//Ben's Rules
	bool choanoflagellate = true, animalia = false, multicellular = false, diploblastic = false, porifera = false, triploblastic = false, cnidaria = false, acoela = false;
	bool CNS = false, coelem = false, cephalization = false, protostome = false, deuterostome = false, platyhelminthes = false, annelida = false, rotifera = false;
	bool mollusca = false, echinodermata = false, chordata = false, arthropoda = false, nematoda = false, invertebrate = false, vertebrate = false, lungs = false;
	bool jaw = false, limbs = false, amnioticEgg = false, lactation = false, fish = false, sandDollar = false, seaUrchin = false, starfish = false;
	//Samier's Rules
	bool lophotrochozoan = false, ecdysozoan = false, tentacles = false, water95 = false, selfMovement = false, hingedPlates = false, externalshell = false;
	//Cj's Rules
	bool shell = false, fur = false, claws = false, pincers = false, exoskeleton = false, warmblood = false, scales = false, herbivore = false, carnivore = false;
	bool whiskers = false, water = false, saltwater= false, freshwater = false, changecolor = false, domesticated = false;



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

		cout<<"Your organism is multicellular and belongs to the kingdom Animalia"<<endl;
	}
	cout<<"Is your animal Diploblastic or Triploblastic?"<<endl;
	cin>>userResponse;
	if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		diploblastic = true;
	}
	else{//The Porifera Else
		//Can ask about specific types of porifera or just end
		cout<<"Your animal is diploblastic"<<endl;
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
	else{   //The Cnidaria Else
		//In my class we grouped Ctenophora and Cnidaria into one group; we just called them all Cnidaria
		cnidaria = true;
		diploblastic = true;
		cout<<"Your animal belongs to the phylum Cnidaria "<<endl;


		cout<<"Is your animal about 95% water?"<<endl;
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		water95 = true;
			cout<<"Your animal is a Jellyfish"<<endl;
		system("pause");
		return 0;
	}
	else{
		water95 = false;
		//Ask questions to differ corals vs sea anemones
	cout<<"Does your animal move of its own accord?"<<endl;
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		selfMovement = true;
		cout<<"Your animal is a Sea Anemone"<<endl;
		system("pause");
		return 0;
	}
	else{
		selfMovement = false;
	cout<<"Does your animal have tentacles?"<<endl;
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		tentacles = true;
		cout<<"Your animal is Coral"<<endl;
		system("pause");
		return 0;
	}
	else{
		tentacles = false;
		cout<<"Your animal is some type of Cnidaria"<<endl;
		system("pause");
		return 0;
	}
	}
	}
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
		//All Specific Chordata Questions
		cout<<"Is your animal an invertebrate?"<<endl;
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		vertebrate = false;
		invertebrate = true;
		//Ask questions about all invertebrate chordates
	}
	else{
		//Ask questions about all vertebrate chordates
		vertebrate = true;
		invertebrate = false;
		cout<<"Does your live only in the water?"<<endl;
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		fish = true;
		lungs = false;
		cout<<"Does your animal have a jaw?"<<endl;
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		jaw = true;
		//Do shark and one or two other types of fish, maybe whale(herbivore and carnivore then)
	}
	else{
		jaw = false;
			cout<<"Your animal is a Hagfish: a jawless chordate vertebrate"<<endl;
		system("pause");
		return 0;
	}
	}
	else{
		fish = false;
		lungs = true;
		limbs = true;
		cout<<"Does your animal have an amniotic egg?"<<endl;
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		amnioticEgg = true;
				cout<<"Does your animal lactate?"<<endl;
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		lactation = true;
		cout<<"Your animal is a mammal"<<endl;
		//Can further this branch with different mammals
		system("pause");
		return 0;
	}
	else{
		lactation = false;
		cout<<"Your animal is a reptile"<<endl;
		//Can further this branch with different reptiles
		system("pause");
		return 0;
	}
	}
	else{
		amnioticEgg = false;
		cout<<"Your animal is an amphibian"<<endl;
		//Can further this branch with different amphibians
		system("pause");
		return 0;
	}		
	}
	}
	}
	else{
		chordata = false;
		echinodermata = true;
		cout<<"Your animal is an Echinoderm"<<endl;		
		//All Specific Echinoderm Questions
		cout<<"Does your animal have spikes all over its body?"<<endl;
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		seaUrchin = true;
		cout<<"Your animal is a Sea Urchin"<<endl;
		system("pause");
		return 0;
	}
	else{
		seaUrchin = false;
		cout<<"Is your animal flat and round"<<endl;
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		sandDollar = true;
		cout<<"Your animal is a Sand Dollar"<<endl;
		system("pause");
		return 0;
	}
	else{
		sandDollar = false;
		cout<<"Is your animal star shaped?"<<endl;
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		starfish = true;
	}
	else{
		starfish = false;
		cout<<"Your animal is some type of Echinoderm which is a Phylum that contains sea stars, sand dollars, or sea urchins"<<endl;
		system("pause");
		return 0;
	}
	}
	}
	}
	
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
			//All Specific Arthropod Questions

	}
	else{
		arthropoda = false;
		nematoda = true;
	//All Specific Nematode Questions

	}

	}
	cout<<"Is your animal segmented?"<<endl;
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		annelida = true;
		//All Specific Annelida Questions





	}
	else{//Mollusca Else
		annelida = false;
		//All Specific Mollusca Below
			cout<<"Does your animal tend to have a shell?"<<endl;
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		shell = true;
		mollusca = true;
		rotifera = false;
			
		cout<<"Does your animal have two hinged plates?"<<endl;
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		hingedPlates = true;
		cout<<"Your animal is a Clam"<<endl;
		system("pause");
		return 0;
	}
	else{
		hingedPlates = false;	
		cout<<"Does your animal have an external shell?"<<endl;
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		externalshell = true;
		cout <<"Your animal is a Snail." <<endl;
		system("pause");
		return 0;
		 }
		else{
	    externalshell=false;
        cout<<"Your animal is a Squid."<<endl;
  system("pause");
  return 0;
 }
	}
	}
	else{//Rotifer Else 
		//Maybe do not have specific rotifer questions
		shell = false;
		mollusca = false;
		rotifera = true;

	}
	}
}