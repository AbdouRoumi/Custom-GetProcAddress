# Custom-GetProcAddress

## [![Typing SVG](https://readme-typing-svg.demolab.com?font=JetBrains+Mono&weight=2000&pause=1000&width=435&lines=Welcome+to+CustomGetProc+Repo!!!;Explore+Windows+API+Internals;Manually+Resolve+Function+Addresses;Learn+PE+Export+Table+Parsing)](https://git.io/typing-svg)


## NOTE
I will use this function directly in the other malwares, try to check it before seeing the other projects <3 !! Happy Hacking <3
## Overview

Welcome to the **Custom-GetProcessAddress** repository! This project demonstrates a custom implementation of `GetProcAddress`, allowing manual resolution of function addresses from a module's export table. It provides insights into how Windows resolves API calls internally, making it an essential resource for reverse engineers, security enthusiasts, and low-level Windows developers.

The tool walks through the PE (Portable Executable) export directory, retrieves function names, and resolves their addresses without relying on the Windows API's `GetProcAddress`.


## Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Example Output](#example-output)
- [Contributing](#contributing)
- [License](#license)

## Features

- Manual resolution of function addresses from PE export tables.
- Parsing of DOS and NT headers.
- Access to export directory structures.
- Function name and address resolution.
- Insights into PE file internals.

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/CustomGetProc.git
   ```
2. Open the project in Visual Studio.
3. Build the project in Debug or Release mode.

## Usage

1. Compile the program.
2. Run the executable to resolve a function address:
   ```cmd
   CustomGetProc.exe
   ```
3. Example resolution:
   ```cmd
   Original GetProcAddress : 0x00007FF995C50690
   GetProcAddress Replacement : 0x00007FF995C50690
   
   ```

## Example Output

```
Original GetProcAddress : 0x00007FF995C50690
[+] Checking Function: NtAllocateUserPhysicalPagesEx
[+] Checking Function: NtAllocateUuids
[+] Checking Function: NtAllocateVirtualMemory
[0217] FOUND API -       NAME: NtAllocateVirtualMemory -        ADDRESS: 0x00007FF995C50690 -   ORDINAL: 218
GetProcAddress Replacement : 0x00007FF995C50690
```

## How It Works

- Parses the DOS and NT headers of the loaded module.
- Accesses the export directory via the DataDirectory field.
- Iterates through function names and resolves their addresses using ordinals.
- Compares each function name with the requested one.

## Contributing

Contributions are welcome! If you encounter issues or have ideas for improvements, feel free to open an issue or submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE.txt).

---
**Happy API Resolving! 🛡️**

> *"Understanding PE structures unlocks the secrets of Windows internals."*

