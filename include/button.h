#define PIN_BIT(x) (1ULL<<x)

#include "freertos/FreeRTOS.h"
#include "freertos/queue.h"

#define BUTTON_DOWN (1)
#define BUTTON_UP (2)

typedef struct {
	uint8_t pin;
    uint8_t event;
} button_event_t;

QueueHandle_t * button_init(unsigned long long pin_select);
