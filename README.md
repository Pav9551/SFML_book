---

#Game in C++ with SFML

A windowed chess application built using **C++** and **SFML**.
Based on the concepts from the book *SFML Game Development By Example*.

---

## 🔧 Getting Started on Windows 10

### 1. Install Required Tools

* **Dev C++** (GCC 4.9.2 TDM (SJLJ) - 64-bit)
  📥 [Download from SourceForge](https://sourceforge.net/projects/orwelldevcpp/)
  ⚠️ *Do not install using Russian language locale.*

* **SFML 2.4.2**
  📥 [Download SFML](https://www.sfml-dev.org/download/sfml/2.4.2/)

### 2. Link SFML to Dev C++

📺 Watch this step-by-step tutorial: [YouTube Guide](https://www.youtube.com/watch?v=-v0rCgaCoKU)

#### Linker settings (Dev C++):

Go to **Project Options → Parameters → Linker** and add:

```
-lsfml-graphics -lsfml-window -lsfml-system
```

#### Add DLL directory to system PATH:

To avoid copying `.dll` files every time:

1. Locate your SFML `bin` directory (where `.dll` files are).
2. Add it to your system’s environment variable `PATH`:

```
Win + R → sysdm.cpl → Advanced → Environment Variables → System variables → Path → Edit → Add folder path
```

---

## ⚙️ Enable C++11 or Higher

In **Dev C++**:

```
Tools → Compiler Options → Settings → Code Generation → Language Standard → ISO C++11 (or later)
```

---

## 📚 Resources

* 📖 [SFML Game Development by Example (PDF)](https://github.com/BijayanBhattarai/BooksCollection/blob/master/Game%20Developement/SFML-Game-Developme-By-Example.pdf)
* 📺 [C++ Chess Game Dev with SFML – Tutorial Video](https://www.youtube.com/watch?v=yHrrNcDqzk8&t=2s)

---

Let me know if you'd like me to convert this into a Russian version or add build instructions for other platforms like Linux or macOS.
