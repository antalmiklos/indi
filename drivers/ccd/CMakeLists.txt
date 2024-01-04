# ########## CCD Simulator ##############
SET(ccdsimulator_SRC
    ccd_simulator.cpp)

add_executable(indi_simulator_ccd ${ccdsimulator_SRC})
target_link_libraries(indi_simulator_ccd indidriver)
install(TARGETS indi_simulator_ccd RUNTIME DESTINATION bin)

# ########## Guide Simulator ##############
SET(guidesimulator_SRC
    guide_simulator.cpp)

add_executable(indi_simulator_guide ${guidesimulator_SRC})
target_link_libraries(indi_simulator_guide indidriver)
install(TARGETS indi_simulator_guide RUNTIME DESTINATION bin)
# ########## ImageMagick Converter ##############
SET(imagemagickconverter_SRC
    imagemagick_converter.cpp)

add_executable(indi_imagemagic_converter ${imagemagickconverter_SRC})
target_link_libraries(indi_imagemagic_converter indidriver)
install(TARGETS indi_imagemagic_converter RUNTIME DESTINATION bin)
