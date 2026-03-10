#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

class Sun{
    public:
    int lifescore;
    int luckycharm;
    
    Sun() {
        lifescore = 5;
        luckycharm = rand() % 10 + 1;
    }
    
    void luck() {
        cout << "Lucky charm to the rescue!" << endl;
        if (luckycharm == 5) {
            lifescore++;
            cout << "Your life score increased by 1!" << endl;
        }
        else{
            cout<<"Oops! looks like you didnt get lucky with the lucky charm hehe"<<endl;
        }
    }
    
 void QnA() {
    string Q1 = "You see a zombie breakdancing on the Sun. Do you join the dance battle?";
    cout << Q1 << endl;
    cout << "Answer: ";
    string A1; cin >> A1;
    if (A1 == "Yes" || A1 == "yes" || A1 == "Y" || A1 == "y") {
        cout << "YASSS! you just cooked that zombie with your moves!" << endl;
    } else if (A1 == "No" || A1 == "no" || A1 == "N" || A1 == "n") {
        cout << "Boo… missed your chance to be the first ever Sunlight Breakdancer Champion." << endl;
        lifescore--;
    } else {
        cout << "Hey champ what are you doing, answer with yes or no loll" << endl;
    }

    
    string Q2 = "A zombie is offering you a sunscreen bottle. Do you take it?";
    cout << Q2 << endl;
    cout << "Answer: ";
    string A2; cin >> A2;
    if (A2 == "Yes" || A2 == "yes" || A2 == "Y" || A2 == "y") {
        cout << "Smart move! Zombie sunscreen is SPF 10,000." << endl;
    } else if (A2 == "No" || A2 == "no" || A2 == "N" || A2 == "n") {
        cout <<"Okay but… you are literally fried chicken now"<<endl;
        lifescore--;
    } else {
        cout << "Answer with yes or no, don't invent new words pls" << endl;
    }

    
    string Q3 = "The Sun is literally melting your shoes. Do you run barefoot?";
    cout << Q3 << endl;
    cout << "Answer: ";
    string A3; cin >> A3;
    if (A3 == "Yes" || A3 == "yes" || A3 == "Y" || A3 == "y") {
        cout << "Oooo barefoot speedrun unlocked!" << endl;
    } else if (A3 == "No" || A3 == "no" || A3 == "N" || A3 == "n") {
        cout << "Shoes melted. feet melted. game melted."<< endl;
        lifescore--;
    } else {
        cout << "Yes or no only, superstar"<< endl;
    }
    
    luck();
    
    string Q4 = "A zombie challenges you to a staring contest under the sunlight. Do you accept?";
    cout << Q4 << endl;
    cout << "Answer: ";
    string A4; cin >> A4;
    if (A4 == "Yes" || A4 == "yes" || A4 == "Y" || A4 == "y") {
        cout << "You won! That zombie blinked faster than a microwave timer." << endl;
    } else if (A4 == "No" || A4 == "no" || A4 == "N" || A4 == "n") {
        cout << "Scared? Pfft. Even your shadow is braver." << endl;
        lifescore--;
    } else {
        cout << "Come on, just yes or no — you got this" << endl;
    }

    string Q5 = "You find a super spicy flaming taco on the ground. Do you eat it?";
    cout << Q5 << endl;
    cout << "Answer: ";
    string A5; cin >> A5;
    if (A5 == "Yes" || A5 == "yes" || A5 == "Y" || A5 == "y") {
        cout<<"SPICY POWER UP!You are unstoppable now"<< endl;
    } else if (A5 == "No" || A5 == "no" || A5 == "N" || A5 == "n") {
        cout << "You skipped the taco?? That was *literally* pro-mode food." << endl;
        lifescore--;
    } else {
        cout << "Yes or no only please — your tummy needs clarity" << endl;
    }

    string Q6 = "A zombie trips and falls into lava. Do you laugh at it?";
    cout << Q6 << endl;
    cout << "Answer: ";
    string A6; cin >> A6;
    if (A6 == "Yes" || A6 == "yes" || A6 == "Y" || A6 == "y") {
        cout << "HAHA your laugh just roasted the zombie harder than the lava!" << endl;
    } else if (A6 == "No" || A6 == "no" || A6 == "N" || A6 == "n") {
        cout << "You missed a free comedy roast show, sad life." << endl;
        lifescore--;
    } else {
        cout << "Please answer yes or no, comedian-in-training." << endl;
    }

    string Q7 = "You find cool-looking sunglasses lying around. Do you wear them mid-battle?";
    cout << Q7 << endl;
    cout << "Answer: ";
    string A7; cin >> A7;
    if (A7 == "Yes" || A7 == "yes" || A7 == "Y" || A7 == "y") {
        cout<<"Stylish zombie slayer unlocked! Even the sun is jealous."<<endl;
    } else if (A7 == "No" || A7 == "no" || A7 == "N" || A7 == "n") {
        cout << "No shades?? Okay lil eyeball toast️." << endl;
        lifescore--;
    } else {
        cout << "Yes or no — pick one, fashionista" << endl;
    }
    
    luck();

    string Q8 = "The zombie leader is flossing (the dance move). Do you copy him?";
    cout << Q8 << endl;
    cout << "Answer: ";
    string A8; cin >> A8;
    if (A8 == "Yes" || A8 == "yes" || A8 == "Y" || A8 == "y") {
        cout << "Omg synchronized flossing = instant friendship goals." << endl;
    } else if (A8 == "No" || A8 == "no" || A8 == "N" || A8 == "n") {
        cout << "You just disrespected the drip. L zombie respect." << endl;
        lifescore--;
    } else {
        cout << "Answer with yes/no, or the zombies will judge you" << endl;
    }

    string Q9 = "Your water bottle is empty. A zombie hands you one filled with glowing juice. Do you drink it?";
    cout << Q9 << endl;
    cout << "Answer: ";
    string A9; cin >> A9;
    if (A9 == "Yes" || A9 == "yes" || A9 == "Y" || A9 == "y") {
        cout << "Plot twist: glowing juice = superpowers!"<< endl;
    } else if (A9 == "No" || A9 == "no" || A9 == "N" || A9 == "n") {
        cout << "Congrats… you chose dehydration as your power." << endl;
        lifescore--;
    } else {
        cout << "Yes or no only — hydration is serious business" << endl;
    }

    string Q10 = "The final zombie says: 'Wanna be friends?' Do you say yes?";
    cout << Q10 << endl;
    cout << "Answer: ";
    string A10; cin >> A10;
    if (A10 == "Yes" || A10 == "yes" || A10 == "Y" || A10 == "y") {
        cout << "Aww, friendship ending unlocked! wholesome vibes!" << endl;
    } else if (A10 == "No" || A10 == "no" || A10 == "N" || A10 == "n") {
        cout << "Wow. You just broke a zombies heart even though it doesnt have one." << endl;
        lifescore--;
    } else {
        cout << "Yes or no only, you're almost at the finish line! "<< endl;
    }
}

};

