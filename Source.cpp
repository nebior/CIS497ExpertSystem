//Ben Walker Samier Mukhashen Cj Murdoch Expert System
#include <iostream>
#include <string>
using namespace std;
int main(){
	string userResponse, mainColor;
	//Ben's Rules
	bool choanoflagellate = true, animalia = false, multicellular = false, diploblastic = false, porifera = false, triploblastic = false, cnidaria = false, acoela = false;//8
	bool CNS = false, coelem = false, cephalization = false, protostome = false, deuterostome = false, platyhelminthes = false, annelida = false, rotifera = false;//8
	bool mollusca = false, echinodermata = false, chordata = false, arthropoda = false, nematoda = false, lungs = false,talk = false, redBird = false;//8
	bool jaw = false, limbs = false, amnioticEgg = false, lactation = false, fish = false, feared = false, predatorBird = false;//7
	//Samier's Rules
	bool lophotrochozoan = false, ecdysozoan = false, tentacles = false, water95 = false, selfMovement = false, hingedPlates = false, externalshell = false;//7
	bool squid = false, filterFeed = false, topfin = false, legsUnderneath = false, foundInCity = false, livePrey = false, blueBird = false;//7
	//Cj's Rules
	bool shell = false, domesticated = false, carnivore = false;

	//NOT USED YET
	bool fur = false, claws = false, pincers = false, exoskeleton = false, warmblood = false, scales = false, herbivore = false;
	bool whiskers = false, water = false, saltwater= false, freshwater = false, changecolor = false; 



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
		//Ask questions about all chordates
		cout<<"Does your live only in the water?"<<endl;
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		fish = true;
		lungs = false;
		cout<<"Does your animal have a jaw?"<<endl;
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		jaw = true;
		cout<<"Does your animal filter feed?"<<endl;	
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		filterFeed = true;
		cout<<"Your animal is a Baleen Whale"<<endl;
		system("pause");
		return 0;
	}
	else{
		filterFeed = false;	
		cout<<"Does your animal have a top fin?"<<endl;	
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		topfin = true;
		cout<<"Is your animal feared by people?"<<endl;	
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		feared = true;
		cout<<"Your animal is a shark"<<endl;
		system("pause");
		return 0;
	}
	else{
		feared = false;
		cout<<"Your animal is a dolphin"<<endl;
		system("pause");
		return 0;
	}
	}
	else{
		cout<<"Your animal is some type of fish with jaws that does not filter feed or have a top fin"<<cout;
		system("pause");
		return 0;
	}
	}
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
		//Specific mammals		
		cout<<"Can your animal typically found in a city?"<<endl;	
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		foundInCity = true;
		
		cout<<"Is your animal sometimes kept as a household pet?"<<endl;	
cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		domesticated = true;
		//Domesticated Animals
		//DO NOT LEAVE THIS BLANK MUST
	}
	else{
		domesticated = false;	
		//Non-Domesticated Animals
			
		cout<<"Is your animal a carnivore?"<<endl;	
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		carnivore = true;//Carnivores
	



	}
	else{
		carnivore = false;	//Herbivores





	}


	}
	}
	else{
		foundInCity = false;
		//Animals Not found in cities
		//DO NOT LEAVE THIS BLANK MUST
	}



	}
	else{
		lactation = false;//Reptile and Bird Section
		
		cout<<"Are your animal's legs underneath its body?"<<endl;	
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		legsUnderneath = true;
		cout<<"Your animal is a type of bird"<<endl;
		//Types of Birds

		cout<<"Does your bird talk?"<<endl;	
cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		talk = true;
		cout<<"Your bird is a Parrot"<<endl;
		system("pause");
		return 0;
	}
	else{
		talk = false;	
		//Birds that aren't parrots

		cout<<"Is your bird a predator?"<<endl;	
cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		predatorBird = true;
		//Predatory Birds

		cout<<"Does your catch live prey?"<<endl;	
cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		livePrey = true;
		cout<<"Your bird is an Eagle"<<endl;
		system("pause");
		return 0;
	}
	else{
		livePrey = false;	
		cout<<"Your bird is a Buzzard"<<endl;
		system("pause");
		return 0;
	}



	}
	else{
		predatorBird = false;	
		//Non-predator Birds

		cout<<"Is your bird red?"<<endl;//Red Bird (Cardinal)
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		redBird = true;
		cout<<"Your bird is a Cardinal"<<endl;
		system("pause");
		return 0;
	}
	else{
		redBird = false;	

		cout<<"Is your bird blue?"<<endl;	
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		blueBird = true;
		cout<<"Your animal is a Bluejay"<<endl;
		system("pause");
		return 0;
	}
	else{
		blueBird = false;	
		cout<<"Your animal is some sort of non-predatory bird"<<endl;
		system("pause");
		return 0;
	}
	}
	}
	}	
	}
	else{
		legsUnderneath = false;	
		cout<<"Your animal is a type of reptile"<<endl;
		//Types of Reptiles





	}
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
	}//End Chordate
	else{
		chordata = false;
		echinodermata = true;
		cout<<"Your animal is an Echinoderm"<<endl;		
		//All Specific Echinoderm Questions
		cout<<"Does your animal have spikes all over its body?"<<endl;
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		cout<<"Your animal is a Sea Urchin"<<endl;
		system("pause");
		return 0;
	}
	else{
		cout<<"Is your animal flat and round"<<endl;
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		cout<<"Your animal is a Sand Dollar"<<endl;
		system("pause");
		return 0;
	}
	else{
		cout<<"Is your animal star shaped?"<<endl;
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
	}
	else{
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
	else{//Nematode
		arthropoda = false;
		nematoda = true;
		cout<<"Your animal is a type of Nematode"<<endl;
		system("pause");
		return 0;
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
		cout<<"Does your animal have tentacles?"<<endl;
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		squid = true;
		cout<<"Your animal is a Squid"<<endl;
		system("pause");
		return 0;
	}
	else{
		squid = false;
		cout<<"Your animal is some type of Mollusc"<<endl;
		system("pause");
		return 0;
	}
    }
	}
	}
	else{//Rotifer Else 
		cout<<"Your animal is a type of Rotifer"<<endl;
		system("pause");
		return 0;
		shell = false;
		mollusca = false;
		rotifera = true;
	}
	}
}