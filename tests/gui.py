import customtkinter as ctk
from PIL import Image

ctk.set_appearance_mode("dark")
ctk.set_default_color_theme("blue")

system_font = "Arial"

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
    command=lambda: Start_menu()
)

def Start_menu():
    settings_icon = ctk.CTkImage(dark_image=Image.open("icons\Settings icon.png"), size=(20, 20))
    settings_panel_button = ctk.CTkButton(
        master=root,
        text="Settings",
        font=(system_font, 20),
        compound="left",
        image=settings_icon,
        width=200,
        height=30,
    )
    settings_panel_button.place(x=0, y=30)

def Power_menu():
    power_icon = ctk.CTkImage(dark_image=Image.open("icons\Power Menu icon.png"), size=(20, 20))
    power_menu_panel_button = ctk.CTkButton(
        master=root,
        text="Power",
        font=(system_font, 20),
        compound="left",
        image=power_icon,
        width=200,
        height=30,
        command= lambda: root.destroy()
    )
    power_menu_panel_button.place(x=1720, y=30)

power_menu_button = ctk.CTkButton(
    master=root,
    text="",
    image=power_menu_image,
    width=5,
    height=5,
    command=lambda: Power_menu()
)

start_menu_button.place(x=0, y=1)
power_menu_button.place(x=1892, y=1)

root.mainloop()