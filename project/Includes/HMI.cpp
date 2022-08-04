#include "HMI.h"

namespace pico_HMI{

    HMI::HMI(uint32_t State, int Command)
    {
        this->Command = Command;
        this->State = State;
    }

    void HMI::cmd(unsigned char command) 
    {
        this->Command = command;
    }

    void HMI::setcmd(unsigned char cmd)
    {
        this->cmd(cmd);
    }
}