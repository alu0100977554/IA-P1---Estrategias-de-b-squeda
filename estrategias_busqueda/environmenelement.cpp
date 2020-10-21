#include "environmenelement.h"

EnvironmentElement::EnvironmentElement():
    x_pos_(),
    y_pos_() {}

EnvironmentElement::EnvironmentElement(int x_pos, int y_pos):
    x_pos_(x_pos),
    y_pos_(y_pos) {}

EnvironmentElement::~EnvironmentElement();
