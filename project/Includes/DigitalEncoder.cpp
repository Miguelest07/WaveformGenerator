#include "DigitalEncoder.h"

namespace pico_DigitalEncoder{

    DigitalEncoder::DigitalEncoder(uint32_t State, int Command)
    {
        this->Command = Command;
        this->State = State;
    }

    void DigitalEncoder::cmd(unsigned char command) 
    {
        this->Command = command;
    }
}