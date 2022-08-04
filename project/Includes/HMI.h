#pragma once

#ifndef HMI_HMI_H
#define HMI_HMI_H

#include<stdint.h>

namespace pico_HMI{
    class HMI
    {
        private:
            uint32_t State;
            int Command;
            /// \brief Sends single 8bit command to ssd1306 controller
            /// \param command - byte to be sent to controller
            void cmd(unsigned char command);

        public:
            /// \brief HMI constructor initialized HMI and sets all required registers for operation
            /// \param State - HMI Initial status 
            /// \param command - Initialization command
            HMI(uint32_t State, int Command);
            void setcmd(unsigned char cmd);
    };
}

#endif //HMI_HMI_H
