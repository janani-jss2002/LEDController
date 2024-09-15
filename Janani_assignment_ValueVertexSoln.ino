struct LEDSettings { //Definition of characteristics of single LED
    uint8_t state;
    int brightness;
    int color;
};

struct LEDGroup {    //Definition of characteristics of a group of LEDs
    struct LEDSettings singleLED;
    uint8_t groupState;
    int groupBrightness;
};

void initLEDGroup(struct LEDGroup *group) {
    group->singleLED.state = 0;
    group->singleLED.brightness = 0;
    group->singleLED.color = 0000;
    group->groupState = 00000000;
    group->groupBrightness = 00000000;
}                    //Function that initializes all the LEDs of a group to default values
	
void updateLEDGroupSettings(struct LEDGroup *group, uint8_t groupState, uint8_t groupBrightness, 
    uint8_t state, uint8_t brightness, uint32_t color){
        group->singleLED.state = state;
        group->singleLED.brightness = brightness;
        group->singleLED.color = color;
        group->groupBrightness = groupBrightness;
        group->groupState = groupState;
    }                //Function that updates the LEDs of a group to the settings specified as parameters

void displayLEDGroupStatus(struct LEDGroup *group){
    printf("Individual LED settings: \n");
    printf("State: %d",group->singleLED.state);
    printf("Brightness: %d",group->singleLED.brightness);
    printf("Color: %d",group->singleLED.color);
    printf("Group LED settings: \n");
    printf("Group state: %d",group->groupState);
    printf("Group brightness: %d",group->groupBrightness);
}                    //Function that displays all the settings in an LED group on the I/O display

struct LEDGroup LEDGrp1;
ptr2 = &LEDGrp1;
void initLEDGroup(ptr2);
void updateLEDGroupSettings(ptr2, 1001, 230, 1, 230, 16753920);
void displayLEDGroupStatus(ptr2);