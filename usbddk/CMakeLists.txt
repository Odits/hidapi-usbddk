cmake_minimum_required(VERSION 3.6.3...3.25 FATAL_ERROR)

add_library(hidapi_usbddk
        ${HIDAPI_PUBLIC_HEADERS}
        hid.c
)
target_link_libraries(hidapi_usbddk PUBLIC hidapi_include)

find_package(Threads REQUIRED)

target_link_libraries(hidapi_usbddk PRIVATE libusb_ndk.z.so Threads::Threads)

set_target_properties(hidapi_usbddk
        PROPERTIES
        EXPORT_NAME "libusb"
        OUTPUT_NAME "hidapi-usbddk"
        VERSION ${PROJECT_VERSION}
        SOVERSION ${PROJECT_VERSION_MAJOR}
        PUBLIC_HEADER "${HIDAPI_PUBLIC_HEADERS}"
)
