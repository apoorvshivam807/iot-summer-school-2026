import os

def count_ino_files():
    ino_count = 0
    # Walk through all directories in the repository
    for root, dirs, files in os.walk('.'):
        # Skip hidden git folders
        if '.git' in root:
            continue
        for file in files:
            if file.endswith('.ino'):
                ino_count += 1
                print(f"Found Arduino Sketch: {os.path.join(root, file)}")
                
    print("\n" + "="*40)
    print(f"📊 TOTAL ARDUINO (.ino) SKETCHES FOUND: {ino_count}")
    print("="*40 + "\n")

if __name__ == "__main__":
    count_ino_files()
