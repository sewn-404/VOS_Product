# VOS_Product — UHT Header Dump

Reconstructed Unreal Header Tool (UHT) compatible C++ headers dumped from **Sword Art Online: Fatal Bullet** (`VOS_Product`) using **UE4SS** (`UE4/5 Scripting System`).

## Overview

- **Game:** Sword Art Online: Fatal Bullet
- **Internal Project Name:** `VOS_Product`
- **Engine:** Unreal Engine 4.17
- **Dump Tool:** [UE4SS](https://github.com/UE4SS-RE/RE-UE4SS) (`UHTHeaderDump`)

## Contents

This repository contains generated C++ header files reflecting the game's `UClass`, `UStruct`, `UEnum`, property layouts, and `UFunction` signatures:

- **`VOS_Product/`** — Core gameplay classes, character systems, weapons, skills, UI, and game-specific logic.
- **Engine & Third-Party Modules** *(if full `UHTHeaderDump` is included)* — `VPGameEngine`, `VPOnline*` (Dimps framework modules), `CriWareRuntime`, `DonAINavigation`, `EasyAntiCheatCommon`, etc.

## Usage

These headers are generated from runtime reflection data for reference, reverse-engineering, and modding purposes (such as writing UE4SS Lua/C++ mods or reconstructing class structures).

> **Note:** These files are UHT-compatible reflection dumps, not compilable original source code or proprietary game assets.