class Moon {
public:
    int lifescores;
    int luckycharms;

    Moon() {
        lifescores = 5;
        luckycharms = rand() % 10 + 1;
    }

    void luckk() {
        cout << "Lucky charm to the rescue!" << endl;
        if (luckycharms == 5) {
            lifescores++;
            cout << "Your life score increased by 1!" << endl;
        } else {
            cout << "Oops! looks like you didn't get lucky with the lucky charm." << endl;
        }
    }

    void QnAns() {
        string Q1 = "You bounce in low gravity. Do you attempt a backflip?";
        cout << Q1 << endl;
        cout << "Answer: ";
        string A1; cin >> A1;
        if (A1 == "Yes" || A1 == "yes" || A1 == "Y" || A1 == "y") {
            cout << "Epic flip! You impressed the moon creatures." << endl;
        } else if (A1 == "No" || A1 == "no" || A1 == "N" || A1 == "n") {
            cout << "Boring… even the moon rocks are shaking their heads." << endl;
            lifescores--;
        } else {
            cout << "Answer with yes or no only." << endl;
        }

        string Q2 = "You find a glowing moon rock. Do you touch it?";
        cout << Q2 << endl;
        cout << "Answer: ";
        string A2; cin >> A2;
        if (A2 == "Yes" || A2 == "yes" || A2 == "Y" || A2 == "y") {
            cout << "Congrats! You now glow like a tiny lantern." << endl;
        } else if (A2 == "No" || A2 == "no" || A2 == "N" || A2 == "n") {
            cout << "Missed a free nightlight upgrade." << endl;
            lifescores--;
        } else {
            cout << "Yes or no only, moon explorer." << endl;
        }

        string Q3 = "Aliens invite you to a karaoke contest. Do you sing?";
        cout << Q3 << endl;
        cout << "Answer: ";
        string A3; cin >> A3;
        if (A3 == "Yes" || A3 == "yes" || A3 == "Y" || A3 == "y") {
            cout << "You out-sang them. Galactic applause!" << endl;
        } else if (A3 == "No" || A3 == "no" || A3 == "N" || A3 == "n") {
            cout << "Silent? Even the craters are unimpressed." << endl;
            lifescores--;
        } else {
            cout << "Please answer yes or no." << endl;
        }

        // Lucky charm after 3rd question
        luckk();

        string Q4 = "You see cheese-shaped rocks. Do you taste one?";
        cout << Q4 << endl;
        cout << "Answer: ";
        string A4; cin >> A4;
        if (A4 == "Yes" || A4 == "yes" || A4 == "Y" || A4 == "y") {
            cout << "Delicious! Moon-cheese boost acquired." << endl;
        } else if (A4 == "No" || A4 == "no" || A4 == "N" || A4 == "n") {
            cout << "You refused the snack and lost a tasty advantage." << endl;
            lifescores--;
        } else {
            cout << "Yes or no only, astronaut." << endl;
        }

        string Q5 = "A crater looks comfy. Do you take a quick nap?";
        cout << Q5 << endl;
        cout << "Answer: ";
        string A5; cin >> A5;
        if (A5 == "Yes" || A5 == "yes" || A5 == "Y" || A5 == "y") {
            cout << "Best nap ever. You recovered energy." << endl;
        } else if (A5 == "No" || A5 == "no" || A5 == "N" || A5 == "n") {
            cout << "No rest? That drained you a bit." << endl;
            lifescores--;
        } else {
            cout << "Yes or no only." << endl;
        }

        string Q6 = "Aliens challenge you to slow-motion hopscotch. Do you play?";
        cout << Q6 << endl;
        cout << "Answer: ";
        string A6; cin >> A6;
        if (A6 == "Yes" || A6 == "yes" || A6 == "Y" || A6 == "y") {
            cout << "You won the galactic hopscotch trophy." << endl;
        } else if (A6 == "No" || A6 == "no" || A6 == "N" || A6 == "n") {
            cout << "Missed bragging rights. Shame." << endl;
            lifescores--;
        } else {
            cout << "Answer with yes or no." << endl;
        }

        string Q7 = "Your helmet fogs up. Do you doodle a smiley face?";
        cout << Q7 << endl;
        cout << "Answer: ";
        string A7; cin >> A7;
        if (A7 == "Yes" || A7 == "yes" || A7 == "Y" || A7 == "y") {
            cout << "Cute doodle. Even aliens smiled." << endl;
        } else if (A7 == "No" || A7 == "no" || A7 == "N" || A7 == "n") {
            cout << "No doodle? Cold-hearted astronaut." << endl;
            lifescores--;
        } else {
            cout << "Yes or no only." << endl;
        }

        // Lucky charm after 7th question
        luckk();

        string Q8 = "You find alien sunglasses. Do you wear them?";
        cout << Q8 << endl;
        cout << "Answer: ";
        string A8; cin >> A8;
        if (A8 == "Yes" || A8 == "yes" || A8 == "Y" || A8 == "y") {
            cout << "Stylish! Moonwalk just got cooler." << endl;
        } else if (A8 == "No" || A8 == "no" || A8 == "N" || A8 == "n") {
            cout << "No shades? Your vibe got roasted." << endl;
            lifescores--;
        } else {
            cout << "Yes or no only." << endl;
        }

        string Q9 = "A button says 'Do Not Press'. Do you press it?";
        cout << Q9 << endl;
        cout << "Answer: ";
        string A9; cin >> A9;
        if (A9 == "Yes" || A9 == "yes" || A9 == "Y" || A9 == "y") {
            cout << "You pressed it... fireworks show activated." << endl;
        } else if (A9 == "No" || A9 == "no" || A9 == "N" || A9 == "n") {
            cout << "Too cautious. You missed the fun." << endl;
            lifescores--;
        } else {
            cout << "Yes or no only." << endl;
        }

        string Q10 = "Aliens ask: 'Wanna lead us?' Do you say yes?";
        cout << Q10 << endl;
        cout << "Answer: ";
        string A10; cin >> A10;
        if (A10 == "Yes" || A10 == "yes" || A10 == "Y" || A10 == "y") {
            cout << "Congrats! You are now the Supreme Moon Overlord." << endl;
        } else if (A10 == "No" || A10 == "no" || A10 == "N" || A10 == "n") {
            cout << "Rejected alien politics. They unfollowed you." << endl;
            lifescores--;
        } else {
            cout << "Yes or no only." << endl;
        }
    }
};

