# Libft – Bibliothèque C personnalisée
Ma bibliothèque de fonctions usuelles
Passe la Moulinette
Norminette faite
PS: Je n'ai pas fait les bonus.


`libft` est le **premier projet de l’école 42**, et probablement le plus formateur.
Il consiste à recréer une **bibliothèque standard en C**, en implémentant toi-même une série de fonctions usuelles (issues de `<string.h>`, `<stdlib.h>`, etc.), puis en y ajoutant des outils personnels.

Ce projet est un **socle fondamental** pour la suite de ton cursus :

* Tu consolideras tes bases en langage C.
* Tu comprendras la gestion de la mémoire.
* Tu apprendras à écrire un code clair, robuste et réutilisable.
* Tu disposeras de ta propre bibliothèque pour tes futurs projets (gnl, printf, minishell, etc.).

---

## 🛠️ Contenu du projet

La `libft` se compose de plusieurs parties :

1. **Fonctions de la libc**
   Réimplémentation de fonctions classiques comme `strlen`, `strcpy`, `memset`, etc.

2. **Fonctions supplémentaires**
   Fonctions utiles pour manipuler les chaînes et la mémoire (ex: `ft_substr`, `ft_split`, `ft_itoa`…).

3. **Listes chaînées (bonus)**
   Implémentation de fonctions pour gérer une **liste chaînée simple** (`t_list`).

---

## 📚 Bases en C à maîtriser

Pour réussir ce projet, voici les notions essentielles :

### 🔹 Pointeurs

* Comprendre la différence entre **adresse** et **valeur**.
* Savoir utiliser `*` et `&`.
* Exemple :

  ```c
  int a = 42;
  int *ptr = &a;  // ptr pointe vers a
  printf("%d\n", *ptr); // affiche 42
  ```

### 🔹 Tableaux et chaînes de caractères

* Un **tableau de `char`** (`char str[]`) est une suite de caractères terminée par `\0`.
* Les chaînes en C ne sont pas dynamiques → il faut gérer soi-même leur taille et leur mémoire.

### 🔹 Allocation dynamique

* Utiliser `malloc`, `free`.
* Toujours penser à **libérer** ce que l’on alloue.
* Exemple :

  ```c
  char *str = malloc(6);
  if (!str) return (NULL);
  strcpy(str, "Hello");
  free(str);
  ```

### 🔹 Structures

* Le bonus du projet demande de gérer une **liste chaînée** :

  ```c
  typedef struct s_list {
      void            *content;
      struct s_list   *next;
  } t_list;
  ```

---

## ⚡️ Conseils pour réussir

* Commence par bien **relire le sujet** et comprendre chaque fonction demandée.
* Implémente les fonctions simples (`strlen`, `strcpy`, etc.) avant de passer aux plus complexes.
* Teste tout avec des **cas limites** (chaînes vides, pointeurs `NULL`, etc.).
* Organise ton code : fichiers séparés (`ft_strlen.c`, `ft_strcpy.c`…), un **Makefile clair**.
* Documente ton code avec des commentaires utiles.

---

## 📖 Ressources utiles

* 📌 [42docs – Libft cheatsheet](https://github.com/jtoty/Libftest) (tests & explications)
* 📌 [Beej’s Guide to C Programming](https://beej.us/guide/bgc/) (gratuit, clair)
* 📌 [The C Programming Language – Kernighan & Ritchie](https://en.wikipedia.org/wiki/The_C_Programming_Language) (le livre culte)
* 📌 [Malloc Explained](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/) (bases sur l’allocation)
* 📌 [Video – Pointeurs en C](https://www.youtube.com/watch?v=zuegQmMdy8M) (intro visuelle et simple)
* 📌 [Open Classroom - Apprenez à programmer en C](https://openclassrooms.com/fr/courses/19980-apprenez-a-programmer-en-c) (toutes les bases et facile)

---

## 🎯 Objectif final

À la fin de `libft`, tu auras :

* Une bibliothèque C solide, faite main.
* Les **compétences essentielles** pour aborder tous les prochains projets.
* Une meilleure compréhension de la programmation bas niveau.


