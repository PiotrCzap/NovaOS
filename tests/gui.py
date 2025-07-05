import customtkinter as ctk
from PIL import Image

ctk.set_appearance_mode("dark")
ctk.set_default_color_theme("blue")

root = ctk.CTk()
root.geometry("1920x1080+0+0")
root.title()
root.attributes("-fullscreen", True)
task_bar_canvas = ctk.CTkCanvas(root, width=1920, height=25, bg="gray", highlightthickness=0)
task_bar_canvas.pack(pady=1)

#start_menu_image = ctk.CTkImage(
#    dark_image=Image.open
#)

start_menu_button = ctk.CTkButton

root.mainloop()