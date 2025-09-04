##########################################
# 🎮 Unreal Engine 5 Project (C++ + LFS)
##########################################

# Ignore everything by default
*
!*/

# Keep Git folder and root files
!/.git*
!/*.uproject

# Core UE folders
!/Config/**
!/Source/**
!/Plugins/**

# Track only assets you need via Git LFS
!/Content/**/*.uasset
!/Content/**/*.umap
!/RawContent/**/*

##########################################
# 🔨 Build, Binaries, and Intermediate
##########################################

/Binaries/
/Build/
/DerivedDataCache/
/Intermediate/
/Saved/

*.pdb
*.obj
*.exp
*.lib
*.dll
*.exe
*.so
*.app
*.apk
*.ipa
*.pak
*.zip

##########################################
# 🧪 Rider / VS Code / IDEs
##########################################

# Rider
.idea/
*.sln.iml

# VS Code
.vscode/
*.code-workspace

# General IDE
*.sln
*.vcxproj*
*.user
*.suo

##########################################
# 🍏 macOS / Windows / Linux Junk
##########################################

# Windows
Thumbs.db
ehthumbs.db

# macOS
.DS_Store
.AppleDouble
.LSOverride
._*

# Linux
*~
.directory

##########################################
# 🔁 Editor / Swap / Temp Files
##########################################

*.log
*.tmp
*.bak
*.swp
*.swo

# Vim
[._]*.s[a-w][a-z]
[._]s[a-w][a-z]
*.un~
Session.vim
.netrwhist

##########################################
# 🧠 Git Configs / LFS Metadata
##########################################

.gitattributes
.gitattributes.lock
.gitignore
*.lfsconfig

##########################################
# 🧰 Bonus Tooling Support
##########################################

# Blender
*.blend1
*.blend2
*.blend@

# Python
__pycache__/
*.py[cod]

# Node.js / npm
node_modules/
npm-debug.log
yarn.lock
package-lock.json
