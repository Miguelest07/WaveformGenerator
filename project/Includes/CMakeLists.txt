add_library(Includes 
    HMI.cpp 
    DigitalEncoder.cpp
    WaveformGenerator_CH.cpp
)

target_link_libraries(Includes hardware_pio hardware_dma)