class Earth {
public:
    int earthLifeScore;
    int earthLuckyCharm;

    Earth() {
        earthLifeScore = 5;
        earthLuckyCharm = rand() % 10 + 1;
    }

    void earthLuck() {
        cout << "Lucky charm appears on Earth!" << endl;
        if (earthLuckyCharm == 5) {
            earthLifeScore++;
            cout << "Your Earth life score increased by 1!" << endl;
        } else {
            cout << "No luck this time. Keep trying!" << endl;
        }
    }

    void EarthQnA() {
        string EQ1 = "A zombie is riding a cow. Do you join the ride?";
        cout << EQ1 << endl;
        cout << "Answer: ";
        string EA1; cin >> EA1;
        if (EA1 == "Yes" || EA1 == "yes" || EA1 == "Y" || EA1 == "y") {
            cout << "Woohoo! Cow-riding champion unlocked." << endl;
        } else if (EA1 == "No" || EA1 == "no" || EA1 == "N" || EA1 == "n") {
            cout << "Boring move. The cow judged you." << endl;
            earthLifeScore--;
        } else {
            cout << "Yes or no only, Earthling!" << endl;
        }

        string EQ2 = "A zombie offers you chocolate. Do you accept?";
        cout << EQ2 << endl;
        cout << "Answer: ";
        string EA2; cin >> EA2;
        if (EA2 == "Yes" || EA2 == "yes" || EA2 == "Y" || EA2 == "y") {
            cout << "Sweet victory! Chocolate powers activated." << endl;
        } else if (EA2 == "No" || EA2 == "no" || EA2 == "N" || EA2 == "n") {
            cout << "Skipping dessert? Sad Earth vibes." << endl;
            earthLifeScore--;
        } else {
            cout << "Yes or no only!" << endl;
        }

        string EQ3 = "A zombie challenges you to a mud fight. Do you join?";
        cout << EQ3 << endl;
        cout << "Answer: ";
        string EA3; cin >> EA3;
        if (EA3 == "Yes" || EA3 == "yes" || EA3 == "Y" || EA3 == "y") {
            cout << "Mud-splatter master! You rocked it." << endl;
        } else if (EA3 == "No" || EA3 == "no" || EA3 == "N" || EA3 == "n") {
            cout << "You missed the messiest fun ever." << endl;
            earthLifeScore--;
        } else {
            cout << "Yes or no only!" << endl;
        }

        // Lucky charm after 3rd question
        earthLuck();

        string EQ4 = "You see a zombie planting trees. Do you help?";
        cout << EQ4 << endl;
        cout << "Answer: ";
        string EA4; cin >> EA4;
        if (EA4 == "Yes" || EA4 == "yes" || EA4 == "Y" || EA4 == "y") {
            cout << "Earth grows stronger thanks to you!" << endl;
        } else if (EA4 == "No" || EA4 == "no" || EA4 == "N" || EA4 == "n") {
            cout << "Lazy move. Trees are disappointed." << endl;
            earthLifeScore--;
        } else {
            cout << "Yes or no only!" << endl;
        }

        string EQ5 = "A zombie challenges you to a race across a farm. Do you run?";
        cout << EQ5 << endl;
        cout << "Answer: ";
        string EA5; cin >> EA5;
        if (EA5 == "Yes" || EA5 == "yes" || EA5 == "Y" || EA5 == "y") {
            cout << "Zoom! You crushed the zombie in speed!" << endl;
        } else if (EA5 == "No" || EA5 == "no" || EA5 == "N" || EA5 == "n") {
            cout << "You missed your running glory." << endl;
            earthLifeScore--;
        } else {
            cout << "Yes or no only!" << endl;
        }

        string EQ6 = "Zombie throws a water balloon at you. Do you dodge?";
        cout << EQ6 << endl;
        cout << "Answer: ";
        string EA6; cin >> EA6;
        if (EA6 == "Yes" || EA6 == "yes" || EA6 == "Y" || EA6 == "y") {
            cout << "Splash dodged! You're untouchable." << endl;
        } else if (EA6 == "No" || EA6 == "no" || EA6 == "N" || EA6 == "n") {
            cout << "Wet and defeated. Earth sadness." << endl;
            earthLifeScore--;
        } else {
            cout << "Yes or no only!" << endl;
        }

        string EQ7 = "You find a magic watering can. Do you use it?";
        cout << EQ7 << endl;
        cout << "Answer: ";
        string EA7; cin >> EA7;
        if (EA7 == "Yes" || EA7 == "yes" || EA7 == "Y" || EA7 == "y") {
            cout << "Plants grow instantly! Earth thanks you." << endl;
        } else if (EA7 == "No" || EA7 == "no" || EA7 == "N" || EA7 == "n") {
            cout << "Earth feels a little sad about your choice." << endl;
            earthLifeScore--;
        } else {
            cout << "Yes or no only!" << endl;
        }

        // Lucky charm after 7th question
        earthLuck();

        string EQ8 = "Zombie offers a skateboard. Do you ride it?";
        cout << EQ8 << endl;
        cout << "Answer: ";
        string EA8; cin >> EA8;
        if (EA8 == "Yes" || EA8 == "yes" || EA8 == "Y" || EA8 == "y") {
            cout << "Skateboarding champion! Earth loves your style." << endl;
        } else if (EA8 == "No" || EA8 == "no" || EA8 == "N" || EA8 == "n") {
            cout << "No skateboard? Boring Earth." << endl;
            earthLifeScore--;
        } else {
            cout << "Yes or no only!" << endl;
        }

        string EQ9 = "Zombie shows a puzzle. Do you solve it?";
        cout << EQ9 << endl;
        cout << "Answer: ";
        string EA9; cin >> EA9;
        if (EA9 == "Yes" || EA9 == "yes" || EA9 == "Y" || EA9 == "y") {
            cout << "Brainpower +1! Puzzle solved." << endl;
        } else if (EA9 == "No" || EA9 == "no" || EA9 == "N" || EA9 == "n") {
            cout << "Skipping puzzles? Lazy human vibes." << endl;
            earthLifeScore--;
        } else {
            cout << "Yes or no only!" << endl;
        }

        string EQ10 = "Zombie king asks: 'Do you join our Earth party?' Do you say yes?";
        cout << EQ10 << endl;
        cout << "Answer: ";
        string EA10; cin >> EA10;
        if (EA10 == "Yes" || EA10 == "yes" || EA10 == "Y" || EA10 == "y") {
            cout << "Congrats! Earth party legend unlocked." << endl;
        } else if (EA10 == "No" || EA10 == "no" || EA10 == "N" || EA10 == "n") {
            cout << "Party missed… Earth sadness." << endl;
            earthLifeScore--;
        } else {
            cout << "Yes or no only!" << endl;
        }
    }
};

