# CPT113 Hackathon 2 - Group 47
### Group members:
1. Muhammad Haziq bin Sazali (163646)
2. Muhammad Arfan bin Zuhaime (161508)
3. Muhammad Haziq bin Mohamad Rodzali (161423)

## SISWA SIMULATOR

### Description of our game
The game is a text-based adventure where the player navigates through a series of rooms in a dungeon. The player's objective is to defeat enemies, collect items, and reach the exit to win the game. The game is played by interacting with the text-based interface through commands entered by the player.

The dungeon consists of interconnected rooms represented by a linked list. Each room has a unique identifier, a description, and may contain an enemy or an item. The player starts in the first room and can move to adjacent rooms by choosing a direction (north, south, east, or west) based on the available exits.

Enemies represent adversaries that the player must defeat to progress in the game. Each enemy has a name, health points (HP), and a damage value. The player engages in combat with enemies by attacking them, deducting their HP based on the player's attack strength. The player's HP and attack strength are predefined.

Items represent objects that the player can collect and use to aid in their journey. Each item has a name and a description. The player can pick up items found in rooms and add them to their inventory for later use. The code snippet does not specify the exact functionality or effects of the items, so their specific use may vary.

The game continues until the player either defeats all the enemies and reaches the exit or loses all their HP, resulting in a game over.

It's important to note that the provided code is a simplified example and may not encompass all the features and mechanics of the complete game. The description above is based solely on the information available in the code snippet.

### Features of the game:
1. Room-based navigation: The game is structured around different rooms or locations that players can move between.
2. Object interaction: Players can interact with objects within the game world, potentially picking them up, using them, or combining them to progress.
3. Character interaction: The game involves interactions with characters, which may include conversations, quests, or challenges.
4. Objective-based gameplay: The game likely includes specific goals or objectives that players need to accomplish to advance further or complete the game.

### How to play the game:
To play the game, players typically enter commands or make choices through a text-based interface. They can explore different rooms, interact with objects and characters by typing commands, and solve puzzles or complete quests to progress in the game.

### How object-oriented concepts were used to develop the game:
Object-oriented concepts are commonly used in game development to organize and structure code. In your game, object-oriented programming (OOP) may have been employed to represent various entities within the game, such as rooms, objects, characters, and the player itself. Each of these entities can be represented as objects with their own properties (attributes) and behaviors (methods).

For example, a Room class could have attributes like name, description, and a list of objects present in that room. The Room object's methods could include functions for displaying the room description, adding or removing objects, and handling player interaction within the room.

Similarly, objects and characters in the game could be represented as classes, with their own attributes and behaviors. This approach allows for modular and organized code, making it easier to manage and expand the game's functionality.

### How linked lists play a role in the game:
Linked lists are a data structure commonly used in programming. While their specific role in your game is not entirely clear from the given information, linked lists could potentially be used to represent sequences or collections of objects or events in the game.

For instance, if your game has a sequence of actions or events that need to occur in a specific order, a linked list could be used to maintain and traverse that sequence. Each node in the linked list could represent an action or event, and the list's links would connect them in the correct order. This allows for easy iteration and management of the sequence.

Overall, the use of linked lists in your game would depend on the specific mechanics or features you have implemented, but they can provide a convenient way to organize and manipulate ordered collections of data.
