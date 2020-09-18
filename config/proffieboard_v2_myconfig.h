#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"
#define NUM_BLADES 2
#define NUM_BUTTONS 1
#define VOLUME 1000
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 1.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define ENABLE_SSD1306
#define ORIENTATION ORIENTATION_USB_TOWARDS_BLADE
// #define DISABLE_DIAGNOSTIC_COMMANDS
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
//   { "TeensySF", "tracks/venus.wav",
//    StyleNormalPtr<Pulsing<Red, Rgb<50,0,0>, 5000>, White, 300, 800, Red>(),
//    StyleNormalPtr<Pulsing<Red, Rgb<50,0,0>, 5000>, White, 300, 800, Red>(), "Pulsing"}
//   { "TeensySF", "tracks/venus.wav",
//    StyleNormalPtr<RED, WHITE, 300, 800>(),
//    StyleNormalPtr<Orange, WHITE, 300, 800>(), "2color"},
//   { "SmthGrey", "tracks/mercury.wav",
//    StyleFirePtr<Red,Yellow,1,5,1,0,3000,8,3000,0,0,0,6000,10,0,0,8>(),
//    StyleFirePtr<Red,Yellow,1,5,1,0,3000,8,3000,0,0,0,6000,10,0,0,8>(), "fire"},
   { "SmthFuzz", "tracks/uranus.wav",
    StyleNormalPtr<Red,White,300,2000>(),
    StyleNormalPtr<Red,White,300,2000>(), "red"},
   { "TthCrstl", "tracks/mars.wav",
    StylePtr<InOutHelper<EasyBlade<OnSpark<Green,Black,1000>,White>,300,800>>(),
    StylePtr<InOutHelper<EasyBlade<OnSpark<Green,Black,1000>,White>,300,800>>(), "green"},
//   { "SmthJedi", "tracks/uranus.wav",
//    StyleNormalPtr<AudioFlicker<YELLOW, WHITE>, BLUE, 300, 800>(),
//    StyleNormalPtr<AudioFlicker<YELLOW, WHITE>, BLUE, 300, 800>(), "yellow"},
//   { "SmthFuzz", "tracks/mars.wav",
//    StyleNormalPtr<Gradient<RED, BLUE>, Gradient<CYAN, YELLOW>, 300, 800>(),
//    StyleNormalPtr<Gradient<RED, BLUE>, Gradient<CYAN, YELLOW>, 300, 800>(), "gradient"},
//   { "RgueCmdr", "tracks/mercury.wav",
//    StyleRainbowPtr<300, 800>(),
//    StyleRainbowPtr<300, 800>(), "rainbow"},
   { "TthCrstl", "tracks/uranus.wav",
    StylePtr<Cylon<Chartreuse,1,5,Red,5,100,1>>(),
    StylePtr<Cylon<Chartreuse,1,5,Red,5,100,1>>(), "cylon"}
//   { "SmthJedi", "tracks/mars.wav",
//    &style_charging,
//    &style_charging, "Battery\nLevel"}
};
BladeConfig blades[] = {
 { 0, WS281XBladePtr<144, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    WS281XBladePtr<144, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin4, bladePowerPin5> >()
  , CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, auxPin, "pow");
#endif

