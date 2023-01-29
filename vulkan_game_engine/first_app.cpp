#include "first_app.hpp"
#include "lve_device.hpp"

namespace lve {

void FirstApp::run() {

    while (!lveWindow.shouldClose()) {
        glfwPollEvents();
    }
};
}