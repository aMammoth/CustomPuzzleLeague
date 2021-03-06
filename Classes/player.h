#ifndef __PLAYER_H_CPL__
#define __PLAYER_H_CPL__

#include <memory>
class Profile;
class Character;
class BlockTheme;

class Player
{
public:
	//Selected profile
	std::shared_ptr<Profile> profile; 
	//Selected character
	std::shared_ptr<Character> player; 
	//Selected block theme
	std::shared_ptr<BlockTheme> block_theme;
	//Selected difficulty
	uint16_t difficulty;
	//Index of its gamepad
	uint16_t gamepad_index;
};

#endif