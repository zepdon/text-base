#include <iostream>
#include <string>

using namespace std;

// Function to display the story and get the player's choice
int makeChoice(string prompt, string* options, int numOptions) {
    int choice;
    cout << prompt << endl;
    for (int i = 0; i < numOptions; ++i) {
        cout << i + 1 << ". " << options[i] << endl;
    }
    cout << "Enter your choice (1 to " << numOptions << "): ";
    cin >> choice;
    return choice;
}

int main() {
    cout << "Welcome to the Mystical Quest Adventure Game!" << endl;

    // Introduction
    cout << "You find yourself in the mystical realm of Eldoria, a land filled with magic, ancient creatures, and hidden treasures. Legends speak of a powerful artifact known as the 'Crystal of Eternity,' hidden deep within the Enchanted Caverns." << endl << endl;

    // First choice
    string firstOptions[] = {"Visit the wise Oracle for guidance", "Explore the Whispering Woods for clues"};
    int firstChoice = makeChoice("How do you begin your quest?", firstOptions, 2);

    if (firstChoice == 1) {
        // Oracle's guidance
        cout << "You make your way to the secluded dwelling of the wise Oracle, a mystical being with knowledge of the past and future." << endl << endl;

        // Second choice - with the Oracle
        string secondOptionsOracle[] = {"Seek information about the Crystal of Eternity", "Ask for a magical charm for protection", "Leave and rely on your instincts"};
        int secondChoiceOracle = makeChoice("What do you ask the Oracle for?", secondOptionsOracle, 3);

        if (secondChoiceOracle == 1) {
            cout << "The Oracle shares ancient tales about the Crystal of Eternity, providing you with a rough map to the Enchanted Caverns." << endl << endl;

            // Third choice - after seeking information
            string thirdOptionsOracle[] = {"Ask for a magical charm", "Decline the charm and express gratitude", "Leave and rely on your instincts"};
            int thirdChoiceOracle = makeChoice("Before leaving, the Oracle offers a magical charm for protection. Do you accept?", thirdOptionsOracle, 3);

            if (thirdChoiceOracle == 1) {
                cout << "Accepting the magical charm, you feel a surge of protective energy as you venture into the unknown." << endl << endl;
            } else if (thirdChoiceOracle == 2) {
                cout << "Expressing gratitude but declining the charm, you leave the Oracle's dwelling and rely on your instincts for protection." << endl << endl;
            } else {
                cout << "Relying on your instincts, you set out on your quest without any additional magical assistance." << endl << endl;
            }

        } else if (secondChoiceOracle == 2) {
            cout << "The Oracle crafts a magical charm imbued with protective enchantments, which you gratefully accept before setting out on your quest." << endl << endl;
        } else {
            cout << "Deciding to rely on your instincts, you thank the Oracle and set out on your quest without any additional guidance." << endl << endl;
        }

    } else {
        // Exploring the Whispering Woods
        cout << "You enter the mystical Whispering Woods, where ancient spirits are said to share secrets with those who listen closely." << endl << endl;

        // Second choice - in the Whispering Woods
        string secondOptionsWoods[] = {"Listen to the whispers for information", "Search for magical plants for protection"};
        int secondChoiceWoods = makeChoice("How do you proceed in the Whispering Woods?", secondOptionsWoods, 2);

        if (secondChoiceWoods == 1) {
            cout << "As you listen to the whispers of the ancient spirits, you gain insights into the location of the Enchanted Caverns." << endl << endl;

            // Third choice - after listening to whispers
            string thirdOptionsWoods[] = {"Continue listening for more guidance", "Search for magical plants for protection", "Leave and rely on your instincts"};
            int thirdChoiceWoods = makeChoice("Do you continue listening for guidance, search for magical plants, or rely on your instincts?", thirdOptionsWoods, 3);

            if (thirdChoiceWoods == 1) {
                cout << "Continuing to listen, the ancient spirits guide you with additional information about the dangers you might face in the Enchanted Caverns." << endl << endl;
            } else if (thirdChoiceWoods == 2) {
                cout << "You search for magical plants and find herbs that enhance your abilities, providing a form of natural protection." << endl << endl;
            } else {
                cout << "Relying on your instincts, you leave the Whispering Woods and set out on your quest without additional guidance or magical assistance." << endl << endl;
            }

        } else {
            cout << "You search for magical plants in the Whispering Woods, discovering herbs that enhance your abilities and provide a form of natural protection." << endl << endl;
        }
    }

    // Challenges in the Enchanted Caverns
    cout << "Armed with knowledge, magic, or natural protection, you set forth toward the Enchanted Caverns. As you enter the caverns, you face challenges:" << endl << endl;

    // Fourth choice - Challenges in the caverns
    string fourthOptionsCaverns[] = {"Navigate through a maze of illusions", "Confront guardian spirits", "Solve ancient riddles", "Avoid traps set by previous adventurers"};
    int fourthChoiceCaverns = makeChoice("Which challenge do you face first?", fourthOptionsCaverns, 4);

    if (fourthChoiceCaverns == 1) {
        cout << "You navigate through the maze of illusions, using your wits to discern reality from deception. The path becomes clearer as you progress." << endl << endl;
    } else if (fourthChoiceCaverns == 2) {
        cout << "Confronting the guardian spirits, you engage in a battle of wills. Through respect and diplomacy, you earn their trust, and they allow you to pass." << endl << endl;
    } else if (fourthChoiceCaverns == 3) {
        cout << "Solving the ancient riddles, you unlock hidden passages and reveal the correct path to the heart of the caverns where the Crystal of Eternity awaits." << endl << endl;
    } else {
        cout << "Avoiding the traps set by previous adventurers, you carefully maneuver through the caverns, utilizing your knowledge to sidestep danger." << endl << endl;
    }

    // Unexpected Encounter
    cout << "As you delve deeper into the caverns, you encounter an unexpected presence – a shadowy figure standing before the entrance to the Crystal's chamber." << endl << endl;

    // Fifth choice - Dealing with the shadowy figure
    string fifthOptionsShadowyFigure[] = {"Approach the figure cautiously", "Confront the figure directly", "Attempt to sneak past the figure", "Engage in conversation with the figure"};
    int fifthChoiceShadowyFigure = makeChoice("How do you approach the shadowy figure?", fifthOptionsShadowyFigure, 4);

    if (fifthChoiceShadowyFigure == 1) {
        cout << "Approaching cautiously, you observe that the figure is a guardian spirit, assigned to protect the Crystal. It acknowledges your quest and allows you to proceed." << endl << endl;
    } else if (fifthChoiceShadowyFigure == 2) {
        cout << "Confronting the figure directly, you learn that it is a lost adventurer seeking guidance. You offer assistance and share your knowledge of the caverns." << endl << endl;
    } else if (fifthChoiceShadowyFigure == 3) {
        cout << "Sneaking past the figure, you manage to avoid direct confrontation. However, the figure senses your presence and questions your intentions." << endl << endl;

        // Sixth choice - Interaction after sneaking
        string sixthOptionsSneaking[] = {"Explain your quest and intentions", "Apologize and reveal your purpose", "Try to deceive the figure", "Continue without explaining"};
        int sixthChoiceSneaking = makeChoice("How do you respond after being questioned?", sixthOptionsSneaking, 4);

        if (sixthChoiceSneaking == 1) {
            cout << "You explain your quest and intentions, earning the figure's trust. It shares additional insights about the Crystal's history before allowing you to proceed." << endl << endl;
        } else if (sixthChoiceSneaking == 2) {
            cout << "Apologizing and revealing your purpose, you disarm the figure's suspicion. It shares valuable information about the caverns before allowing you to continue." << endl << endl;
        } else if (sixthChoiceSneaking == 3) {
            cout << "Attempting to deceive the figure, your ruse is uncovered. The figure, disappointed, insists on accompanying you to ensure your honesty." << endl << endl;
        } else {
            cout << "Continuing without explaining, the figure remains wary but lets you pass without further interference." << endl << endl;
        }

    } else {
        cout << "Engaging in conversation with the figure, you discover that it is a lost adventurer seeking guidance. You offer assistance and share your knowledge of the caverns." << endl << endl;
    }

    // Ancient Guardian's Test
    cout << "As you approach the Crystal's chamber, an ancient guardian manifests, testing your worthiness to access the Crystal of Eternity." << endl << endl;

    // Seventh choice - The Guardian's Test
    string seventhOptionsGuardianTest[] = {"Demonstrate your knowledge of Eldoria's history", "Display mastery of magical abilities", "Show humility and respect", "Invoke the powers of the Crystal"};
    int seventhChoiceGuardianTest = makeChoice("How do you respond to the Ancient Guardian's Test?", seventhOptionsGuardianTest, 4);

    if (seventhChoiceGuardianTest == 1) {
        cout << "Demonstrating your knowledge of Eldoria's history, you impress the Ancient Guardian with your understanding of the realm's rich past." << endl << endl;
    } else if (seventhChoiceGuardianTest == 2) {
        cout << "Displaying mastery of magical abilities, you showcase your control over mystical forces, earning the respect of the Ancient Guardian." << endl << endl;
    } else if (seventhChoiceGuardianTest == 3) {
        cout << "Showing humility and respect, you approach the Ancient Guardian with reverence, acknowledging the importance of the Crystal and your quest." << endl << endl;
    } else {
        cout << "Invoking the powers of the Crystal, you channel its energy to perform a feat of magic, demonstrating your connection with the artifact. The Ancient Guardian allows you to proceed." << endl << endl;
    }

    // A Twist in the Plot
    cout << "As you finally stand before the Crystal of Eternity, ready to absorb its power, a sudden tremor shakes the caverns. The guardian spirit and the Ancient Guardian both react with alarm." << endl << endl;

    // Eighth choice - Responding to the tremor
    string eighthOptionsTremor[] = {"Absorb the Crystal's power regardless", "Seek guidance from the guardian spirit", "Consult the Ancient Guardian", "Leave the caverns immediately"};
    int eighthChoiceTremor = makeChoice("How do you respond to the sudden tremor?", eighthOptionsTremor, 4);

    if (eighthChoiceTremor == 1) {
        cout << "Ignoring the tremor, you proceed to absorb the Crystal's power. The tremor subsides, and you feel an unprecedented surge of energy within you." << endl << endl;
    } else if (eighthChoiceTremor == 2) {
        cout << "Seeking guidance from the guardian spirit, you learn that the Crystal is reacting to an external threat. The spirit offers its assistance to face the impending danger." << endl << endl;
    } else if (eighthChoiceTremor == 3) {
        cout << "Consulting the Ancient Guardian, you discover that the Crystal is a source of balance in Eldoria, and its disturbance could lead to catastrophic consequences. The Ancient Guardian urges you to investigate." << endl << endl;
    } else {
        cout << "Choosing caution, you decide to leave the caverns immediately. As you exit, the tremors intensify, and you sense a powerful force at play." << endl << endl;
    }

    // Climactic Finale
    cout << "In the heart of the caverns, you uncover a plot by a dark sorcerer attempting to corrupt the Crystal's power for nefarious purposes. The guardian spirit, Ancient Guardian, and you join forces to thwart the sorcerer's plans." << endl;
    cout << "After a fierce battle, you emerge victorious, ensuring the safety of the Crystal and the mystical realm of Eldoria. The guardian spirit expresses gratitude, and the Ancient Guardian commends your bravery." << endl << endl;

    // Conclusion of the quest
    cout << "With the power of the Crystal of Eternity now within you, enhanced by the bonds formed during your quest, you emerge from the Enchanted Caverns as a true guardian of Eldoria." << endl << endl;
    cout << "Congratulations! You have completed the extended Mystical Quest Adventure with a thrilling climax and a twist in the plot." << endl << endl;

    return 0;
}
