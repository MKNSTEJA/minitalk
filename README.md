# minitalk

📢 *Because everyone needs someone to talk to* 😌

---

## Table of Contents

1. [Introduction](#introduction)
2. [Features](#features)
3. [Installation](#installation)
4. [Usage](#usage)
5. [How It Works](#how-it-works)
6. [Contributing](#contributing)
7. [License](#license)
8. [Acknowledgments](#acknowledgments)

---

## Introduction

Ever wanted to see how processes communicate with each other? Well, now you can! **Minitalk** is a project that lets you send and receive messages between processes using Unix signals. Think of it as Morse code for your programs—except way cooler! 😎📡

This project is part of the 42 School curriculum and is designed to deepen your understanding of inter-process communication (IPC), signals, and bitwise operations.

---

## Features

✅ **Inter-Process Messaging** – Send messages from one process to another with style! ✉️  

✅ **Bit-Level Communication** – Ever wished you could whisper in binary? Now you can! 🤖  

✅ **Asynchronous Messaging** – No shared memory, no problem. Let signals do the talking! 📡  

✅ **Error Handling Included** – Because even processes need to talk sense. 🚦  


---

## Installation

Get Minitalk up and running in a few simple steps:

1. Clone the repository:
   ```sh
   git clone https://github.com/MKNSTEJA/minitalk.git
   ```

2. Navigate to the project directory:
   ```sh
   cd minitalk
   ```

3. Compile the programs:
   ```sh
   make
   ```

---

## Usage

### Step 1: Start the Server
Run the server first in a new bash terminal. It will display its PID (Process ID):
```sh
./server
```
Example output:
```sh
Server PID: 4242
```

### Step 2: Send a Message
Once the server is running, open another bash terminal and use the client and the PID to send a message:
```sh
./client 4242 "Hello, process world!"
```
And voilà! The message is transmitted to server via signals! 📡✨

---

## How It Works

Minitalk uses UNIX signals (`SIGUSR1` and `SIGUSR2`) to transmit messages between a client and a server. Here's a high-level breakdown:

1. The server starts and waits for messages, displaying its PID.
2. The client sends a string character by character, converting each letter into binary.
3. Each bit is sent as a `SIGUSR1` (0) or `SIGUSR2` (1).
4. The server receives the signals, reconstructs the message, and prints it.

Pretty cool, right? It’s like hacking the Matrix, but without getting a call from the FBI!. 🤓

---

## Contributing

Think you can make Minitalk even cooler? 🤖✨

1. Fork the repository.
2. Create a new branch:
   ```sh
   git checkout -b feature/your-feature-name
   ```
3. Commit your changes:
   ```sh
   git commit -m "Add new inter-process wizardry"
   ```
4. Push your changes:
   ```sh
   git push origin feature/your-feature-name
   ```
5. Open a pull request on GitHub.

---

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---

## Acknowledgments

- **42 School:** For making us talk to processes instead of people. 😂  
- **UNIX Signals:** For letting us communicate in true hacker fashion. 💻  
- **Community:** For always keeping things exciting!  

---

## Author

**MKNSTEJA**

- GitHub: [MKNSTEJA](https://github.com/MKNSTEJA)
- Email: chessmaniacs123@gmail.com

Ready for gossiping in signals? 💬🤖

