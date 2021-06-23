
#include <stdio.h>
 
int main () 
{
	int hurr,athena,dude,scanfirst,ans,shot;
	char exit1,exit2,exit3,exit4,exit5,quit;
	float ams;
printf ("To begin your shortly shorty quest, you must pick a companion\n\n\n");
printf ("To proceed to next chapter, type anything and then press enter\n\n\n");
scanf ("%c", &exit1);
// Companion list
printf ("1- Hurr Durr, he may be dumb but he knows how to S M A S H\n");
printf ("2- Athena, She thinks she knows everything, she doesn't but she knows a lot\n");
printf ("3- A regular guy, just a dude with a regular daily life\n\n");
//picking a companion
printf ("Type the number of the chosen companion and then press enter\n\n\n");
scanf ("%d", &scanfirst);
printf("%d", scanfirst);
	
	if (scanfirst == 1)
	{
		printf ("You have selected Hurr Durr \n\n He says 'Omnomnomnom hurr durr durr' with a whole chicken in his mouth\n\n\n");
	}
 	else if (scanfirst == 2)
	{ 
		printf ("You have selected Athena. \n\n'A smart idea tehehe' she says\n\n\n");
	}
	else if (scanfirst == 3)
	{ 
		printf ("You have selected the everyday normal guy.\n\n He says 'I have a bus to catch bro, lets hurry'\n\n\n");
	}

	else 
	{ printf ("You entered a wrong number, is it really that hard?\n\n");
	printf ("To close the program, type anything and then press enter\n\n\n");
	
	scanf (" %c ", &quit);
	return scanfirst;
	}
	
	
printf ("To proceed to next chapter, type anything and then press enter\n\n\n");
scanf (" %c ", &exit3);
//Journey starts
printf ("You start your shortly shorty and also shortsie quest with your companion\n\n\n");
printf ("After a while you stepped into the Forest of Knowledge, you stumble upon an old riddle master\n\n\n");
printf ("He says \n 'I know what you seek heroes,\n however to get the information\n you must answer 3 riddles \n and also i like roses'\n\n\n");
printf ("To see the riddles, type anything and then press enter\n\n\n");
scanf (" %c ", &exit5);
printf("%d", scanfirst);
//Athena's part, riddle one
 	if (scanfirst == 2)
 	{
 		printf ("Your first riddle is\n\n What is 2+2?\n\n\n");
		printf ("Your companion Athena looks at the old riddle master and whispers into your ears \n\n'I know this one, I saw it on Facéb00que. The answer is 4'\n\n\n");
 		printf ("Your answer?\n\n");
	 scanf ("%d", &ans);
	 printf("%d", scanfirst);
	 while (ans != 4)
	 {
	 printf ("That is a wrong answer\n\n Please enter your answer again\n\n");
	 scanf ("%d", &ans);
	}
	 }
//Hurr Durr's part
	if (scanfirst == 1)
 	{
 		printf ("Your first riddle is\n\n What is 2+2?\n\n\n");
		printf ("Your companion Hurr Durr looks at you confused and says 'Hurr Durr?'\n\n");
 		printf ("Your answer?\n\n");
	 scanf ("%d", &ans);
	 while (ans != 4)
	 {
	 printf ("That is a wrong answer\n\n Please enter your answer again\n\n");
	 scanf ("%d", &ans);
	}
	 }
//Dude's part
	 if (scanfirst == 3)
 	{
 		printf ("Your first riddle is\n\n What is 2+2?\n\n\n\n\n\n");
		printf ("Your companion everyday normal guy looks at you and says 'What the fuck is this kindergarden bullshit?!'\n\n\n");
 			printf ("Your answer?\n\n");
	 scanf ("%d", &ans);
	 while (ans != 4)
	 {
	 printf ("That is a wrong answer\n\n Please enter your answer again\n\n");
	 scanf ("%d", &ans);
	}
	 }
	 
	printf ("\n\n'That is correct!' shrieked the old riddle master.\n\n 'But you must admit it was an easy one' \n\n Now for the second one,\n\n");
		printf ("To proceed to next chapter, type anything and then press enter\n\n\n");
		scanf (" %c ", &exit2);
//second riddle
	printf ("'A little boy goes shopping and purchases 12 tomatoes.\n On the way home,\n all but 9 get mushed and ruined.\n How many tomatoes are left in a good condition?'\n asks the riddler to you\n\n\n");
	printf ("To proceed to next chapter, type anything and then press enter\n\n\n");
	scanf (" %c ", &exit2);
	//Hurr Durr's part
	if (scanfirst == 1)
 	{
 		
		printf ("Your companion Hurr Durr looks at you confused and says 'Hurr Durr?'\n\n 'Again?' you think... What a dummy...\n\n\n");
 		
	 }
	 //Athena's part
	if (scanfirst == 2)
 	{
 		
		printf ("Your companion Athena looks at you and says 'It is 9. Listen closely he says all BUT 9.'\n\n\n");
 		
	 }
	 //Dude's part
	 if (scanfirst == 3)
 	{
 		
		printf ("Your companion everyday normal guy looks at you and says 'Man if my dude Steve \nwas here he would be like\n whoosh\n bam\n DA MOTHAFUCKIN ANSWER\n and shit\n and then we'd be outta here.\n Again i say this is childish. It could be 3 or 9 I guess'\n\n\n");
 		
	 }
printf ("To proceed to next chapter, type anything and then press enter\n\n\n");
		scanf (" %c ", &exit2);

	//second riddle answer
	printf ("Your answer? \n");
	scanf (" %d ", &ans);
	while (ans != 9)
	 {
	 printf ("That is a wrong answer\n\n Please enter your answer again\n\n");
	 scanf (" %d ", &ans);
	}
	 printf ("'That is correct again, I see you are good with maths. \n For the last one, answer me this, what is the number pi?'\n\n\n");
//third riddle
	//athena
		if (scanfirst == 2)
 	{
 		printf ("To proceed to next chapter, type anything and then press enter\n\n\n");
		scanf (" %c ", &exit2);
		printf ("Your companion Athena looks at you and says 'This is easy, I LOVE PIE <3 and the answer is 3.14'\n\n\n");
 		
	 }
	 //hurr durr
	 	if (scanfirst == 1)
 	{
 		printf ("To proceed to next chapter, type anything and then press enter\n\n\n");
		scanf (" %c ", &exit2);
		printf ("Your companion Hurr Durr starts to get excited after he heard the word PIE. He hits his gigantic club against the floor 314 times\n\n\n");
 		
	 }
	 //the dude
	 	if (scanfirst == 3)
 	{
 		printf ("To proceed to next chapter, type anything and then press enter\n\n\n");
		scanf (" %c ", &exit2);
		printf ("Your companion everyday normal guy says\n 'Damn, my top gun Steve would know this,\n it was 3 point something something.\n I've watched it on Da Vinci Code\n\n\n");
 		
	 }
	 //third riddle answer
	 printf ("Your answer?\n\n");
	 scanf ("%f", &ams);
	while (ams != 3)
	 {
	 printf ("That is a wrong answer\n\n Please enter your answer again\n\n");
	 scanf ("%f", &ams);
	}
	 printf ("Well, congratulations heroes! You have beaten my superior riddles.\n\n Now I will tell you where the monster hides\n\n");
	 printf ("To proceed to next chapter, type anything and then press enter\n\n\n");
		scanf (" %c ", &exit2);
	//end of riddles, start of the monster hunt
	printf ("You and your companion traveled day and night. You are very close to the monster. \n\n You will be fighting against it tomorrow. Try to get some rest\n\n");
	printf ("To proceed to next chapter, type anything and then press enter\n\n\n");
		scanf (" %c ", &exit2);
	printf ("After you have awaken you hit the road again. \n\nYour companion annoys you, but you think this will be over soon.\n\n\n");
	printf ("You have found the monster, you quickly grab your bow and start to aim as the monster starts to rain fire upon you\n\n\n");
	//starting shooting
	//hurr durr
			if (scanfirst == 1)
 	{
 		printf ("To proceed to next chapter, type anything and then press enter\n\n\n");
		scanf (" %c ", &exit2);
		printf ("To make a shot, please enter a number.\n\n\n");
 		scanf (" %d ", &shot);
 		printf ("\n\n\nAs you try to aim your bow Hurr Durr rushes to the monster and kills him with a single blow\n\n\n 'WOW! What was that?' you think /n/n Don't make this guy angry");
	 }
	 //athena
	 if (scanfirst == 2)
 	{
 		printf ("To proceed to next chapter, type anything and then press enter\n\n\n");
		scanf (" %c ", &exit2);
		printf ("To make a shot, please enter a number.\n\n\n");
 		scanf (" %d ", &shot);
 		printf ("As you try to hit your target desperately,\n Athena runs behind a tree and yell out senseless numbers to you");
 		while (shot%7!=0)
	{
		printf ("You missed the shot, try again!\n\n");
		printf ("To make a shot, please enter any number.\n\n");
     	scanf (" %d ", &shot);
	}
		if (shot %7 == 0)
		{	
		printf ("Congratulations, you hit the monster in its heart!\n\n");
		}
	}
	//dude
	if (scanfirst == 3)
 	{
 		printf ("To proceed to next chapter, type anything and then press enter\n\n\n");
		scanf (" %c ", &exit2);
		printf ("To make a shot, please enter a number.\n\n\n");
 		scanf (" %d ", &shot);
 		printf ("As you try to hit your target desperately,\n Everyday normal guy tries to send a text to a random girl he met at subway\n\n\n");
 		while (shot%7!=0)
	{
		printf ("You missed the shot, try again!\n\n");
		printf ("To make a shot, please enter any number.\n\n");
     	scanf (" %d ", &shot);
	}
	}
		if (shot %7 == 0)
		{	
		printf ("Congratulations, you hit the monster in its heart!\n\n");
		}
		
		printf ("To proceed to next chapter, type anything and then press enter\n\n\n");
		scanf (" %c ", &exit2);
		printf ("After you defeated the monster, you and your companion go to a local tavern to celebrate the victory!\n\n\n");
		printf ("CONGRATULATIONS!\n\n\n");
		printf ("To close the program, type anything and then press enter\n\n\n");
		scanf (" %c ", &exit2);
return 0;
}

