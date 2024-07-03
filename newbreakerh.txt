#include <SFML/Graphics.hpp>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace sf;
class Game
{
public:
	Game(int w, int h, std::string title);
	~Game();
	void setspeed(float sped);
	void reset();
	void event();
	void update(float DT);
	void render();

	void run();
private:
	RenderWindow* window = NULL;
	Event e;
	int width;
	int height;
	CircleShape ball;
	float initialspeed;
	float angle;
	Vector2f speed;
	RectangleShape paddle;
	RectangleShape brick;
	Font font;
	Text score;
	Text name;
	bool* isbrick;
	float speedinc;

};
