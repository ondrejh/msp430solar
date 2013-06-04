#ifndef __DS18B20_H__
#define __DS18B20_H__

#include <inttypes.h>

// sensor context struct
typedef struct {
    volatile uint8_t *port_out;
    const volatile uint8_t *port_in;
    volatile uint8_t *port_ren;
    volatile uint8_t *port_dir;
    uint8_t port_mask;

    int16_t temp;
    bool valid;
} ds18b20_sensor_t;

void ds18b20_init(ds18b20_sensor_t *s,
                  volatile uint8_t *p_out,
                  const volatile uint8_t *p_in,
                  volatile uint8_t *p_ren,
                  volatile uint8_t *p_dir,
                  int pin);

void ds18d20_start_conversion(ds18b20_sensor_t *s);
void ds18b20_read_conversion(ds18b20_sensor_t *s);

#endif