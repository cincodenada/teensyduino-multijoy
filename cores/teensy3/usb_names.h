#ifndef _usb_names_h_
#define _usb_names_h_

// These definitions are intended to allow users to override the default
// USB manufacturer, product and serial number strings.

#ifdef __cplusplus
extern "C" {
#endif

struct usb_string_descriptor_struct {
	uint8_t bLength;
	uint8_t bDescriptorType;
	uint16_t wString[];
};

extern struct usb_string_descriptor_struct usb_string_manufacturer_name
	__attribute__ ((weak, alias("usb_string_manufacturer_name_default")));
extern struct usb_string_descriptor_struct usb_string_product_name
	__attribute__ ((weak, alias("usb_string_product_name_default")));
extern struct usb_string_descriptor_struct usb_string_serial_number
	__attribute__ ((weak, alias("usb_string_serial_number_default")));

#ifdef __cplusplus
}
#endif

#endif