class Mars {
public:
    int marsLifeScore;
    int marsLuckyCharm;

    Mars() {
        marsLifeScore = 5;
        marsLuckyCharm = rand() % 10 + 1;
    }

    void marsLuck() {
        cout << "Lucky charm lands on Mars!" << endl;
        if (marsLuckyCharm == 5) {
            marsLifeScore++;
            cout << "Your Mars life score increased by 1!" << endl;
        } else {
            cout << "No luck this time. Red planet mischief continues!" << endl;
        }
    }

    void MarsQnA() {
        string MQ1 = "A zombie is surfing on Martian dust storms. Do you join?";
        cout << MQ1 << endl;
        cout << "Answer: ";
        string MA1; cin >> MA1;
        if (MA1 == "Yes" || MA1 == "yes" || MA1 == "Y" || MA1 == "y") {
            cout << "Woohoo! Dust storm surfing champion!" << endl;
        } else if (MA1 == "No" || MA1 == "no" || MA1 == "N" || MA1 == "n") {
            cout << "Missed your interplanetary adrenaline rush." << endl;
            marsLifeScore--;
        } else {
            cout << "Yes or no only, Martian adventurer!" << endl;
        }

        string MQ2 = "Zombie hands you a glowing red rock. Do you keep it?";
        cout << MQ2 << endl;
        cout << "Answer: ";
        string MA2; cin >> MA2;
        if (MA2 == "Yes" || MA2 == "yes" || MA2 == "Y" || MA2 == "y") {
            cout << "Martian power rock acquired!" << endl;
        } else if (MA2 == "No" || MA2 == "no" || MA2 == "N" || MA2 == "n") {
            cout << "You missed a mysterious Martian boost." << endl;
            marsLifeScore--;
        } else {
            cout << "Yes or no only!" << endl;
        }

        string MQ3 = "A zombie challenges you to hop across craters. Do you hop?";
        cout << MQ3 << endl;
        cout << "Answer: ";
        string MA3; cin >> MA3;
        if (MA3 == "Yes" || MA3 == "yes" || MA3 == "Y" || MA3 == "y") {
            cout << "Craters conquered! Mars hop champion!" << endl;
        } else if (MA3 == "No" || MA3 == "no" || MA3 == "N" || MA3 == "n") {
            cout << "You stayed grounded. Craters disappointed." << endl;
            marsLifeScore--;
        } else {
            cout << "Yes or no only!" << endl;
        }

        // Lucky charm after 3rd question
        marsLuck();

        string MQ4 = "Zombie offers Martian ice cream. Do you eat it?";
        cout << MQ4 << endl;
        cout << "Answer: ";
        string MA4; cin >> MA4;
        if (MA4 == "Yes" || MA4 == "yes" || MA4 == "Y" || MA4 == "y") {
            cout << "Sweet Martian vibes! Energy +1." << endl;
        } else if (MA4 == "No" || MA4 == "no" || MA4 == "N" || MA4 == "n") {
            cout << "Missed the cold cosmic treat." << endl;
            marsLifeScore--;
        } else {
            cout << "Yes or no only!" << endl;
        }

        string MQ5 = "Zombie challenges you to a low-gravity jump. Do you jump?";
        cout << MQ5 << endl;
        cout << "Answer: ";
        string MA5; cin >> MA5;
        if (MA5 == "Yes" || MA5 == "yes" || MA5 == "Y" || MA5 == "y") {
            cout << "Flying high! Martian gravity obeys you." << endl;
        } else if (MA5 == "No" || MA5 == "no" || MA5 == "N" || MA5 == "n") {
            cout << "Jump skipped. Gravity rules." << endl;
            marsLifeScore--;
        } else {
            cout << "Yes or no only!" << endl;
        }

        string MQ6 = "Zombie throws a meteor at you. Do you dodge?";
        cout << MQ6 << endl;
        cout << "Answer: ";
        string MA6; cin >> MA6;
        if (MA6 == "Yes" || MA6 == "yes" || MA6 == "Y" || MA6 == "y") {
            cout << "Meteor dodged! Martian hero vibes." << endl;
        } else if (MA6 == "No" || MA6 == "no" || MA6 == "N" || MA6 == "n") {
            cout << "Boom! Ouch. Life decreases." << endl;
            marsLifeScore--;
        } else {
            cout << "Yes or no only!" << endl;
        }

        string MQ7 = "You find a jetpack. Do you use it?";
        cout << MQ7 << endl;
        cout << "Answer: ";
        string MA7; cin >> MA7;
        if (MA7 == "Yes" || MA7 == "yes" || MA7 == "Y" || MA7 == "y") {
            cout << "Jetpack engaged! You fly over zombies!" << endl;
        } else if (MA7 == "No" || MA7 == "no" || MA7 == "N" || MA7 == "n") {
            cout << "Walking only? Boring on Mars." << endl;
            marsLifeScore--;
        } else {
            cout << "Yes or no only!" << endl;
        }

        // Lucky charm after 7th question
        marsLuck();

        string MQ8 = "Zombie offers Martian helmet. Do you wear it?";
        cout << MQ8 << endl;
        cout << "Answer: ";
        string MA8; cin >> MA8;
        if (MA8 == "Yes" || MA8 == "yes" || MA8 == "Y" || MA8 == "y") {
            cout << "Helmet on! You look epic on Mars." << endl;
        } else if (MA8 == "No" || MA8 == "no" || MA8 == "N" || MA8 == "n") {
            cout << "Helmet skipped? Your head disagrees." << endl;
            marsLifeScore--;
        } else {
            cout << "Yes or no only!" << endl;
        }

        string MQ9 = "Zombie shows a Martian dance move. Do you copy?";
        cout << MQ9 << endl;
        cout << "Answer: ";
        string MA9; cin >> MA9;
        if (MA9 == "Yes" || MA9 == "yes" || MA9 == "Y" || MA9 == "y") {
            cout << "Dance mastered! Martian applause!" << endl;
        } else if (MA9 == "No" || MA9 == "no" || MA9 == "N" || MA9 == "n") {
            cout << "No dance? Zombies disappointed." << endl;
            marsLifeScore--;
        } else {
            cout << "Yes or no only!" << endl;
        }

        string MQ10 = "Zombie king asks: 'Do you join the Mars feast?' Do you say yes?";
        cout << MQ10 << endl;
        cout << "Answer: ";
        string MA10; cin >> MA10;
        if (MA10 == "Yes" || MA10 == "yes" || MA10 == "Y" || MA10 == "y") {
            cout << "Mars feast legend unlocked! Party time!" << endl;
        } else if (MA10 == "No" || MA10 == "no" || MA10 == "N" || MA10 == "n") {
            cout << "Feast missed… Martian sad vibes." << endl;
            marsLifeScore--;
        } else {
            cout << "Yes or no only!" << endl;
        }
    }
};

