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
	bool squid = false, filterFeed = false, topfin = false, legsUnderneath = false, foundInCity = false, livePrey = false, blueBird = false, smalltail = false;//8
	bool bushytail = false, retractClaws = false, internalshell= false,pearls = false,jungle = false, predatorJungle = false, spotted= false, stripes = false,primate = false;//9
	bool LargePrimate= false, forest = false, hooves = false, antlers =false, LargeForest = false;//5
	//Cj's Rules
	bool shell = false, domesticated = false, carnivore = false, canis = false, freshwater = false, claws = false, legs = false, whiteBird = false, cityBird = false; //9
	bool fishcatch = false, biggrey = false, trunk = false, rhino = false, jungleBird = false, venomous = false, constrict = false, gardensnake = false;//8
	bool changecolor = false, bigliz = false, standinwater = false, greenreptile = false, standardliz = false, frog = false, tomato = false, greentoad = false;//8
	bool bullfrog = false, orangefrog = false, salamander = false, blackwhite = false, slender = false;//5
	//NOT USED YET
	bool pincers = false, exoskeleton = false, warmblood = false, scales = false, herbivore = false;
	bool whiskers = false, water = false, saltwater = false;



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
		cout<<"Your animal is some type of fish with jaws that does not filter feed or have a top fin"<<endl;
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
		//Domesticated Animals found in city
		cout << "Is it of the Canis genus?" <<endl; 
