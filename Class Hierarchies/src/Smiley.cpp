#include "Smiley.h"

void Smiley::move(Point to){

}

void Smiley::draw() const{

    Circle::draw();

    for(auto p: eyes) p-> draw();

    mouth -> draw();
}

void Smiley::rotate(int i){

}

void Smiley::set_mouth(Shape* s){

}

void Smiley::wink(int i){

}
