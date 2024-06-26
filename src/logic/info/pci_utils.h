#ifndef _PCI_UTILS_H
#define _PCI_UTILS_H

#include <stdint.h>

#define PATH_PCI_DEVICES_DIR "/sys/bus/pci/devices/"
#define PATH_PCI_IDS_FILE    "/usr/share/misc/pci.ids"

typedef struct pci_device_info
{
    char*    class_name;
    char*    subclass_name;
    char*    interface_name;
    char*    driver_name;
    uint32_t vendor_id;
    char*    vendor_name;
    uint32_t device_id;
    char*    device_name;
    uint32_t revision;
    char*    device_location;
    uint32_t domain; 
    uint32_t bus;
    uint32_t device;
    uint32_t function;
} pcidev_t;

typedef struct pci_info
{
    uint32_t  devices_num;
    pcidev_t* devices;
} pci_t;

void init_pci_devices(pci_t* pci);
void scan_pci_devices_info(pci_t* pci);

#endif /* _PCI_UTILS_H */