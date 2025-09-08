# TactoRead  

TactoRead is a system designed to make digital content accessible for individuals who are blind or have low vision. It provides an intuitive way to read, explore, and interact with documents through a Braille cell combined with audio feedback. The device also allows the user to user the camera on the device to scan a document and access it in real-time  

## Features  

- **Document Viewer** – Navigate PDF files with layout preserved (titles, headers, text, tables, images).  
- **File Explorer** – Manage files and folders directly on the device without needing an external computer.  
- **Scanner Apllication** - A scanner applkication that uses the camera
- **Device Operating System** – Includes settings, language selection, Wi-Fi connection, and display management.  
- **Interaction Modes** – 
- **Audio Feedback** – Provides immediate feedback to support orientation and navigation.

## System Architecture  

- **Hardware**:  
  - Raspberry Pi Zero
  - Custom PCB with navigation buttons  
  - PI camera
  - Braille Cell
  - Speaker output
  - LED light for the camers
  
- **Software**:  
  - Text Viewer (translating text into Braille and displsying it using the Braille cell)
  - YOLO-based layout analysis for document segmentation and OCR for text extraction 
  - Camera processing module for handling the PI camera 
  - Screen reader for audio output
  - WiFi and BLE modules for handling connections with headphones or internet connection for cloud processing etc.

## Applications  

1. **Text Viewer** – For reading plain text documents.  
2. **Document Viewer** – For structured documents with preserved layouts.  
3. **Scanner Application** - For scanning documents

## Installation  

```bash
# Clone the repository
git clone https://github.com/sarazalabany/TactoRead.git
cd TactoRead

## Repository Structure  

```
TactoRead/
│── docs/              # Documentation
│── src/               # Source files
│── include/           # header files
│── tests/             # Unit tests
│── models/            # models used by the device susch as YOLO and OCR models
│── hardware/          # PCB and hardware design files
│── lib/               # External libraries
│── README.md          # Project overview
│── LISCENSE           # Information about the licensing

## Research Context  

This project was developed following a research methodology and co-designed with participants who are blind or have low vision. It aims to advance accessibility by exploring new forms of interaction with tactile displays.  

## Contributing  

Contributions are currently not allwoed except for co-developers by following these steps:

1. Fork the repository  
2. Create a feature branch (`git switch --create branch-name main`)
3. Stage changes (`git add .`)  
4. Commit your changes (`git commit -m 'Add feature'`)  
5. Push to the branch (`git push origin feature-name`)  
6. Open a Pull Request and this will be analysed by the main software maintainer (Sara) 

## License  

This project is licensed under the ??? see the [LICENSE](LICENSE) file for details.  
