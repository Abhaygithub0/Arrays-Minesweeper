#pragma once
#include <SFML/Graphics.hpp>

class GameplayUIController
{
private:
	const int font_size = 110;

	const float mine_text_top_offset = 65.f;
	const float mine_text_left_offset = 680.f;

	const float timer_text_top_offset = 65.f;
	const float timer_text_left_offset = 1120.f;

	const float restart_button_top_offset = 100.f;
	const float restart_button_left_offset = 900.f;

	const float button_height = 80.f;
	const float button_width = 80.f;

	const int tile_height = 32;

	bool b_left_mouse_button_pressed;

	sf::RenderWindow* game_window;

	sf::Texture restart_button_texture;
	sf::Sprite restart_button_sprite;

	sf::Texture outscal_logo_texture;
	sf::Sprite outscal_logo_sprite;

	void initializeButtonImage();
	void scaleButtonImage();
	void setButtonImagePosition();
	void drawRestartButton();
	void drawMinesCount();
	void drawRemainingTimer();
	void handleButtonInteractions();
	bool clickedButton(sf::Sprite* button_sprite, sf::Vector2f mouse_position);

public:
	GameplayUIController();
	~GameplayUIController();

	void initialize();
	void update();
	void render();
};