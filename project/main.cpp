#include <stdio.h>

#include "pico/stdlib.h"

#include "hardware/pll.h"
#include "hardware/clocks.h"
#include "hardware/dma.h"
#include "hardware/structs/pll.h"
#include "hardware/structs/clocks.h"
#include "hardware/pio.h"

#include "ParallelPort.pio.h"

#include "Includes/HMI.h"
#include "Includes/DigitalEncoder.h"
#include "Includes/WaveformGenerator_CH.h"


using namespace pico_WG_CH;
//using namespace pico_HMI;
//using namespace pico_DigitalEncoder;

#define SYS_CLK (float)clock_get_hz(clk_sys)

int main() 
{
    stdio_init_all();

    WG_CH ch0 = WG_CH(pio0, &ParallelPort_program, SYS_CLK, 100*KHZ, 9, 8, 17);
    WG_CH ch1 = WG_CH(pio0, &ParallelPort_program, SYS_CLK, 10*KHZ, 0, 8, 8);
    ch0.Buffer_fill(SINE);
    ch1.Buffer_fill(SINE);
    
    while (true) 
    {
        sleep_ms(1000);
    }
}