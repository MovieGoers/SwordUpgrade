#include <iostream>
#include "game.h"

int main() {
	Game game;
	// ���� �ʱ�ȭ
	game.init();

	// WHILE
	while (game.is_playing()) {
		// �Է� ����
		game.handle_input();

		// ������Ʈ
		game.update();

		// ȭ�� ǥ��
		game.draw();
	}

	// ���� ����.
	return 0;
}