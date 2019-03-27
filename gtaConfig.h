/*
 * Author: Kaylani Bochie
 *
 */

#ifndef GTA_CONFIG_H
#define GTA_CONFIG_H

#define EVENT_DELAY                                2000 //ms
#define RFID_DELAY                                 1000 //ms
#define TEMPERATURE_DIFFERENCE_THRESHOLD           1.0 //degree celsius

// Directives for the NodeMCU board
#define D0                                         16
#define D1                                         5
#define D2                                         4
#define D3                                         0
#define D4                                         2
#define D5                                         14
#define D6                                         12
#define D7                                         13
#define D8                                         15
#define D9                                         3
#define D10                                        1
#define BUILT_IN_LED                               D4

#define DHT_ERROR_STRING                           "0"


// Easily change the address of the server and network use by each node
#define MQTT_SERVER                                "172.16.71.36"
#define MQTT_PORT                                  1883 // standard port
#define NETWORK_SSID                               "ARDUINO_DAY"
#define NETWORK_PASSWORD                           "ard##firjan"
#define MQTT_USERNAME                              "pi"
#define MQTT_PASSWORD                              "gta"
#define MQTT_DELAY                                 5000 // ms
#define SLEEP_TIME                                 10e6 // microseconds
// SLEEP_TIME is needed for the node using deep sleep mode

// node_av1
#define AV1_MQTT_TEMPERATURE_TOPIC                 "gta/av1/temp"
#define AV1_MQTT_HUMIDITY_TOPIC                    "gta/av1/hum"
#define AV1_MQTT_DOOR_TOPIC                        "gta/av1/door"
#define AV1_MQTT_FIRE_TOPIC                        "gta/av1/fire"
#define AV1_MQTT_INFLUX_TOPIC                      "gta/av1/influx"
#define AV1_CLIENT_ID                              "gta-av1"

// node_av2
#define AV2_MQTT_TEMPERATURE_TOPIC                 "gta/av2/temp"
#define AV2_MQTT_HUMIDITY_TOPIC                    "gta/av2/hum"
#define AV2_MQTT_DOOR_TOPIC                        "gta/av2/door"
#define AV2_MQTT_RFID_TOPIC                        "gta/av2/rfid"
#define AV2_MQTT_INFLUX_TOPIC                      "gta/av2/influx"
#define AV2_CLIENT_ID                              "gta-av2"

// node_av2_sleep
#define AV2_SLEEP_MQTT_TEMPERATURE_TOPIC           "gta/av2sleep/temp"
#define AV2_SLEEP_MQTT_HUMIDITY_TOPIC              "gta/av2sleep/hum"
#define AV2_SLEEP_MQTT_DOOR_TOPIC                  "gta/av2sleep/door"
#define AV2_SLEEP_MQTT_RFID_TOPIC                  "gta/av2sleep/rfid"
#define AV2_SLEEP_MQTT_INFLUX_TOPIC                "gta/av2sleep/influx"
#define AV2_SLEEP_CLIENT_ID                        "gta-av2sleep"

// node_av2_asynchronous
#define AV2_ASYNC_MQTT_TEMPERATURE_TOPIC           "gta/av2async/temp"
#define AV2_ASYNC_MQTT_HUMIDITY_TOPIC              "gta/av2async/hum"
#define AV2_ASYNC_MQTT_DOOR_TOPIC                  "gta/av2async/door"
#define AV2_ASYNC_MQTT_RFID_TOPIC                  "gta/av2async/rfid"
#define AV2_ASYNC_MQTT_INFLUX_TOPIC                "gta/av2async/influx"
#define AV2_ASYNC_CLIENT_ID                        "gta-av2async"

// node_meet
#define MEET_MQTT_TEMPERATURE_TOPIC                "gta/meet/temp"
#define MEET_MQTT_HUMIDITY_TOPIC                   "gta/meet/hum"
#define MEET_MQTT_MOVEMENT_TOPIC                   "gta/meet/mov"
#define MEET_MQTT_INFLUX_TOPIC                     "gta/meet/influx"
#define MEET_CLIENT_ID                             "gta-meet"

// node_mult
#define MULT_MQTT_TEMPERATURE_TOPIC                "gta/mult/temp"
#define MULT_MQTT_HUMIDITY_TOPIC                   "gta/mult/hum"
#define MULT_MQTT_MOVEMENT_TOPIC                   "gta/mult/mov"
#define MULT_MQTT_INFLUX_TOPIC                     "gta/mult/influx"
#define MULT_CLIENT_ID                             "gta-mult"

// node_prof
#define PROF_MQTT_TEMPERATURE_TOPIC                "gta/prof/temp"
#define PROF_MQTT_HUMIDITY_TOPIC                   "gta/prof/hum"
#define PROF_MQTT_MOVEMENT_TOPIC                   "gta/prof/mov"
#define PROF_MQTT_INFLUX_TOPIC                     "gta/prof/influx"
#define PROF_CLIENT_ID                             "gta-prof"

#endif
