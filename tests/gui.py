import customtkinter as ctk
from PIL import Image

ctk.set_appearance_mode("dark")
ctk.set_default_color_theme("blue")

root = ctk.CTk()
root.geometry("1920x1080+0+0")
root.title()
root.attributes("-fullscreen", True)
task_bar_canvas = ctk.CTkCanvas(root, width=1920, height=28, bg="gray", highlightthickness=0)
task_bar_canvas.pack(pady=1)

start_menu_image = ctk.CTkImage(
    dark_image=Image.open("icons\Start menu icon.png")
)

power_menu_image = ctk.CTkImage(
    dark_image=Image.open("icons\Power Menu icon.png")
)

start_menu_button = ctk.CTkButton(
    master=root,
    text="",
    image=start_menu_image,
    width=5,
    height=5,
    command=lambda: print("click")
)

power_menu_button = ctk.CTkButton(
    master=root,
    text="",
    image=power_menu_image,
    width=5,
    height=5,
    command=lambda: print("power")
)

start_menu_button.place(x=0, y=1)
power_menu_button.place(x=1892, y=1)

root.mainloop()