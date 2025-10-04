from customtkinter import *

root = CTk()
root.geometry('500x500')
root.resizable(width=False, height=False)

bgrou = CTkFrame(root, width=600, height=600, fg_color='#fff')
bgrou.place(x=-1, y=-1)

x_start, y_start = 190, 190

count = 0  # 0 для 'X', 1 для 'O'

# Хранение кнопок и меток в списках (3x3)
buttons = []
labels = []

def reset_game():
    global count
    count = 0
    for i in range(9):
        labels[i].configure(text='o')
        buttons[i].place(x=x_start + (i % 3)*50, y=y_start + (i // 3)*50)
    
def cell_clicked(index):
    global count
    if count == 0:
        labels[index].configure(text='X')
        count = 1
    else:
        labels[index].configure(text='O')
        count = 0
    buttons[index].place_forget()

# Создаем метки и кнопки в цикле
for i in range(9):
    col = i % 3
    row = i // 3
    lbl = CTkLabel(root, text='o', fg_color='#fff', bg_color='#fff')
    lbl.place(x=x_start + 15 + col * 50, y=y_start + 5 + row * 50)
    labels.append(lbl)

    btn = CTkButton(root, width=40, height=40, text=" ",
                    command=lambda idx=i: cell_clicked(idx),
                    bg_color='#fff')
    btn.place(x=x_start + col * 50, y=y_start + row * 50)
    buttons.append(btn)

# Горизонтальные линии
line1 = CTkFrame(root, width=160, height=5, fg_color='black', bg_color='#505050')
line1.place(x=x_start - 10, y=y_start + 42.5)
line2 = CTkFrame(root, width=160, height=5, fg_color='black', bg_color='#505050')
line2.place(x=x_start - 10, y=y_start + 92.5)

# Вертикальные линии
line3 = CTkFrame(root, width=5, height=160, fg_color='black', bg_color='#505050')
line3.place(x=x_start + 42.5, y=y_start - 10)
line4 = CTkFrame(root, width=5, height=160, fg_color='black', bg_color='#505050')
line4.place(x=x_start + 92.5, y=y_start - 10)

# Кнопка перезапуска
wrl = CTkButton(root, text='Restart game', fg_color='#949494', bg_color='#fff',
                corner_radius=10, command=reset_game)
wrl.place(x=x_start, y=y_start + 200)

root.mainloop()