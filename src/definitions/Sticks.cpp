#include "Sticks.h"
Sticks::Sticks() {
    sticks["jailbreak"] = {
            "jailbreak",
            "",
            "",
            "Virtual stick definition"
    };

    sticks["jailbreak3D"] = {
            "jailbreak3D",
            "pandorytool-jb-1.0.5",
            "https://github.com/emuchicken/pandorytool/archive/jb-1.0.5.tar.gz",
            "This USB will patch your system to run `pandory.sh` off the USB drive when inserted.\n"
            "`pandory.sh` is a bash-shellscript. It can be configured to do anything you like.\n\n"
            "Insert this USB while booted. If the update gets stuck on a black screen with chinese text, \n"
            "reboot the machine and try again.\n"
            "The jailbreak also enables adb over wifi on port 5555 and telnet on port 4444, which enables you to\n"
            "remotely log in using:\n\n"
            "adb connect ip-of-pandora:5555\n"
            "adb shell\n"
            "  OR  \n"
            "telnet ip-of-pandora-box:4444"
    };

    sticks["jailbreak7"] = {
            "jailbreak7",
            "pandorytool-jb7-1.0.6",
            "https://github.com/emuchicken/pandorytool/archive/jb7-1.0.6.tar.gz",
            "The jailbreak also enables telnet on port 4444, which enables you to\n"
            "remotely log in using:\n"
            "telnet ip-of-pandora-box:4444\n\n"
            "WARNING: KEY7 CONSOLES DO NOT ALL HAVE A RECOVERY MODE\n"
            "AND YOU MAY NOT BE ABLE TO RECOVER YOUR SYSTEM IF SOMETHING\n"
            "GOES WRONG DURING THE JAILBREAK. THIS JAILBREAK COMES WITH NO WARRANTY!\n"
    };

    sticks["backup"] = {
            "backup",
            "pandorytool-stick-backup",
            "https://github.com/emuchicken/pandorytool/archive/stick-backup.tar.gz",
            "This stick will backup your machine system/data-partitions to your USB drive\n"
            "Insert this USB while booted. If the update gets stuck on a black screen with chinese text, \n"
            "reboot the machine and try again."
    };

    sticks["reicast"] = {
            "reicast",
            "pandory-jailbreak-reicast-master",
            "https://github.com/emuchicken/pandory-jailbreak-reicast/archive/master.tar.gz",
    };

    sticks["ppsspp"] = {
            "ppsspp",
            "pandory-jailbreak-ppsspp-master",
            "https://github.com/emuchicken/pandory-jailbreak-ppsspp/archive/master.tar.gz",
    };
}

downloadDefinition Sticks::getStickByName(const std::string &name) {
    std::map<std::string, downloadDefinition>::iterator it;
    for (it = sticks.begin(); it != sticks.end(); it++) {
        if (it->first == name) {
            return it->second;
        }
    }
    return downloadDefinition{};
}
