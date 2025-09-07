# AKF GAM312 Survival Game [WIP]

A first-person survival prototype developed in Unreal Engine 5 for **GAM 312: Digital Game Development** at Southern New Hampshire University.  

---

## 🎮 Project Overview
This project was built as the final capstone for GAM 312 and demonstrates the implementation of fundamental gameplay systems in C++ and Unreal Engine, including:

👤 **Player Character**: First-person controller with WASD movement, mouse look, and sprint.  
❤️ **Player Stats**: Health, hunger, and stamina tracked with variables that increase/decrease dynamically.  
📊 **HUD Interface**: On-screen bars display health, hunger, stamina, crafting progress, and objectives.  
🌲 **Resource Collection**: Collision traces allow players to gather wood, stone, and berries.  
🏠 **Building System**: Place shelter parts (walls, floors, ceilings) and manage resources via inventory.  
🤖 **AI Character**: Navigation mesh–based AI with simple wander behavior.  
🗺️ **Level Blockout**: Outdoor environment prototype with win/lose conditions and restart/quit functionality.  

This project reflects mastery of C++ class design, linear algebra for movement vectors, navigation/pathfinding, and UI development.

---

## 🧪 Technologies Used
- **Game Engine:** Unreal Engine 5.5+  
- **Language:** C++ (with Blueprint extensions)  
- **Version Control:** Git + Git LFS  
- **Tools:** Visual Studio 2022, OBS (for screencast), SNHU Virtual Lab  

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
- **E** – Collect resources  
- **Tab** – Open crafting HUD  

---

## 🧠 Course Context
- **Course:** GAM 312 – Digital Game Development  
- **Instructor:** Will [Last Name]  
- **School:** Southern New Hampshire University (SNHU)  
- **Term:** Summer/Fall 2025  

This project demonstrates competency in:  
- Linear algebra applications in 3D games  
- Pathfinding with navigation meshes  
- Collision detection and resource collection  
- Camera system libraries (FPS implementation)  
- Event-driven HUD and UI systems  

---

## 📅 Development Progress
This project is developed in **weekly stepping stones** and will be updated regularly:  
- **Module 1:** Project setup + Player character (WASD + mouse look).  
- **Module 2:** Player variables (health, hunger, stamina) + Resource collection.  
- **Module 3:** Building system (shelter placement + inventory).  
- **Module 4:** Player HUD + AI wander behavior.  
- **Module 5:** Objective HUD (build 5 parts, collect 500 resources).  
- **Module 6:** Level blockout + win/lose widgets.  
- **Module 7:** Final polish + narrated screencast.  

---

## ✍️ Author
**Aaron Kellan-Fernandez**  
Game Programming & Development student at SNHU  

🔗 [GitHub Portfolio](https://github.com/yourusername)  
