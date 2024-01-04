#include <iostream>
#include "game.h"

int main() {
	Game game;
	// 게임 초기화
	game.init();

	// WHILE
	while (game.is_playing()) {
		// 입력 관리
		game.handle_input();

		// 업데이트
		game.update();

		// 화면 표시
		game.draw();
	}

	// 게임 종료.
	return 0;
}