#include "mbed.h"
#include "nrf_rtc.h"
#include "common_rtc.h"
DigitalOut led(LED1);

void blinky() {
    led = !led;
}

int main(void) {
    EventQueue queue;
    printf("Booted!\n");
    queue.call_every(100ms, blinky);
    queue.dispatch_forever();
}
