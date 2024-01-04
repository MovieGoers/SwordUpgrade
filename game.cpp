#include "game.h"

Game::Game() {

};

Game::~Game() {

};

void Game::init() {
	m_user_input = 0;
	m_is_playing = true;
	m_score = 0;
};

bool Game::is_playing() {
	return m_is_playing;
};

void Game::handle_input() {
	std::cin >> m_user_input;
};

void Game::update() {
	m_score = m_user_input;
	if (m_score == -1)
		m_is_playing = false;
};

void Game::draw() {
	std::cout << "user input : " << m_user_input << " score : " << m_score << '\n';
};