cin>>userResponse;
  if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
  canis=true;
  cout<<"Your animal is a Dog."<<endl;
  system("pause");
  return 0;
 }
 else{
  canis = false; 
  cout <<"Does your animal have retractable claws?"<<endl;
cin>>userResponse;
  if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
  retractClaws = true;
  cout<<"Your animal is a Cat."<<endl;
  system("pause");
  return 0;
 }
 else{
  retractClaws = false; 
  cout << "Is your household pet long and slender?" << endl;
  cin >> userResponse;
  if (userResponse == "yes" || userResponse == "y" || userResponse == "Yes")
  {
	  slender = true;
	  cout << "Your animal is a Ferret." << endl;
	  system("pause");
	  return 0;
  }
  cout<<"Your animal is another household pet."<<endl;
  system("pause");
  return 0;
 }
 }
		
	}
	else{
		domesticated = false;	
		//Non-Domesticated Animals found in city	
		cout<<"Is your animal a carnivore?"<<endl;	
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		carnivore = true;//City Carnivores
		cout<<"Does your animal have a small tail?"<<endl; 
		cin>>userResponse;
		 if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		smalltail = true;
		cout<<"Your animal is a Wolf. A Non-Demosticated carnivore mammal found in the city with a small tail."<<endl;
		system("pause");
		return 0;
		}
 else{
  smalltail = false;
  cout <<"Your animal is a fox. A Non-Demosticated carnivore mammal found in the city with a large bushy tail. " <<endl;
  system("pause");
		return 0;
 }

	}
	else{
		carnivore = false;	//City Herbivores

cout<<"Does your animal have a large bushy tail?"<<endl; 
		cin>>userResponse;
		 if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		bushytail = true;
		cout<<"Your animal is a Squirrel. A Non-Demosticated herbivore mammal found in the city with a large bushy tail."<<endl;
		system("pause");
		return 0;
		}
 else{
  bushytail = false;
  cout <<"Your animal is a Rabbit. A Non-Demosticated herbivore mammal found in the city with a small tail. " <<endl;
  system("pause");
		return 0;
 }

	}


	}
	}
	else{
		foundInCity = false;
  cout<<"Does your animal have live in the jungle?"<<endl; 
  cin>>userResponse;
  if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
  jungle = true;
  cout<<"Is your animal a predator? "<<endl; 
	cin>>userResponse;
	if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
	predatorJungle = true;
	cout<<"Is your animal Spotted?"<<endl;
	cin>>userResponse;
  if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ //If your animal lives in the jungle and is a predator and is spotted
  spotted = true;
  cout<<"Your animal is a Lepoard"<<endl;
  system("pause");
  return 0;
 }
 else{ // If your animal isn't spotted but it is a predator 
  spotted = false; 
  cout<<"Does your animal have stripes"<<endl; 
	cin>>userResponse;
  if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
  stripes = true;
  cout<<"Your animal is a Tiger"<<endl;
  system("pause");
  return 0;
 }
 else{ //If your animal isn't spotted but it is a predator and it doesn't have stripes either
  stripes = false;
  cout <<"Your animal is a Lion."<<endl;
  system("pause");
  return 0;
 }
 }
	
	}
	else{ //If your animal lives in the jungle but isn't a predator
	predatorJungle = false; 
	cout<<"Is your animal a Primate?"<<endl; 
	cin>>userResponse;
  if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ //Your animal is a primate in the jungle
  primate = true;
  cout<<"Is your primate large?"<<endl; 
cin>>userResponse;
  if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ //Your primate is large
  LargePrimate = true;
  cout<<"Your animal is a Gorilla"<<endl;
  system("pause");
  return 0;
 }
 else{ //Your primate is small
   LargePrimate = false;
  cout<<"Your animal is a Chimpanzee"<<endl;
  system("pause");
  return 0; }
  
 }
 else{
  primate = false; 
  cout << "Is your animal big and grey?" << endl;
  cin >> userResponse;
  if (userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){
	  biggrey = true;
	  cout << "Does your animal have a trunk?" << endl;
	  cin >> userResponse;
	  if (userResponse == "yes" || userResponse == "y" || userResponse == "Yes")
	  {
		  trunk = true;
		  cout << "Your animal is an elephant." << endl;
		  system("pause");
		  return 0;
	  }
	  else{
		  rhino = true;
		  cout << "Your animal is a Rhino." << endl;
		  system("pause");
		  return 0;
	  }
  }
  cout <<"Your animal is another non-predatory mammal." <<endl;
  system("pause");
  return 0;
 }
	}
  
 }
 else{ //MAMMAL NOT LIVING IN CITY OR JUNGLE
  jungle = false;
  cout<<"Does your animal live in the Forest?"<<endl; 
cin>>userResponse;
  if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){
  forest = true;
  cout<<"Does your animal have hooves?"<<endl; 
cin>>userResponse;
  if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ //Forest animal with hooves
  hooves = true;
  cout<<"Does your animal have Large antlers?"<<endl; 
cin>>userResponse;
  if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){  //Forest animal with hooves and antlers
  antlers = true;
  cout<<"Your animal is a Moose"<<endl;
  system("pause");
  return 0;
 }
 else{ //Forest animal with hooves without antlers
  antlers = false; 
  cout<<"Your animal is a Deer"<<endl;
  system("pause");
  return 0;
 }
 }
 else{ //Forest animal without hooves
  hooves = false;
  cout<<"Does your animal have claws?"<<endl; 
 cin>>userResponse;
  if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
  claws = true;
 cout<<"Is your animal Large?"<<endl; 
cin>>userResponse;
  if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
  LargeForest = true;
  cout<<"Your animal is a Bear."<<endl;
  system("pause");
  return 0;
 }
 else{
  LargeForest = false;
  cout<<"Your animal is a Beaver."<<endl;
  system("pause");
  return 0;
 }
 }
 else{ //A forest mammal without hooves or claws
  claws = false; 
  cout << "Your animal is another Forest mammal." <<endl;
  system("pause");
  return 0;
 }
 }

 }
 else{//If your mammal doesn't live in the city, jungle, or forest, it falls into here
  forest = false; 
  cout <<"Your animal is another mammal." <<endl;
  system("pause");
  return 0;
 }
 }
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

		cout<<"Does your animal catch live prey?"<<endl;	
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		livePrey = true;
		cout << "Does your animal catch fish with their mouth?" << endl;
		cin >> userResponse;
		if (userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){
			fishcatch = true;
			cout << "Your animal is a pelican." << endl;
			system("pause");
			return 0;
		}
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
		cout<<"Is your bird white?"<<endl;
		cin >> userResponse;
		if (userResponse == "yes" || userResponse == "y" || userResponse == "Yes")
		{
			whiteBird = true;
			cout << "Your animal is a seagull." << endl;
			system("pause");
			return 0;
		}
		else
		{
			cout << "Is your animal generally found in cities?" << endl;
			cin >> userResponse;
			if (userResponse == "yes" || userResponse == "y" || userResponse == "Yes")
			{
				cityBird = true;
				cout << "Your animal is a sparrow." << endl;
				system("pause");
				return 0;
			}
			else
			{
				cout << "Is your animal a jungle bird?" << endl;
				cin >> userResponse;
				if (userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){
					jungleBird = true;
					cout << "Your animal is a Toucan." << endl;
					system("pause");
					return 0;
				}
				else{
					cout << "Your animal is some other type of bird." << endl;//Unsusccessful Bird find.
					system("pause");
					return 0;
				}
			}
		}
		
	}
	}
	}
	}	
	}
	else{
		legsUnderneath = false;	
		cout<<"Your animal is a type of reptile"<<endl;
		//Types of Reptiles
		cout << "Does your animal have legs?" << endl;
		cin >> userResponse;
		if (userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){
			legs = true;
		}
		if (legs == false)
		{
			cout << "Is your animal venomous?" << endl;
			cin >> userResponse;
			if (userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){
				venomous = true;
				cout << "Your animal is a rattlesnake." << endl;
				system("pause");
				return 0;
			}
			cout << "Does your animal constrict it's prey to death?" << endl;
			cin >> userResponse;
			if (userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){
				constrict = true;
				cout << "Your animal is a Boa Constrictor." << endl;
				system("pause");
				return 0;
			}
			else
			{
				gardensnake = true;
				cout << "Your animal is a Garden Snake." << endl;
				system("pause");
				return 0;
			}
			cout << "Your animal is some other type of snake." << endl;
			system("pause");
			return 0;
		}
		cout << "Does your animal live in a shell?" << endl;
		cin >> userResponse;
		if (userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){
			shell = true;
			cout << "Your animal is a turtle." << endl;
			system("pause");
			return 0;
		}
		cout << "Does your animal like to sit in water ? " << endl;
		cin >> userResponse;
		if (userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){
			standinwater = true;
			cout << "Your animal is a Crocodile." << endl;
			system("pause");
			return 0;
		}
		cout << "Does your animal change colors?" << endl;
		cin >> userResponse;
		if (userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){
			changecolor = true;
			cout << "Your animal is a Chameleon." << endl;
			system("pause");
			return 0;
		}
		cout << "Is your reptile green?" << endl;
		cin >> userResponse;
		if (userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){
			greenreptile = true;
			cout << "Your animal is a gecko." << endl;
			system("pause");
			return 0;
		}
		cout << "Is your animal a large size?" << endl;
		cin >> userResponse;
		if (userResponse == "yes" || userResponse == "y" || userResponse == "Yes")
		{
			bigliz = true;
			cout << "Your animal is a Komodo Dragon." << endl;
			system("pause");
			return 0;
		}
		standardliz = true;
		cout << "Your animal is a standard lizard." << endl;
		system("pause");
		return 0;


	}
	}
	}
	else{
		amnioticEgg = false;
		cout<<"Your animal is an amphibian"<<endl;
		//Can further this branch with different amphibians
		cout << "Is your animal a type of frog?" << endl;		//Frogs
		cin >> userResponse;
		if (userResponse == "yes" || userResponse == "y" || userResponse == "Yes")
		{
			frog == true;
			cout << "Is your frog bright orange?" << endl;
			cin >> userResponse;
			if (userResponse == "yes" || userResponse == "y" || userResponse == "Yes")
			{
				orangefrog = true;
				cout << "Your animal is a Gold Mantella." << endl;
				system("pause");
				return 0;
			}
			cout << "Is your frog big and red?" << endl;
			cin >> userResponse;
			if (userResponse == "yes" || userResponse == "y" || userResponse == "Yes")
			{
				tomato = true;
				cout << "Your animal is a Tomato Frog." << endl;
				system("pause");
				return 0;
			}
			cout << "Is your frog green?" << endl;
			cin >> userResponse;
			if (userResponse == "yes" || userResponse == "y" || userResponse == "Yes")
			{
				greentoad = true;
				cout << "Your animal is a European Green Toad." << endl;
				system("pause");
				return 0;
			}
			bullfrog = true;
			cout << "Your animal is an American Bullfrog." << endl;
			system("pause");
			return 0;
		}
		cout << "Is your animal a type of salamander?" << endl;		//Salamanders
		cin >> userResponse;
		if (userResponse == "yes" || userResponse == "y" || userResponse == "Yes")
		{
			salamander = true;
			cout << "Is your animal black and White?" << endl;
			cin >> userResponse;
			if (userResponse == "yes" || userResponse == "y" || userResponse == "Yes")
			{
				blackwhite = true;
				cout << "Your animal is a Marbled Salamander." << endl;
				system("pause");
				return 0;
			}
			cout << "Your animal is some other type of salamander." << endl;
			system("pause");
			return 0;
		}
		cout << "Your animal is a newt." << endl;
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
		cout <<"Your animal is an Annelida which is a Segemented worm." <<endl;
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
		cout<<"Does your animal produce Pearls?"<<endl;
		  if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
	      pearls = true;
		  cout<<"Your animal is an Oyster."<<endl; //If it has two hinged plates and produces pearls it is an Oyster
          system("pause");
          return 0;
 }
 else{
   cout<<"Does your animal typically live in freshwater?"<<endl;
     if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
  freshwater = true;
  cout<<"Your animal is a Clam"<<endl; //If it has two hinged plates and lives in freshwater it is an clam
  system("pause");
  return 0;
 }
 else{
  freshwater = false; 
  cout <<"Your animal is another Mollusc found in the Bivalvia class."<<endl; //If It has two hinged plates but does not specifically fall in the other catagories its another Mollusc
	    system("pause");
		return 0;
 }
 }
	
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
		cout<<"Does your animal have tentacles?"<<endl; //This Mollusc does not have an external shell, most likely an internal one, checkfuther
		cin>>userResponse;
		if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ 
		tentacles = true;
		cout<<"Does your animal have an Internal Shell?"<<endl;
		 if(userResponse == "yes" || userResponse == "y" || userResponse == "Yes"){ //If the Mollusc does have tentacles and an internal shell it is an octopus
		internalshell= true;
		cout<<"Your animal is a Squid"<<endl;
		system("pause");
		return 0;
		 }
		else{
		internalshell = false;  //If the Mollusc does have tentacles but no internal shell it is an octopus
		cout<<"Your animal is a Octopus."<<endl;
		system("pause");
		return 0;
		}
	}
	else{
		squid = false; //
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