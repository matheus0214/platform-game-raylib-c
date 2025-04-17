# 🐻 Using Bear to Generate `compile_commands.json` for C Projects

This project uses [`clangd`](https://clangd.llvm.org/) as the language server, which needs a `compile_commands.json` file to provide features like go-to-definition, diagnostics, auto-completion, etc.

If you use a `Makefile` to build your project, you can use **[Bear](https://github.com/rizsotto/Bear)** to automatically generate this file.

---

## 📦 What Is Bear?

**Bear** (Build EAR) is a tool that wraps your build process and generates `compile_commands.json` by watching which compiler commands are run. It's perfect for C/C++ projects using `make`, `ninja`, or other custom build systems.

---

## 🚀 Quick Start

### 1. Install Bear

#### On Ubuntu/Debian:
```bash
sudo apt update
sudo apt install bear
```
### Using bear

```base
bear -- make
```
