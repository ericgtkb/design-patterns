#include "widget_manager.h"

int main() {
    WindowManager manager {};
    manager.get_text_box()->set_text("Mediator pattern!!!");
    manager.get_draw_button()->clicked();
    manager.get_clear_button()->clicked();
    manager.get_text_box()->set_text("Manager is handling the communication between widgets!!!");
    manager.get_clear_button()->clicked();
    return 0;
}
