#pragma once
#include <iostream>

class Game {
private:
	int m_score;
	int m_user_input;
	bool m_is_playing;

public:
	Game();
	~Game();

	void init();
	bool is_playing();
	void handle_input();
	void update();
	void draw();
};