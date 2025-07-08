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
    command=lambda: Settings_menu()
)

def Settings_menu():
    settings_icon = ctk.CTkImage(dark_image=Image.open("icons\Settings icon.png"), size=(20, 20))
    settings_panel_button = ctk.CTkButton(
        master=root,
        text="Settings",
        font=(system_font, 20),
        compound="left",
        image=settings_icon,
        width=200,
        height=30,
        command= lambda: Settings_panel()
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

def Settings_panel():
    Settings_window = ctk.CTkFrame(root, width=800, height=600, fg_color="black")
    Settings_window_appearance_category_button = ctk.CTkButton(
        master=Settings_window,
        text="Appearance",
        width=20,
        height=20
    )
    Settings_window_appearance_category_button.place()

    drag_data = {"x": 0, "y": 0}

    def on_start_drag(event):
        drag_data["x"] = event.x
        drag_data["y"] = event.y

    def on_drag(event):
        new_x = Settings_window.winfo_x() + (event.x - drag_data["x"])
        new_y = Settings_window.winfo_y() + (event.y - drag_data["y"])
        Settings_window.place(x=new_x, y=new_y)

    Settings_appearance = ctk.CTkButton(
        master=Settings_window,
        text="elo",
        width=20,
        height=20
    )
    Settings_window.bind("<Button-1>", on_start_drag)
    Settings_window.bind("<B1-Motion>", on_drag)
    Settings_window.place(x=200, y=200)


start_menu_button.place(x=0, y=1)
power_menu_button.place(x=1892, y=1)

root.mainloop()