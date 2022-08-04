#pragma once

#ifndef DIGITAL_ENCODER_H
#define DIGITAL_ENCODER_H

#include<stdint.h>

namespace pico_DigitalEncoder{
    class DigitalEncoder
    {
        private:
            uint32_t State;
            int Command;
            /// \brief Sends single 8bit command to DigitalEncoder
            /// \param command - byte to be sent to controller
            void cmd(unsigned char command);

        public:
            /// \brief DigitalEncoder constructor initialized DigitalEncoder and sets all required registers for operation
            /// \param State - DigitalEncoder Initial status 
            /// \param command - Initialization command
            DigitalEncoder(uint32_t State, int Command);
    };
}

#endif
