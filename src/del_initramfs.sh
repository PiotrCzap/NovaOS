#!/bin/sh

echo "Removeing ram-disk..."
sudo umount -l /home/piotr/Dokumenty/GitHub/NovaOs/logs/

echo "Deleteing ram-disk-files..."
rm -rf /home/piotr/Dokumenty/GitHub/NovaOs/logs/

echo "DONE!"