//
// Created by ADuau on 2025/6/14.
//

#ifndef HIDAPI_USBDDK_H
#define HIDAPI_USBDDK_H

#include <stdint.h>

#include "hidapi.h"

#ifdef __cplusplus
extern "C" {
#endif

	/** @brief Open a HID device using libusb_wrap_sys_device.
		See https://libusb.sourceforge.io/api-1.0/group__libusb__dev.html#ga98f783e115ceff4eaf88a60e6439563c,
		for details on libusb_wrap_sys_device.

		@ingroup API
		@param sys_dev Platform-specific file descriptor that can be recognised by libusb.
		@param interface_num USB interface number of the device to be used as HID interface.
		Pass -1 to select first HID interface of the device.

		@returns
			This function returns a pointer to a #hid_device object on
			success or NULL on failure.
	*/
	// HID_API_EXPORT hid_device * HID_API_CALL hid_libusb_wrap_sys_device(intptr_t sys_dev, int interface_num);

#ifdef __cplusplus
}
#endif

#endif //HIDAPI_USBDDK_H
