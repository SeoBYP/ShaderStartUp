
#include <glad/glad.h>       // GLAD�� ��� ����
#include <GLFW/glfw3.h>      // GLFW�� ��� ����
#include <iostream>

using namespace std;

int main() {
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	GLFWwindow* window = glfwCreateWindow(800, 600, "ShaderStartUp", NULL, NULL);
	if (window == NULL)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return  -1;
	}
	glfwMakeContextCurrent(window);
	return 0;
}

