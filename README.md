# AKF GAM312 Survival Game [WIP]

A first-person survival prototype developed in Unreal Engine 5 for **GAM 312: Digital Game Development** at Southern New Hampshire University.  

---

## 🎮 Project Overview
This project is being developed as part of **weekly modules** in GAM 312 and demonstrates the implementation of fundamental gameplay systems in C++ and Unreal Engine:  

👤 **Player Character**: First-person controller with WASD movement, mouse look, and sprint.  
❤️ **Player Stats (Module 2)**: Health, hunger, and stamina tracked with variables that increase/decrease dynamically, affecting player performance.  
📊 **HUD Interface (upcoming)**: On-screen bars for health, hunger, stamina, crafting progress, and objectives.  
🌲 **Resource Collection (Module 2)**: Line traces allow players to gather basic resources (wood, stone, berries) by interacting with world objects.  
🏠 **Building System (Module 3)**: Players can now place shelter parts (walls, floors, ceilings) using inventory-managed resources. Includes a placement preview system and snap-to-grid alignment.  
🤖 **AI Character (upcoming)**: Navigation mesh–based AI with simple wander behavior.  
🗺️ **Level Blockout (upcoming)**: Outdoor environment prototype with win/lose conditions and restart/quit functionality.  

This project reflects mastery of C++ class design, linear algebra for movement vectors, collision tracing for interaction, dynamic variable management, and modular gameplay system development.

---

## 🧪 Technologies Used
- **Game Engine:** Unreal Engine 5.6+  
- **Language:** C++ (with Blueprint extensions)  
- **Version Control:** Git + Git LFS  
- **Tools:** Visual Studio 2022, OBS (for screencast)  

---

## 📂 Repository Structure
```
AKF_GAM312_SurvivalGame
├── Config/              # Input bindings, project settings
├── Source/              # C++ classes (PlayerChar, GameMode, AI, etc.)
│   ├── Public/          
│   └── Private/
├── Content/             # Unreal assets (maps, UI, materials)
├── .gitignore
├── .gitattributes
├── AKellFern312.uproject
└── README.md
```

---

## 🚀 How to Run
1. Clone the repository with Git LFS enabled:
   ```bash
   git clone <repo-url>
   git lfs pull
   ```
2. Open `AKellFern312.uproject` in **Unreal Engine 5.5 or newer**.  
3. Ensure the default GameMode is set to `GAM312GameModeBase`.  
4. Press **Play** to test the game in-editor.  

Controls:  
- **WASD** – Move  
- **Mouse** – Look  
- **Shift** – Sprint  
- **Left-Mouse Button** – Collect resources  
- **E** – Open crafting/building menu  

---

## 🧠 Course Context
- **Course:** GAM 312 – Digital Game Development  
- **Instructor:** Will  
- **School:** Southern New Hampshire University (SNHU)  
- **Term:** Summer/Fall 2025  

This project demonstrates competency in:  
- Linear algebra applications in 3D games  
- Collision detection + line tracing for interactions  
- Dynamic variable systems (health, hunger, stamina)  
- Resource collection mechanics  
- Early building and inventory system integration  

---

## 📅 Development Progress
This project is updated weekly as new systems are added:  

- **Module 1 (Complete):** Project setup + Player character (WASD + mouse look).  
- **Module 2 (Complete):** Player variables (health, hunger, stamina) + Resource collection via line trace.  
- **Module 3 (Complete):** Building system (shelter placement + inventory).  
- **Module 4 (Next):** Player HUD + AI wander behavior.  
- **Module 5:** Objective HUD (build 5 parts, collect 500 resources).  
- **Module 6:** Level blockout + win/lose widgets.  
- **Module 7:** Final polish + narrated screencast.  

---

## ✍️ Author
**Aaron Kellan-Fernandez**  
Game Programming & Development undergrad at SNHU  

🔗 [GitHub Portfolio](https://github.com/AKellFern)    