class Jupiter {
public:
    int jupiterLifeScore;
    int jupiterLuckyCharm;

    Jupiter() {
        jupiterLifeScore = 5;
        jupiterLuckyCharm = rand() % 10 + 1;
    }

    void jupiterLuck() {
        cout << "Lucky charm strikes on Jupiter!" << endl;
        if (jupiterLuckyCharm == 5) {
            jupiterLifeScore++;
            cout << "Your Jupiter life score increased by 1!" << endl;
        } else {
            cout << "No luck this time. Stormy Jupiter vibes continue!" << endl;
        }
    }

    void JupiterQnA() {
        string JQ1 = "A zombie is bouncing on Jupiters massive storms. Do you join?";
        cout << JQ1 << endl;
        cout << "Answer: ";
        string JA1; cin >> JA1;
        if (JA1 == "Yes" || JA1 == "yes" || JA1 == "Y" || JA1 == "y") {
            cout << "Storm surfing pro! Giant planet vibes!" << endl;
        } else if (JA1 == "No" || JA1 == "no" || JA1 == "N" || JA1 == "n") {
            cout << "You stayed grounded. Storms unimpressed." << endl;
            jupiterLifeScore--;
        } else {
            cout << "Yes or no only, giant planet adventurer!" << endl;
        }

        string JQ2 = "Zombie offers a floating cloud potion. Do you drink it?";
        cout << JQ2 << endl;
        cout << "Answer: ";
        string JA2; cin >> JA2;
        if (JA2 == "Yes" || JA2 == "yes" || JA2 == "Y" || JA2 == "y") {
            cout << "Potion power! You feel Jovian energy surge." << endl;
        } else if (JA2 == "No" || JA2 == "no" || JA2 == "N" || JA2 == "n") {
            cout << "Skipped the potion. Weak storm vibes…" << endl;
            jupiterLifeScore--;
        } else {
            cout << "Yes or no only!" << endl;
        }

        string JQ3 = "Zombie challenges you to dodge lightning bolts. Do you dodge?";
        cout << JQ3 << endl;
        cout << "Answer: ";
        string JA3; cin >> JA3;
        if (JA3 == "Yes" || JA3 == "yes" || JA3 == "Y" || JA3 == "y") {
            cout << "Lightning dodged! Jovian reflexes on point!" << endl;
        } else if (JA3 == "No" || JA3 == "no" || JA3 == "N" || JA3 == "n") {
            cout << "Zapped! Life score decreased." << endl;
            jupiterLifeScore--;
        } else {
            cout << "Yes or no only!" << endl;
        }

        // Lucky charm after 3rd question
        jupiterLuck();

        string JQ4 = "Zombie offers you a floating gravity helmet. Do you wear it?";
        cout << JQ4 << endl;
        cout << "Answer: ";
        string JA4; cin >> JA4;
        if (JA4 == "Yes" || JA4 == "yes" || JA4 == "Y" || JA4 == "y") {
            cout << "Helmet on! Jovian survival mode activated!" << endl;
        } else if (JA4 == "No" || JA4 == "no" || JA4 == "N" || JA4 == "n") {
            cout << "Helmet skipped? Stormy winds disagree." << endl;
            jupiterLifeScore--;
        } else {
            cout << "Yes or no only!" << endl;
        }

        string JQ5 = "Zombie challenges you to jump across floating rocks. Do you jump?";
        cout << JQ5 << endl;
        cout << "Answer: ";
        string JA5; cin >> JA5;
        if (JA5 == "Yes" || JA5 == "yes" || JA5 == "Y" || JA5 == "y") {
            cout << "Jump mastered! Jovian agility unlocked!" << endl;
        } else if (JA5 == "No" || JA5 == "no" || JA5 == "N" || JA5 == "n") {
            cout << "Rocks untouched. Missed opportunity!" << endl;
            jupiterLifeScore--;
        } else {
            cout << "Yes or no only!" << endl;
        }

        string JQ6 = "Zombie throws a mini storm at you. Do you deflect?";
        cout << JQ6 << endl;
        cout << "Answer: ";
        string JA6; cin >> JA6;
        if (JA6 == "Yes" || JA6 == "yes" || JA6 == "Y" || JA6 == "y") {
            cout << "Storm deflected! Life safe!" << endl;
        } else if (JA6 == "No" || JA6 == "no" || JA6 == "N" || JA6 == "n") {
            cout << "Storm hits! Life decreased." << endl;
            jupiterLifeScore--;
        } else {
            cout << "Yes or no only!" << endl;
        }

        string JQ7 = "You find a giant ring shield. Do you pick it up?";
        cout << JQ7 << endl;
        cout << "Answer: ";
        string JA7; cin >> JA7;
        if (JA7 == "Yes" || JA7 == "yes" || JA7 == "Y" || JA7 == "y") {
            cout << "Shield equipped! Jupiter defender mode!" << endl;
        } else if (JA7 == "No" || JA7 == "no" || JA7 == "N" || JA7 == "n") {
            cout << "Shield ignored. Oof." << endl;
            jupiterLifeScore--;
        } else {
            cout << "Yes or no only!" << endl;
        }

        // Lucky charm after 7th question
        jupiterLuck();

        string JQ8 = "Zombie leader shows you thunder dance. Do you mimic it?";
        cout << JQ8 << endl;
        cout << "Answer: ";
        string JA8; cin >> JA8;
        if (JA8 == "Yes" || JA8 == "yes" || JA8 == "Y" || JA8 == "y") {
            cout << "Thunder dance mastered! Zombies impressed!" << endl;
        } else if (JA8 == "No" || JA8 == "no" || JA8 == "N" || JA8 == "n") {
            cout << "No thunder dance? Leader unimpressed." << endl;
            jupiterLifeScore--;
        } else {
            cout << "Yes or no only!" << endl;
        }

        string JQ9 = "Zombie gives you floating star juice. Do you drink it?";
        cout << JQ9 << endl;
        cout << "Answer: ";
        string JA9; cin >> JA9;
        if (JA9 == "Yes" || JA9 == "yes" || JA9 == "Y" || JA9 == "y") {
            cout << "Star juice boosts your cosmic energy!" << endl;
        } else if (JA9 == "No" || JA9 == "no" || JA9 == "N" || JA9 == "n") {
            cout << "Energy missed. Life decreases." << endl;
            jupiterLifeScore--;
        } else {
            cout << "Yes or no only!" << endl;
        }

        string JQ10 = "Final zombie asks: 'Join Jupiter feast?' Do you say yes?";
        cout << JQ10 << endl;
        cout << "Answer: ";
        string JA10; cin >> JA10;
        if (JA10 == "Yes" || JA10 == "yes" || JA10 == "Y" || JA10 == "y") {
            cout << "Jupiter feast legend unlocked! Cosmic vibes!" << endl;
        } else if (JA10 == "No" || JA10 == "no" || JA10 == "N" || JA10 == "n") {
            cout << "Feast missed… Jovian sad vibes." << endl;
            jupiterLifeScore--;
        } else {
            cout << "Yes or no only!" << endl;
        }
    }
};

