find . -type f -name "*.sh" | sed 's/\.\///; s/\.sh$//; s/.*\///' 
