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

# Desktop Taskbar Icon Images

start_menu_image = ctk.CTkImage(dark_image=Image.open("icons\Start menu icon.png"))
power_menu_image = ctk.CTkImage(dark_image=Image.open("icons\Power Menu icon.png"))

# Start Menu

start_menu_button = ctk.CTkButton(
    master=root,
    text="",
    image=start_menu_image,
    width=5,
    height=5,
    command=lambda: Start_Menu_Buttons()
)
start_menu_button.place(x=0, y=1)


# Settings Menu

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

def Settings_Menu_System_Menu():
    pass




def Settings_panel():

    def start_move(event):
        Settings_window.startX = event.x
        Settings_window.startY = event.y

    def stop_move(event):
        Settings_window.startX = None
        Settings_window.startY = None

    def on_motion(event):
        x = Settings_window.winfo_x() - Settings_window.startX + event.x
        y = Settings_window.winfo_y() - Settings_window.startY + event.y
        Settings_window.place(x=x, y=y)


    Settings_window = ctk.CTkFrame(root, width=800, height=600, fg_color="black")
    Settings_window_tilebar = ctk.CTkFrame(Settings_window, width=800, height=30, bg_color="gray", corner_radius=0)
    Settings_window_tilebar_title = ctk.CTkLabel(Settings_window_tilebar, text= "Settings")

    Settings_options_panel = ctk.CTkFrame(Settings_window, width=100 , height=700, fg_color="gray")

    Settings_window_tilebar_close_button = ctk.CTkButton(
        master=Settings_window_tilebar,
        text="X", fg_color="red", bg_color="red", border_color="red",
        width=10,
        height=10,
        command= Settings_window.destroy
    )

    Settings_System_Menu_Button = ctk.CTkButton(
        master=Settings_options_panel,
        text="System",
        width=100,
        height=30,
        corner_radius=0,
        font=(system_font, 20),
        fg_color="black", bg_color="black", border_color="black"
    )

    Settings_window.place(x=200, y=200)
    Settings_window_tilebar.place(x=0, y=0)
    Settings_window_tilebar_close_button.place(x=775 , y=5)
    Settings_window_tilebar_title.place(x=5, y=1)
    Settings_options_panel.place(x=0, y=30)
    Settings_window_tilebar.bind("<Button-1>", start_move)
    Settings_window_tilebar.bind("<ButtonRelease-1>", stop_move)
    Settings_window_tilebar.bind("<B1-Motion>", on_motion)
    Settings_System_Menu_Button.place(x=0, y=0)

def Start_Menu_Buttons():
    Settings_menu()
    Terminal_Button()

def Terminal_Button():
    Terminal_button_terminal = ctk.CTkButton(
        master=root,
        text="Terminal",
        font=(system_font, 20),
        compound="left",
        width=200,
        height=30
    )
    Terminal_button_terminal.place(x=0, y=60)

def Terminal():
    pass



# Power Menu

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

power_menu_button.place(x=1892, y=1)

root.mainloop()