bool registration (){
    string username;
    string password;
    string username1;
    string password1;
    
    cout<<"---Sign Up---"<<endl;
    cout<<"Enter username: "<<endl;
    cin>>username;
    cout<<"Enter password: "<<endl;
    cin>>password;
    cout<<"Sign up done"<<endl<<endl;
    
    cout<<"---Login---"<<endl;
    cout<<"Enter username: "<<endl;
    cin>>username1;
    cout<<"Enter password: "<<endl;
    cin>>password1;
    if(username1==username && password1==password){
        cout<<"Login Successfull"<<endl;
        return true;
    }
    else{
        cout<<"Invalid Credentials"<<endl;
        return false;
    }
}

int main(){
    if(registration()){
   cout << endl << "===== RULES OF THE GAME =====" << endl;
cout << "1. You will be asked 10 questions." << endl;
cout << "2. Each question requires a YES or NO answer only." << endl;
cout << "3. You start with 5 life scores." << endl;
cout << "4. Each wrong answer decreases your life by 1." << endl;
cout << "5. If your life score reaches 0, the game ends immediately." << endl;
cout << "6. After the 3rd and 7th question, a Lucky Charm will appear." << endl;
cout << "   - If the Lucky Charm generates the number 5, your life score increases by 1." << endl;
cout << "7. Survive all 10 questions to win!" << endl;
cout << "=============================" << endl << endl;

    }
    else{
       cout<<"Try logging in again"<<endl;
        return 0;
    }
    
cout<<"---GAME STARTS---"<<endl;
cout<<"Choose the planet or stars whose zombies you wanna face!"<<endl;
    cout<<"1. Sun"<<endl<<"2. Earth"<<endl<<"3. Moon"<<endl<<"4. Mars"<<endl<<"5. Jupiter"<<endl;
    string option;
    cin>>option;
    
    if (option == "Sun" || option == "sun") {
        Sun s;
        s.QnA();  
    }
    else if(option == "Moon" || option == "moon"){
        Moon m;
        m.QnAns();
    }
    else if(option == "Earth" || option == "earth"){
        Earth e;
        e.EarthQnA();
    }
    else if(option == "Mars" || option == "mars"){
        Mars m;
        m.MarsQnA();
    }
    else if(option == "Jupiter" || option == "jupiter"){
        Jupiter j;
        j.JupiterQnA();
    }
    else{
        cout<<"broo are you dizzy or smthn?! you entered the wrong choice lol"<<endl;
    }
}
