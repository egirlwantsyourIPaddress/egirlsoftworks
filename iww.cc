-- Gui to Lua
-- Version: 3.2

-- Instances:

local existingiww_src = game:GetService("CoreGui"):FindFirstChild("iww_black_src")
if existingiww_src then
	print("Found iww.")
	task.wait(0.3)
	print("Removing iww..")
	task.wait(0.5)
	existingiww_src:Destroy()
	task.wait(0.7)
	print("Removed!")
else
	existingloader_src = game:GetService("CoreGui"):FindFirstChild("authmereloaded")
	if existingloader_src then
		print("Found loader.")
		task.wait(0.3)
		print("Removing loader..")
		task.wait(0.5)
		existingloader_src:Destroy()
		task.wait(0.7)
		print("Removed!")
	end
end
task.wait(0.9)

local iww_black_src = Instance.new("ScreenGui")
local menu = Instance.new("Frame")
local UICorner = Instance.new("UICorner")
local currenttab = Instance.new("TextLabel")
local logo = Instance.new("ImageLabel")
local UICorner_2 = Instance.new("UICorner")
local tab1 = Instance.new("TextLabel")
local tab2 = Instance.new("TextLabel")
local tab3 = Instance.new("TextLabel")
local tab4 = Instance.new("TextLabel")
local tabmenu1 = Instance.new("Frame")
local Child1 = Instance.new("TextLabel")
local checkbox1 = Instance.new("Frame")
local UICorner_3 = Instance.new("UICorner")
local aimassist1 = Instance.new("TextButton")
local line_slider = Instance.new("Frame")
local UICorner_4 = Instance.new("UICorner")
local slider = Instance.new("Frame")
local UICorner_5 = Instance.new("UICorner")
local slider1 = Instance.new("TextLabel")
local textinfo1 = Instance.new("TextLabel")
local slider_followed = Instance.new("Frame")
local UICorner_6 = Instance.new("UICorner")
local ImageLabel = Instance.new("ImageLabel")
local UICorner_7 = Instance.new("UICorner")
local tabmenu2 = Instance.new("Frame")
local Child1_2 = Instance.new("TextLabel")
local esp1 = Instance.new("TextButton")
local checkbox1_2 = Instance.new("Frame")
local UICorner_8 = Instance.new("UICorner")
local line_slider_2 = Instance.new("Frame")
local UICorner_9 = Instance.new("UICorner")
local slider_2 = Instance.new("Frame")
local UICorner_10 = Instance.new("UICorner")
local slider1_2 = Instance.new("TextLabel")
local textinfo1_2 = Instance.new("TextLabel")
local slider_followed_2 = Instance.new("Frame")
local UICorner_11 = Instance.new("UICorner")
local checkbox2 = Instance.new("Frame")
local UICorner_12 = Instance.new("UICorner")
local esp2 = Instance.new("TextButton")
local checkbox3 = Instance.new("Frame")
local UICorner_13 = Instance.new("UICorner")
local esp3 = Instance.new("TextButton")
local aimb = Instance.new("TextButton")
local espb = Instance.new("TextButton")

--Properties:

iww_black_src.Name = "iww_black_src"
iww_black_src.Parent = game:GetService("CoreGui")
iww_black_src.ZIndexBehavior = Enum.ZIndexBehavior.Sibling
iww_black_src.ResetOnSpawn = false

menu.Name = "menu"
menu.Parent = iww_black_src
menu.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
menu.BorderColor3 = Color3.fromRGB(0, 0, 0)
menu.BorderSizePixel = 0
menu.Position = UDim2.new(0.221006542, 0, 0.146464646, 0)
menu.Size = UDim2.new(0, 808, 0, 581)

UICorner.CornerRadius = UDim.new(0, 9)
UICorner.Parent = menu

currenttab.Name = "currenttab"
currenttab.Parent = menu
currenttab.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
currenttab.BackgroundTransparency = 1.000
currenttab.BorderColor3 = Color3.fromRGB(0, 0, 0)
currenttab.BorderSizePixel = 0
currenttab.Position = UDim2.new(0.108664677, 0, 0.0242254678, 0)
currenttab.Size = UDim2.new(0, 128, 0, 50)
currenttab.Font = Enum.Font.GothamBold
currenttab.Text = "current tab"
currenttab.TextColor3 = Color3.fromRGB(255, 255, 255)
currenttab.TextSize = 22.000

logo.Name = "logo"
logo.Parent = menu
logo.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
logo.BackgroundTransparency = 1.000
logo.BorderColor3 = Color3.fromRGB(0, 0, 0)
logo.BorderSizePixel = 0
logo.Position = UDim2.new(0.0143980272, 0, 0.0173407607, 0)
logo.Size = UDim2.new(0, 59, 0, 60)
logo.Image = "rbxassetid://80526727889978"

UICorner_2.Parent = logo

tab1.Name = "tab1"
tab1.Parent = menu
tab1.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
tab1.BackgroundTransparency = 1.000
tab1.BorderColor3 = Color3.fromRGB(0, 0, 0)
tab1.BorderSizePixel = 0
tab1.Position = UDim2.new(0.0223938599, 0, 0.380550772, 0)
tab1.Size = UDim2.new(0, 62, 0, 35)
tab1.Font = Enum.Font.GothamBold
tab1.Text = "aim"
tab1.TextColor3 = Color3.fromRGB(255, 255, 255)
tab1.TextSize = 21.000

tab2.Name = "tab2"
tab2.Parent = menu
tab2.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
tab2.BackgroundTransparency = 1.000
tab2.BorderColor3 = Color3.fromRGB(0, 0, 0)
tab2.BorderSizePixel = 0
tab2.Position = UDim2.new(0.0223938599, 0, 0.439608455, 0)
tab2.Size = UDim2.new(0, 62, 0, 35)
tab2.Font = Enum.Font.GothamBold
tab2.Text = "esp"
tab2.TextColor3 = Color3.fromRGB(255, 255, 255)
tab2.TextSize = 21.000

tab3.Name = "tab3"
tab3.Parent = menu
tab3.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
tab3.BackgroundTransparency = 1.000
tab3.BorderColor3 = Color3.fromRGB(0, 0, 0)
tab3.BorderSizePixel = 0
tab3.Position = UDim2.new(0.0223938599, 0, 0.498666108, 0)
tab3.Size = UDim2.new(0, 62, 0, 35)
tab3.Font = Enum.Font.GothamBold
tab3.Text = "tab 3"
tab3.TextColor3 = Color3.fromRGB(255, 255, 255)
tab3.TextSize = 21.000

tab4.Name = "tab4"
tab4.Parent = menu
tab4.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
tab4.BackgroundTransparency = 1.000
tab4.BorderColor3 = Color3.fromRGB(0, 0, 0)
tab4.BorderSizePixel = 0
tab4.Position = UDim2.new(0.0223938599, 0, 0.557723761, 0)
tab4.Size = UDim2.new(0, 62, 0, 35)
tab4.Font = Enum.Font.GothamBold
tab4.Text = "tab 4"
tab4.TextColor3 = Color3.fromRGB(255, 255, 255)
tab4.TextSize = 21.000

tabmenu1.Name = "tabmenu1"
tabmenu1.Parent = menu
tabmenu1.BackgroundColor3 = Color3.fromRGB(255, 151, 151)
tabmenu1.BackgroundTransparency = 1.000
tabmenu1.BorderColor3 = Color3.fromRGB(0, 0, 0)
tabmenu1.BorderSizePixel = 0
tabmenu1.Position = UDim2.new(0.239852607, 0, 0.125559404, 0)
tabmenu1.Size = UDim2.new(0, 591, 0, 488)
tabmenu1.Visible = false

Child1.Name = "Child1"
Child1.Parent = tabmenu1
Child1.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
Child1.BackgroundTransparency = 1.000
Child1.BorderColor3 = Color3.fromRGB(0, 0, 0)
Child1.BorderSizePixel = 0
Child1.Position = UDim2.new(0.0270727575, 0, -0.00614754111, 0)
Child1.Size = UDim2.new(0, 123, 0, 50)
Child1.Font = Enum.Font.GothamBold
Child1.Text = "Child 1"
Child1.TextColor3 = Color3.fromRGB(255, 255, 255)
Child1.TextSize = 33.000

checkbox1.Name = "checkbox1"
checkbox1.Parent = tabmenu1
checkbox1.BackgroundColor3 = Color3.fromRGB(91, 76, 102)
checkbox1.BorderColor3 = Color3.fromRGB(0, 0, 0)
checkbox1.BorderSizePixel = 0
checkbox1.Position = UDim2.new(0.0507614203, 0, 0.0963114724, 0)
checkbox1.Size = UDim2.new(0, 27, 0, 27)

UICorner_3.Parent = checkbox1

aimassist1.Name = "aimassist1"
aimassist1.Parent = tabmenu1
aimassist1.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
aimassist1.BackgroundTransparency = 1.000
aimassist1.BorderColor3 = Color3.fromRGB(0, 0, 0)
aimassist1.BorderSizePixel = 0
aimassist1.Position = UDim2.new(0.0507614203, 0, 0.0963114724, 0)
aimassist1.Size = UDim2.new(0, 200, 0, 27)
aimassist1.Font = Enum.Font.Gotham
aimassist1.Text = "Aim Assist"
aimassist1.TextColor3 = Color3.fromRGB(255, 255, 255)
aimassist1.TextSize = 26.000

line_slider.Name = "line_slider"
line_slider.Parent = tabmenu1
line_slider.BackgroundColor3 = Color3.fromRGB(205, 191, 212)
line_slider.BorderColor3 = Color3.fromRGB(0, 0, 0)
line_slider.BorderSizePixel = 0
line_slider.Position = UDim2.new(0.0507614203, 0, 0.247950822, 0)
line_slider.Size = UDim2.new(0, 227, 0, 6)

UICorner_4.Parent = line_slider

slider.Name = "slider"
slider.Parent = line_slider
slider.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
slider.BorderColor3 = Color3.fromRGB(0, 0, 0)
slider.BorderSizePixel = 0
slider.Position = UDim2.new(0.465377748, 0, -0.666666687, 0)
slider.Size = UDim2.new(0, 14, 0, 14)
slider.ZIndex = 2

UICorner_5.CornerRadius = UDim.new(1, 9)
UICorner_5.Parent = slider

slider1.Name = "slider1"
slider1.Parent = line_slider
slider1.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
slider1.BackgroundTransparency = 1.000
slider1.BorderColor3 = Color3.fromRGB(0, 0, 0)
slider1.BorderSizePixel = 0
slider1.Position = UDim2.new(0.343898416, 0, -5.66666651, 0)
slider1.Size = UDim2.new(0, 70, 0, 30)
slider1.Font = Enum.Font.Gotham
slider1.Text = "ASSIST RADIUS"
slider1.TextColor3 = Color3.fromRGB(255, 255, 255)
slider1.TextSize = 26.000

textinfo1.Name = "textinfo1"
textinfo1.Parent = line_slider
textinfo1.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
textinfo1.BackgroundTransparency = 1.000
textinfo1.BorderColor3 = Color3.fromRGB(0, 0, 0)
textinfo1.BorderSizePixel = 0
textinfo1.Position = UDim2.new(0.343898416, 0, 1.66666663, 0)
textinfo1.Size = UDim2.new(0, 70, 0, 30)
textinfo1.Font = Enum.Font.Gotham
textinfo1.Text = "100"
textinfo1.TextColor3 = Color3.fromRGB(255, 255, 255)
textinfo1.TextSize = 26.000

slider_followed.Name = "slider_followed"
slider_followed.Parent = line_slider
slider_followed.BackgroundColor3 = Color3.fromRGB(156, 135, 165)
slider_followed.BorderColor3 = Color3.fromRGB(0, 0, 0)
slider_followed.BorderSizePixel = 0
slider_followed.Size = UDim2.new(0, 109, 0, 6)

UICorner_6.Parent = slider_followed

ImageLabel.Parent = menu
ImageLabel.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
ImageLabel.BackgroundTransparency = 1.000
ImageLabel.BorderColor3 = Color3.fromRGB(0, 0, 0)
ImageLabel.BorderSizePixel = 0
ImageLabel.Position = UDim2.new(0.592821777, 0, 0.817555964, 0)
ImageLabel.Size = UDim2.new(0, 329, 0, 106)
ImageLabel.Image = "rbxassetid://119164373760052"
ImageLabel.ScaleType = Enum.ScaleType.Slice

UICorner_7.Parent = ImageLabel

tabmenu2.Name = "tabmenu2"
tabmenu2.Parent = menu
tabmenu2.BackgroundColor3 = Color3.fromRGB(255, 151, 151)
tabmenu2.BackgroundTransparency = 1.000
tabmenu2.BorderColor3 = Color3.fromRGB(0, 0, 0)
tabmenu2.BorderSizePixel = 0
tabmenu2.Position = UDim2.new(0.239852607, 0, 0.125559404, 0)
tabmenu2.Size = UDim2.new(0, 591, 0, 488)

Child1_2.Name = "Child1"
Child1_2.Parent = tabmenu2
Child1_2.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
Child1_2.BackgroundTransparency = 1.000
Child1_2.BorderColor3 = Color3.fromRGB(0, 0, 0)
Child1_2.BorderSizePixel = 0
Child1_2.Position = UDim2.new(0.0270727575, 0, -0.00614754111, 0)
Child1_2.Size = UDim2.new(0, 123, 0, 50)
Child1_2.Font = Enum.Font.GothamBold
Child1_2.Text = "Child 1"
Child1_2.TextColor3 = Color3.fromRGB(255, 255, 255)
Child1_2.TextSize = 33.000

esp1.Name = "esp1"
esp1.Parent = tabmenu2
esp1.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
esp1.BackgroundTransparency = 1.000
esp1.BorderColor3 = Color3.fromRGB(0, 0, 0)
esp1.BorderSizePixel = 0
esp1.Position = UDim2.new(0.0507614203, 0, 0.0963114724, 0)
esp1.Size = UDim2.new(0, 119, 0, 27)
esp1.Font = Enum.Font.Gotham
esp1.Text = "ESP"
esp1.TextColor3 = Color3.fromRGB(255, 255, 255)
esp1.TextSize = 26.000

checkbox1_2.Name = "checkbox1"
checkbox1_2.Parent = tabmenu2
checkbox1_2.BackgroundColor3 = Color3.fromRGB(91, 76, 102)
checkbox1_2.BorderColor3 = Color3.fromRGB(0, 0, 0)
checkbox1_2.BorderSizePixel = 0
checkbox1_2.Position = UDim2.new(0.0507614203, 0, 0.0963114724, 0)
checkbox1_2.Size = UDim2.new(0, 27, 0, 27)

UICorner_8.Parent = checkbox1_2

line_slider_2.Name = "line_slider"
line_slider_2.Parent = tabmenu2
line_slider_2.BackgroundColor3 = Color3.fromRGB(205, 191, 212)
line_slider_2.BorderColor3 = Color3.fromRGB(0, 0, 0)
line_slider_2.BorderSizePixel = 0
line_slider_2.Position = UDim2.new(0.0507614203, 0, 0.418032795, 0)
line_slider_2.Size = UDim2.new(0, 227, 0, 6)

UICorner_9.Parent = line_slider_2

slider_2.Name = "slider"
slider_2.Parent = line_slider_2
slider_2.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
slider_2.BorderColor3 = Color3.fromRGB(0, 0, 0)
slider_2.BorderSizePixel = 0
slider_2.Position = UDim2.new(0.465377748, 0, -0.666666687, 0)
slider_2.Size = UDim2.new(0, 14, 0, 14)
slider_2.ZIndex = 2

UICorner_10.CornerRadius = UDim.new(1, 9)
UICorner_10.Parent = slider_2

slider1_2.Name = "slider1"
slider1_2.Parent = line_slider_2
slider1_2.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
slider1_2.BackgroundTransparency = 1.000
slider1_2.BorderColor3 = Color3.fromRGB(0, 0, 0)
slider1_2.BorderSizePixel = 0
slider1_2.Position = UDim2.new(0.330682576, 0, -5.66666651, 0)
slider1_2.Size = UDim2.new(0, 70, 0, 30)
slider1_2.Font = Enum.Font.Gotham
slider1_2.Text = "..."
slider1_2.TextColor3 = Color3.fromRGB(255, 255, 255)
slider1_2.TextSize = 26.000

textinfo1_2.Name = "textinfo1"
textinfo1_2.Parent = line_slider_2
textinfo1_2.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
textinfo1_2.BackgroundTransparency = 1.000
textinfo1_2.BorderColor3 = Color3.fromRGB(0, 0, 0)
textinfo1_2.BorderSizePixel = 0
textinfo1_2.Position = UDim2.new(0.343898416, 0, 1.66666663, 0)
textinfo1_2.Size = UDim2.new(0, 70, 0, 30)
textinfo1_2.Font = Enum.Font.Gotham
textinfo1_2.Text = "..."
textinfo1_2.TextColor3 = Color3.fromRGB(255, 255, 255)
textinfo1_2.TextSize = 26.000

slider_followed_2.Name = "slider_followed"
slider_followed_2.Parent = line_slider_2
slider_followed_2.BackgroundColor3 = Color3.fromRGB(156, 135, 165)
slider_followed_2.BorderColor3 = Color3.fromRGB(0, 0, 0)
slider_followed_2.BorderSizePixel = 0
slider_followed_2.Size = UDim2.new(0, 109, 0, 6)

UICorner_11.Parent = slider_followed_2

checkbox2.Name = "checkbox2"
checkbox2.Parent = tabmenu2
checkbox2.BackgroundColor3 = Color3.fromRGB(91, 76, 102)
checkbox2.BorderColor3 = Color3.fromRGB(0, 0, 0)
checkbox2.BorderSizePixel = 0
checkbox2.Position = UDim2.new(0.0507614203, 0, 0.180327863, 0)
checkbox2.Size = UDim2.new(0, 27, 0, 27)

UICorner_12.Parent = checkbox2

esp2.Name = "esp2"
esp2.Parent = tabmenu2
esp2.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
esp2.BackgroundTransparency = 1.000
esp2.BorderColor3 = Color3.fromRGB(0, 0, 0)
esp2.BorderSizePixel = 0
esp2.Position = UDim2.new(0.0507614203, 0, 0.180327863, 0)
esp2.Size = UDim2.new(0, 124, 0, 27)
esp2.Font = Enum.Font.Gotham
esp2.Text = "BOX"
esp2.TextColor3 = Color3.fromRGB(255, 255, 255)
esp2.TextSize = 26.000

checkbox3.Name = "checkbox3"
checkbox3.Parent = tabmenu2
checkbox3.BackgroundColor3 = Color3.fromRGB(91, 76, 102)
checkbox3.BorderColor3 = Color3.fromRGB(0, 0, 0)
checkbox3.BorderSizePixel = 0
checkbox3.Position = UDim2.new(0.0507614203, 0, 0.266393453, 0)
checkbox3.Size = UDim2.new(0, 27, 0, 27)

UICorner_13.Parent = checkbox3

esp3.Name = "esp3"
esp3.Parent = tabmenu2
esp3.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
esp3.BackgroundTransparency = 1.000
esp3.BorderColor3 = Color3.fromRGB(0, 0, 0)
esp3.BorderSizePixel = 0
esp3.Position = UDim2.new(0.0507614203, 0, 0.266393453, 0)
esp3.Size = UDim2.new(0, 221, 0, 27)
esp3.Font = Enum.Font.Gotham
esp3.Text = "HEALTH LINE"
esp3.TextColor3 = Color3.fromRGB(255, 255, 255)
esp3.TextSize = 26.000

aimb.Name = "aimb"
aimb.Parent = menu
aimb.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
aimb.BackgroundTransparency = 1.000
aimb.BorderColor3 = Color3.fromRGB(0, 0, 0)
aimb.BorderSizePixel = 0
aimb.Position = UDim2.new(0.0284653474, 0, 0.395783156, 0)
aimb.Size = UDim2.new(0, 47, 0, 25)
aimb.Font = Enum.Font.SourceSans
aimb.Text = ""
aimb.TextColor3 = Color3.fromRGB(0, 0, 0)
aimb.TextSize = 14.000

espb.Name = "espb"
espb.Parent = menu
espb.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
espb.BackgroundTransparency = 1.000
espb.BorderColor3 = Color3.fromRGB(0, 0, 0)
espb.BorderSizePixel = 0
espb.Position = UDim2.new(0.0309405942, 0, 0.45086062, 0)
espb.Size = UDim2.new(0, 47, 0, 25)
espb.Font = Enum.Font.SourceSans
espb.Text = ""
espb.TextColor3 = Color3.fromRGB(0, 0, 0)
espb.TextSize = 14.000

-- Scripts:

local function FIOAMJ_fake_script() -- aimassist1.LocalScript 
	local script = Instance.new('LocalScript', aimassist1)

	local TweenService = game:GetService("TweenService")
	local Players = game:GetService("Players")
	local LocalPlayer = Players.LocalPlayer
	
	-- Ссылки на UI-элементы
	local coreGui = game:GetService("CoreGui")
	local screenGui = coreGui:WaitForChild("iww_black_src") -- Замени "ScreenGui" на имя твоего ScreenGui
	local frame = screenGui:WaitForChild("menu")
	local tabmenu = frame:WaitForChild("tabmenu1")
	local aimAssistButton = tabmenu:WaitForChild("aimassist1") -- Кнопка
	local checkBox = tabmenu:WaitForChild("checkbox1") -- Чекбокс
	
	-- Настройки для Tween
	local tweenInfo = TweenInfo.new(
		0.5, -- Длительность анимации (в секундах)
		Enum.EasingStyle.Quad, -- Стиль анимации
		Enum.EasingDirection.Out -- Направление анимации
	)
	
	-- Цвета для включённого и выключенного состояния
	local colorOn = Color3.fromRGB(142, 67, 175) -- Тёмно-серый (включено)
	local colorOff = Color3.fromRGB(91, 76, 102) -- Тёмно-белый (выключено)
	
	-- Переменная для состояния
	local isEnabled = false
	
	-- Функция для изменения цвета
	local function updateCheckboxColor()
		local targetColor = isEnabled and colorOn or colorOff
		local tween = TweenService:Create(checkBox, tweenInfo, {BackgroundColor3 = targetColor})
		tween:Play()
	end
	
	-- Обработчик нажатия на кнопку
	aimAssistButton.MouseButton1Click:Connect(function()
		isEnabled = not isEnabled -- Переключаем состояние
		updateCheckboxColor() -- Обновляем цвет
	end)
	
	-- Инициализация начального состояния
	updateCheckboxColor()
end
coroutine.wrap(FIOAMJ_fake_script)()
local function YIVED_fake_script() -- aimassist1.awdawd 
	local script = Instance.new('LocalScript', aimassist1)

	local RunService = game:GetService("RunService")
	local Players = game:GetService("Players")
	local Teams = game:GetService("Teams")
	local UserInputService = game:GetService("UserInputService")
	local LocalPlayer = Players.LocalPlayer
	local Camera = workspace.CurrentCamera
	
	-- Ссылка на UI-элементы
	local coreGui = game:GetService("CoreGui")
	local screenGui = coreGui:WaitForChild("iww_black_src")
	local menuf = screenGui:WaitForChild("menu")
	local tabmenu = menuf:WaitForChild("tabmenu1")
	local aimAssistButton = tabmenu:WaitForChild("aimassist1")
	
	-- Настройки Aim Assist
	local ASSIST_RADIUS = 100 -- Радиус срабатывания
	local ASSIST_STRENGTH = 0.4 -- Сила притяжения
	local LERP_SPEED = 0.3 -- Скорость поворота
	
	-- Переменные для Aim Assist
	local aimAssistEnabled = false
	local aimAssistConnection = nil
	
	-- Функция для получения ближайшего врага
	local function getNearestEnemy()
		local mousePos = UserInputService:GetMouseLocation()
		local nearestTarget = nil
		local shortestDistance3D = math.huge
	
		local hasTeams = #Teams:GetTeams() > 0
	
		for _, player in pairs(Players:GetPlayers()) do
			if player ~= LocalPlayer then
				local character = player.Character
				if character and character:FindFirstChild("Humanoid") and character:FindFirstChild("HumanoidRootPart") then
					local humanoid = character.Humanoid
					if humanoid.Health > 0 and humanoid:GetState() ~= Enum.HumanoidStateType.Dead and (not hasTeams or player.Team ~= LocalPlayer.Team) then
						local bestPart = nil
						local bestScreenDistance = ASSIST_RADIUS
	
						local partsToCheck = {
							{part = character:FindFirstChild("Head"), priority = 1},
							{part = character:FindFirstChild("UpperTorso") or character:FindFirstChild("Torso"), priority = 2},
							{part = character:FindFirstChild("LeftUpperArm") or character:FindFirstChild("LeftArm"), priority = 3},
							{part = character:FindFirstChild("RightUpperArm") or character:FindFirstChild("RightArm"), priority = 3},
							{part = character:FindFirstChild("LeftLowerLeg") or character:FindFirstChild("LeftLeg"), priority = 4},
							{part = character:FindFirstChild("RightLowerLeg") or character:FindFirstChild("RightLeg"), priority = 4}
						}
	
						local highestPriorityFound = 5
	
						for _, partData in pairs(partsToCheck) do
							local part = partData.part
							if part then
								local screenPos, onScreen = Camera:WorldToScreenPoint(part.Position)
								if onScreen then
									local screenDistance = (Vector2.new(screenPos.X, screenPos.Y) - mousePos).Magnitude
									if screenDistance < ASSIST_RADIUS then
										local origin = Camera.CFrame.Position
										local direction = (part.Position - origin)
										local raycastParams = RaycastParams.new()
										raycastParams.FilterDescendantsInstances = {LocalPlayer.Character}
										raycastParams.FilterType = Enum.RaycastFilterType.Exclude -- Исправлено на Exclude
										local raycastResult = workspace:Raycast(origin, direction, raycastParams)
	
										local isVisible = true
										if raycastResult then
											local hitPart = raycastResult.Instance
											isVisible = hitPart:IsDescendantOf(character) and 
												(hitPart == part or (part.Position - origin).Magnitude <= raycastResult.Position.Magnitude)
										end
										if isVisible then
											if partData.priority < highestPriorityFound or 
												(partData.priority == highestPriorityFound and screenDistance < bestScreenDistance) then
												highestPriorityFound = partData.priority
												bestScreenDistance = screenDistance
												bestPart = part
											end
										end
									end
								end
							end
						end
	
						if bestPart then
							local distance3D = (LocalPlayer.Character.HumanoidRootPart.Position - bestPart.Position).Magnitude
							if distance3D < shortestDistance3D then
								shortestDistance3D = distance3D
								nearestTarget = bestPart
							end
						end
					end
				end
			end
		end
	
		return nearestTarget
	end
	
	-- Логика Aim Assist
	local function startAimAssist()
		if aimAssistConnection then aimAssistConnection:Disconnect() end
		aimAssistConnection = RunService.RenderStepped:Connect(function(deltaTime)
			if not aimAssistEnabled or not LocalPlayer.Character or not LocalPlayer.Character:FindFirstChild("Humanoid") or not LocalPlayer.Character:FindFirstChild("HumanoidRootPart") then return end
	
			local target = getNearestEnemy()
			if target then
				local mousePos = UserInputService:GetMouseLocation()
				local targetScreenPos = Camera:WorldToScreenPoint(target.Position)
				local targetVector = Vector2.new(targetScreenPos.X, targetScreenPos.Y)
				local distance = (targetVector - mousePos).Magnitude
	
				if distance < ASSIST_RADIUS then
					local direction = (target.Position - Camera.CFrame.Position).Unit
					local assistAmount = ASSIST_STRENGTH * (1 - distance / ASSIST_RADIUS)
					local newCFrame = CFrame.new(Camera.CFrame.Position, Camera.CFrame.Position + direction * assistAmount)
					Camera.CFrame = Camera.CFrame:Lerp(newCFrame, LERP_SPEED * deltaTime * 60)
				end
			end
		end)
	end
	
	-- Остановка Aim Assist
	local function stopAimAssist()
		if aimAssistConnection then
			aimAssistConnection:Disconnect()
			aimAssistConnection = nil
		end
	end
	
	-- Обработка нажатия кнопки Aim Assist
	aimAssistButton.MouseButton1Click:Connect(function()
		aimAssistEnabled = not aimAssistEnabled
		if aimAssistEnabled then
			print("[IWW] aim_assist enabled.")
			startAimAssist()
		else
			print("[IWW] aim_assist disabled.")
			stopAimAssist()
		end
	end)
end
coroutine.wrap(YIVED_fake_script)()
local function XHBBS_fake_script() -- esp1.LocalScript 
	local script = Instance.new('LocalScript', esp1)

	local TweenService = game:GetService("TweenService")
	local Players = game:GetService("Players")
	local LocalPlayer = Players.LocalPlayer
	
	-- Ссылки на UI-элементы
	local coreGui = game:GetService("CoreGui")
	local screenGui = coreGui:WaitForChild("iww_black_src") -- Замени "ScreenGui" на имя твоего ScreenGui
	local frame = screenGui:WaitForChild("menu")
	local tabmenu = frame:WaitForChild("tabmenu2")
	local aimAssistButton = tabmenu:WaitForChild("esp1") -- Кнопка
	local checkBox = tabmenu:WaitForChild("checkbox1") -- Чекбокс
	
	-- Настройки для Tween
	local tweenInfo = TweenInfo.new(
		0.3, -- Длительность анимации (в секундах)
		Enum.EasingStyle.Quad, -- Стиль анимации
		Enum.EasingDirection.Out -- Направление анимации
	)
	
	-- Цвета для включённого и выключенного состояния
	local colorOn = Color3.fromRGB(142, 67, 175) -- Фиолетовый (включено)
	local colorOff = Color3.fromRGB(91, 76, 102) -- Тёмно-фиолетовый (выключено)
	
	-- Переменная для состояния
	local isEnabled = false
	
	-- Функция для изменения цвета
	local function updateCheckboxColor()
		local targetColor = isEnabled and colorOn or colorOff
		local tween = TweenService:Create(checkBox, tweenInfo, {BackgroundColor3 = targetColor})
		tween:Play()
	end
	
	-- Обработчик нажатия на кнопку
	aimAssistButton.MouseButton1Click:Connect(function()
		isEnabled = not isEnabled -- Переключаем состояние
		updateCheckboxColor() -- Обновляем цвет
	end)
	
	-- Инициализация начального состояния
	updateCheckboxColor()
end
coroutine.wrap(XHBBS_fake_script)()
local function DPNW_fake_script() -- esp1.wadawdawdw 
	local script = Instance.new('LocalScript', esp1)

	local RunService = game:GetService("RunService")
	local Players = game:GetService("Players")
	local LocalPlayer = Players.LocalPlayer
	local Camera = workspace.CurrentCamera
	
	-- Ссылка на UI-элементы
	local coreGui = game:GetService("CoreGui")
	local screenGui = coreGui:WaitForChild("iww_black_src")
	local menuf = screenGui:WaitForChild("menu")
	local tabmenu = menuf:WaitForChild("tabmenu2") -- Ожидаем тот же ScreenGui
	local espButton = tabmenu:WaitForChild("esp1") -- Ожидаем существующую кнопку ESP
	
	local espEnabled = false
	local espConnection = nil
	
	-- Функция для создания или обновления подсветки
	local function updateHighlight(player)
		if player == LocalPlayer or not espEnabled then return end
	
		local character = player.Character
		if not character or not character:FindFirstChild("HumanoidRootPart") or not character:FindFirstChild("Humanoid") then 
			return 
		end
	
		if player.Team == LocalPlayer.Team then
			local highlight = character:FindFirstChild("TeamHighlight")
			if highlight then highlight:Destroy() end
			local billboard = character:FindFirstChild("NameBillboard")
			if billboard then billboard:Destroy() end
			return
		end
	
		local highlight = character:FindFirstChild("TeamHighlight")
		if not highlight then
			highlight = Instance.new("Highlight")
			highlight.Name = "TeamHighlight"
			highlight.Parent = character
			highlight.Adornee = character
		end
	
		local teamColor = player.Team and player.Team.TeamColor.Color or Color3.fromRGB(150, 150, 150)
		highlight.FillColor = teamColor
		highlight.OutlineColor = teamColor
		highlight.FillTransparency = 0.7
		highlight.OutlineTransparency = 0
	
		local humanoidRootPart = character.HumanoidRootPart
		local billboard = character:FindFirstChild("NameBillboard")
		if not billboard then
			billboard = Instance.new("BillboardGui")
			billboard.Name = "NameBillboard"
			billboard.Parent = character
			billboard.Adornee = humanoidRootPart
			billboard.StudsOffset = Vector3.new(0, 3, 0)
			billboard.AlwaysOnTop = true
	
			local textLabel = Instance.new("TextLabel")
			textLabel.Parent = billboard
			textLabel.Size = UDim2.new(1, 0, 1, 0)
			textLabel.BackgroundTransparency = 1
			textLabel.TextColor3 = Color3.fromRGB(255, 255, 255)
			textLabel.TextStrokeTransparency = 0
			textLabel.TextScaled = false
			textLabel.TextSize = 16
			textLabel.Font = Enum.Font.SourceSansBold
		end
	
		local textLabel = billboard:FindFirstChild("TextLabel")
		textLabel.Text = player.Name
	
		-- Динамическая корректировка размера
		local distance = (Camera.CFrame.Position - humanoidRootPart.Position).Magnitude
		local scale = math.clamp(5 / distance, 0.2, 1)
		billboard.Size = UDim2.new(0, 100 * scale, 0, 20 * scale)
		textLabel.TextSize = math.clamp(16 * scale, 8, 16)
	end
	
	-- Очистка ESP
	local function clearESP()
		for _, player in pairs(Players:GetPlayers()) do
			if player ~= LocalPlayer and player.Character then
				local highlight = player.Character:FindFirstChild("TeamHighlight")
				if highlight then highlight:Destroy() end
				local billboard = player.Character:FindFirstChild("NameBillboard")
				if billboard then billboard:Destroy() end
			end
		end
	end
	
	-- Обновление ESP
	local function startESP()
		if espConnection then espConnection:Disconnect() end
		espConnection = RunService.RenderStepped:Connect(function()
			if not espEnabled then return end
			for _, player in pairs(Players:GetPlayers()) do
				if player ~= LocalPlayer then
					updateHighlight(player)
				end
			end
		end)
	end
	
	-- Остановка ESP
	local function stopESP()
		if espConnection then
			espConnection:Disconnect()
			espConnection = nil
		end
		clearESP()
	end
	
	-- Обработка подключения игроков
	Players.PlayerAdded:Connect(function(player)
		if player == LocalPlayer then return end
	
		player.CharacterAdded:Connect(function(character)
			task.wait(0.1)
			if espEnabled then
				updateHighlight(player)
			end
		end)
	
		player.CharacterRemoving:Connect(function()
			clearESP()
		end)
	end)
	
	-- Обработка отключения игроков
	Players.PlayerRemoving:Connect(function(player)
		clearESP()
	end)
	
	-- Обработка нажатия кнопки ESP
	espButton.MouseButton1Click:Connect(function()
		espEnabled = not espEnabled
	
		if espEnabled then
			print("[IWW] ESP enabled.")
			startESP()
		else
			print("[IWW] ESP disabled.")
			stopESP()
		end
	end)
end
coroutine.wrap(DPNW_fake_script)()
local function MDTPLE_fake_script() -- esp2.LocalScript 
	local script = Instance.new('LocalScript', esp2)

	local TweenService = game:GetService("TweenService")
	local Players = game:GetService("Players")
	local LocalPlayer = Players.LocalPlayer
	
	-- Ссылки на UI-элементы
	local coreGui = game:GetService("CoreGui")
	local screenGui = coreGui:WaitForChild("iww_black_src") -- Замени "ScreenGui" на имя твоего ScreenGui
	local frame = screenGui:WaitForChild("menu")
	local tabmenu = frame:WaitForChild("tabmenu2")
	local aimAssistButton = tabmenu:WaitForChild("esp2") -- Кнопка
	local checkBox = tabmenu:WaitForChild("checkbox2") -- Чекбокс
	
	-- Настройки для Tween
	local tweenInfo = TweenInfo.new(
		0.3, -- Длительность анимации (в секундах)
		Enum.EasingStyle.Quad, -- Стиль анимации
		Enum.EasingDirection.Out -- Направление анимации
	)
	
	-- Цвета для включённого и выключенного состояния
	local colorOn = Color3.fromRGB(142, 67, 175) -- Фиолетовый (включено)
	local colorOff = Color3.fromRGB(91, 76, 102) -- Тёмно-фиолетовый (выключено)
	
	-- Переменная для состояния
	local isEnabled = false
	
	-- Функция для изменения цвета
	local function updateCheckboxColor()
		local targetColor = isEnabled and colorOn or colorOff
		local tween = TweenService:Create(checkBox, tweenInfo, {BackgroundColor3 = targetColor})
		tween:Play()
	end
	
	-- Обработчик нажатия на кнопку
	aimAssistButton.MouseButton1Click:Connect(function()
		isEnabled = not isEnabled -- Переключаем состояние
		updateCheckboxColor() -- Обновляем цвет
	end)
	
	-- Инициализация начального состояния
	updateCheckboxColor()
end
coroutine.wrap(MDTPLE_fake_script)()
local function CENIRR_fake_script() -- esp2.wadawdawdw 
	local script = Instance.new('LocalScript', esp2)

	local RunService = game:GetService("RunService")
	local Players = game:GetService("Players")
	local LocalPlayer = Players.LocalPlayer
	local Camera = workspace.CurrentCamera
	local Drawing = Drawing
	
	-- Ссылка на UI-элементы
	local coreGui = game:GetService("CoreGui")
	local screenGui = coreGui:WaitForChild("iww_black_src")
	local menuf = screenGui:WaitForChild("menu")
	local tabmenu = menuf:WaitForChild("tabmenu2")
	local boxButton = tabmenu:WaitForChild("esp2")
	
	local boxEnabled = false
	local boxConnection = nil
	local boxes = {} -- Таблица для хранения квадратов Drawing
	
	-- Функция создания квадрата для игрока
	local function createBox()
		local box = {
			Top = Drawing.new("Line"),
			Bottom = Drawing.new("Line"),
			Left = Drawing.new("Line"),
			Right = Drawing.new("Line")
		}
	
		for _, line in pairs(box) do
			line.Thickness = 2
			line.Color = Color3.fromRGB(255, 0, 81) -- Красный контур
			line.Visible = false
		end
	
		return box
	end
	
	-- Функция обновления квадрата
	local function updateBox(player)
		if player == LocalPlayer or not boxEnabled then return end
	
		local character = player.Character
		if not character or not character:FindFirstChild("HumanoidRootPart") or not character:FindFirstChild("Humanoid") then 
			if boxes[player] then
				for _, line in pairs(boxes[player]) do
					line.Visible = false
				end
			end
			return 
		end
	
		-- Проверяем, является ли игрок союзником
		local isAlly = false
		if LocalPlayer.Team and player.Team then
			isAlly = player.Team == LocalPlayer.Team
		elseif not LocalPlayer.Team and not player.Team then
			isAlly = false
		end
	
		if isAlly then
			if boxes[player] then
				for _, line in pairs(boxes[player]) do
					line.Visible = false
				end
			end
			return
		end
	
		-- Создаем квадрат, если его еще нет
		if not boxes[player] then
			boxes[player] = createBox()
		end
	
		local box = boxes[player]
		local humanoidRootPart = character.HumanoidRootPart
		local humanoid = character.Humanoid
		local screenPos, onScreen = Camera:WorldToViewportPoint(humanoidRootPart.Position)
	
		if onScreen and humanoid.Health > 0 then
			-- Расчет размера квадрата
			local headPos = Camera:WorldToViewportPoint(humanoidRootPart.Position + Vector3.new(0, 3, 0))
			local feetPos = Camera:WorldToViewportPoint(humanoidRootPart.Position - Vector3.new(0, 3, 0))
			local width = math.abs(headPos.X - feetPos.X) * 1.5
			local height = math.abs(headPos.Y - feetPos.Y) * 1.2
			local size = math.max(width, height)
			local halfSize = size / 2
	
			-- Обновление позиций линий
			box.Top.From = Vector2.new(screenPos.X - halfSize, screenPos.Y - halfSize)
			box.Top.To = Vector2.new(screenPos.X + halfSize, screenPos.Y - halfSize)
	
			box.Bottom.From = Vector2.new(screenPos.X - halfSize, screenPos.Y + halfSize)
			box.Bottom.To = Vector2.new(screenPos.X + halfSize, screenPos.Y + halfSize)
	
			box.Left.From = Vector2.new(screenPos.X - halfSize, screenPos.Y - halfSize)
			box.Left.To = Vector2.new(screenPos.X - halfSize, screenPos.Y + halfSize)
	
			box.Right.From = Vector2.new(screenPos.X + halfSize, screenPos.Y - halfSize)
			box.Right.To = Vector2.new(screenPos.X + halfSize, screenPos.Y + halfSize)
	
			for _, line in pairs(box) do
				line.Visible = true
			end
		else
			for _, line in pairs(box) do
				line.Visible = false
			end
		end
	end
	
	-- Очистка всех квадратов
	local function clearBoxes()
		for _, box in pairs(boxes) do
			for _, line in pairs(box) do
				line:Remove()
			end
		end
		boxes = {}
	end
	
	-- Запуск отрисовки
	local function startBox()
		if boxConnection then boxConnection:Disconnect() end
		boxConnection = RunService.RenderStepped:Connect(function()
			if not boxEnabled then return end
			for _, player in pairs(Players:GetPlayers()) do
				if player ~= LocalPlayer then
					updateBox(player)
				end
			end
		end)
	end
	
	-- Остановка отрисовки
	local function stopBox()
		if boxConnection then
			boxConnection:Disconnect()
			boxConnection = nil
		end
		clearBoxes()
	end
	
	-- Обработка подключения игроков
	Players.PlayerAdded:Connect(function(player)
		if player == LocalPlayer then return end
	
		player.CharacterAdded:Connect(function(character)
			task.wait(0.1)
			if boxEnabled then
				updateBox(player)
			end
		end)
	end)
	
	-- Обработка нажатия кнопки
	boxButton.MouseButton1Click:Connect(function()
		boxEnabled = not boxEnabled
	
		if boxEnabled then
			print("[IWW] BOX enabled.")
			startBox()
		else
			print("[IWW] BOX disabled.")
			stopBox()
		end
	end)
end
coroutine.wrap(CENIRR_fake_script)()
local function SNBQKGG_fake_script() -- esp3.LocalScript 
	local script = Instance.new('LocalScript', esp3)

	local TweenService = game:GetService("TweenService")
	local Players = game:GetService("Players")
	local LocalPlayer = Players.LocalPlayer
	
	-- Ссылки на UI-элементы
	local coreGui = game:GetService("CoreGui")
	local screenGui = coreGui:WaitForChild("iww_black_src") -- Замени "ScreenGui" на имя твоего ScreenGui
	local frame = screenGui:WaitForChild("menu")
	local tabmenu = frame:WaitForChild("tabmenu2")
	local aimAssistButton = tabmenu:WaitForChild("esp3") -- Кнопка
	local checkBox = tabmenu:WaitForChild("checkbox3") -- Чекбокс
	
	-- Настройки для Tween
	local tweenInfo = TweenInfo.new(
		0.3, -- Длительность анимации (в секундах)
		Enum.EasingStyle.Quad, -- Стиль анимации
		Enum.EasingDirection.Out -- Направление анимации
	)
	
	-- Цвета для включённого и выключенного состояния
	local colorOn = Color3.fromRGB(142, 67, 175) -- Фиолетовый (включено)
	local colorOff = Color3.fromRGB(91, 76, 102) -- Тёмно-фиолетовый (выключено)
	
	-- Переменная для состояния
	local isEnabled = false
	
	-- Функция для изменения цвета
	local function updateCheckboxColor()
		local targetColor = isEnabled and colorOn or colorOff
		local tween = TweenService:Create(checkBox, tweenInfo, {BackgroundColor3 = targetColor})
		tween:Play()
	end
	
	-- Обработчик нажатия на кнопку
	aimAssistButton.MouseButton1Click:Connect(function()
		isEnabled = not isEnabled -- Переключаем состояние
		updateCheckboxColor() -- Обновляем цвет
	end)
	
	-- Инициализация начального состояния
	updateCheckboxColor()
end
coroutine.wrap(SNBQKGG_fake_script)()
local function TJXOSQG_fake_script() -- esp3.wadawdawdw 
	local script = Instance.new('LocalScript', esp3)

	local RunService = game:GetService("RunService")
	local Players = game:GetService("Players")
	local LocalPlayer = Players.LocalPlayer
	local Camera = workspace.CurrentCamera
	
	-- Ссылка на UI-элементы
	local coreGui = game:GetService("CoreGui")
	local screenGui = coreGui:WaitForChild("iww_black_src")
	local menuf = screenGui:WaitForChild("menu")
	local tabmenu = menuf:WaitForChild("tabmenu2")
	local healthButton = tabmenu:WaitForChild("esp3") -- Предполагаем, что кнопка называется "health1"
	
	local healthEnabled = false
	local healthConnection = nil
	
	-- Функция для создания или обновления линии здоровья
	local function updateHealth(player)
		if player == LocalPlayer or not healthEnabled then return end
	
		local character = player.Character
		if not character or not character:FindFirstChild("HumanoidRootPart") or not character:FindFirstChild("Humanoid") then 
			return 
		end
	
		if player.Team == LocalPlayer.Team then
			local healthGui = character:FindFirstChild("HealthGui")
			if healthGui then healthGui:Destroy() end
			return
		end
	
		local humanoid = character.Humanoid
		local humanoidRootPart = character.HumanoidRootPart
		local healthGui = character:FindFirstChild("HealthGui")
		if not healthGui then
			healthGui = Instance.new("BillboardGui")
			healthGui.Name = "HealthGui"
			healthGui.Parent = character
			healthGui.Adornee = humanoidRootPart
			healthGui.StudsOffset = Vector3.new(-3, 0, 0) -- Слева от хитбокса
			healthGui.AlwaysOnTop = true
			healthGui.Size = UDim2.new(0, 5, 0, 50) -- Ширина и высота линии
	
			local healthBar = Instance.new("Frame")
			healthBar.Name = "HealthBar"
			healthBar.Parent = healthGui
			healthBar.BackgroundColor3 = Color3.fromRGB(0, 255, 0) -- Зелёный для полного здоровья
			healthBar.BorderSizePixel = 0
			healthBar.Size = UDim2.new(1, 0, 1, 0) -- Начальный размер
		end
	
		local healthBar = healthGui:FindFirstChild("HealthBar")
		local healthFraction = humanoid.Health / humanoid.MaxHealth
		healthBar.Size = UDim2.new(1, 0, healthFraction, 0) -- Высота зависит от здоровья
		healthBar.Position = UDim2.new(0, 0, 1 - healthFraction, 0) -- Смещение снизу вверх
		healthBar.BackgroundColor3 = Color3.fromRGB(255 * (1 - healthFraction), 255 * healthFraction, 0) -- От красного к зелёному
	
		-- Динамическая корректировка размера
		local distance = (Camera.CFrame.Position - humanoidRootPart.Position).Magnitude
		local scale = math.clamp(5 / distance, 0.5, 1)
		healthGui.Size = UDim2.new(0, 5 * scale, 0, 50 * scale)
	end
	
	-- Очистка HEALTH
	local function clearHealth()
		for _, player in pairs(Players:GetPlayers()) do
			if player ~= LocalPlayer and player.Character then
				local healthGui = player.Character:FindFirstChild("HealthGui")
				if healthGui then healthGui:Destroy() end
			end
		end
	end
	
	-- Обновление HEALTH
	local function startHealth()
		if healthConnection then healthConnection:Disconnect() end
		healthConnection = RunService.RenderStepped:Connect(function()
			if not healthEnabled then return end
			for _, player in pairs(Players:GetPlayers()) do
				if player ~= LocalPlayer then
					updateHealth(player)
				end
			end
		end)
	end
	
	-- Остановка HEALTH
	local function stopHealth()
		if healthConnection then
			healthConnection:Disconnect()
			healthConnection = nil
		end
		clearHealth()
	end
	
	-- Обработка подключения игроков
	Players.PlayerAdded:Connect(function(player)
		if player == LocalPlayer then return end
	
		player.CharacterAdded:Connect(function(character)
			task.wait(0.1)
			if healthEnabled then
				updateHealth(player)
			end
		end)
	end)
	
	-- Обработка нажатия кнопки HEALTH
	healthButton.MouseButton1Click:Connect(function()
		healthEnabled = not healthEnabled
	
		if healthEnabled then
			print("[IWW] HEALTH-ESP enabled.")
			startHealth()
		else
			print("[IWW] HEALTH-ESP disabled.")
			stopHealth()
		end
	end)
end
coroutine.wrap(TJXOSQG_fake_script)()
local function UDUCRUV_fake_script() -- aimb.LocalScript 
	local script = Instance.new('LocalScript', aimb)

	local UserInputService = game:GetService("UserInputService")
	local TweenService = game:GetService("TweenService")
	local Players = game:GetService("Players")
	local LocalPlayer = Players.LocalPlayer
	
	-- Ссылки на UI-элементы
	local coreGui = game:GetService("CoreGui")
	local screenGui = coreGui:WaitForChild("iww_black_src") -- Замени "ScreenGui" на имя твоего ScreenGui
	local menuFrame = screenGui:WaitForChild("menu") -- Элемент меню
	
	local aimb = menuFrame.aimb
	local tabmenu1 = menuFrame.tabmenu1
	local tabmenu2 = menuFrame.tabmenu2
	
	aimb.MouseButton1Click:Connect(function()
		if tabmenu2.Visible == true then
			tabmenu2.Visible = false
			tabmenu1.Visible = true
		else
			tabmenu1.Visible = true
		end
	end)
end
coroutine.wrap(UDUCRUV_fake_script)()
local function ADAFRDF_fake_script() -- espb.LocalScript 
	local script = Instance.new('LocalScript', espb)

	local UserInputService = game:GetService("UserInputService")
	local TweenService = game:GetService("TweenService")
	local Players = game:GetService("Players")
	local LocalPlayer = Players.LocalPlayer
	
	-- Ссылки на UI-элементы
	local coreGui = game:GetService("CoreGui")
	local screenGui = coreGui:WaitForChild("iww_black_src") -- Замени "ScreenGui" на имя твоего ScreenGui
	local menuFrame = screenGui:WaitForChild("menu") -- Элемент меню
	
	local espb = menuFrame.espb
	local tabmenu1 = menuFrame.tabmenu1
	local tabmenu2 = menuFrame.tabmenu2
	
	espb.MouseButton1Click:Connect(function()
		if tabmenu1.Visible == true then
			tabmenu1.Visible = false
			tabmenu2.Visible = true
		else
			tabmenu2.Visible = true
		end
	end)
end
coroutine.wrap(ADAFRDF_fake_script)()
local function GQSQYV_fake_script() -- iww_black_src.movescript 
	local script = Instance.new('LocalScript', iww_black_src)

	local UserInputService = game:GetService("UserInputService")
	local TweenService = game:GetService("TweenService")
	local Players = game:GetService("Players")
	local LocalPlayer = Players.LocalPlayer
	
	-- Ссылки на UI-элементы
	local coreGui = game:GetService("CoreGui")
	local screenGui = coreGui:WaitForChild("iww_black_src") -- Замени "ScreenGui" на имя твоего ScreenGui
	local menuFrame = screenGui:WaitForChild("menu") -- Элемент меню
	
	-- Настройки для Tween (анимация скрытия/показа)
	local tweenInfo = TweenInfo.new(
		0.3, -- Длительность анимации
		Enum.EasingStyle.Quad, -- Стиль анимации
		Enum.EasingDirection.Out
	)
	
	-- Переменные для перетаскивания
	local isDragging = false
	local dragStartPos = nil
	local mouseStartPos = nil
	
	-- Переменные для видимости
	local isVisible = true
	local defaultPosition = menuFrame.Position -- Начальная позиция (видимая)
	local hiddenPosition = UDim2.new(0.5, -100, 1, 0) -- Позиция скрытия (внизу)
	
	-- Функция для анимации видимости
	local function updateVisibility()
		local targetPosition = isVisible and defaultPosition or hiddenPosition
		local tween = TweenService:Create(menuFrame, tweenInfo, {Position = targetPosition})
		tween:Play()
	end
	
	-- Начало перетаскивания
	menuFrame.InputBegan:Connect(function(input)
		if input.UserInputType == Enum.UserInputType.MouseButton1 and isVisible then
			isDragging = true
			dragStartPos = menuFrame.Position
			mouseStartPos = UserInputService:GetMouseLocation()
		end
	end)
	
	-- Окончание перетаскивания
	menuFrame.InputEnded:Connect(function(input)
		if input.UserInputType == Enum.UserInputType.MouseButton1 then
			isDragging = false
			if isVisible then
				defaultPosition = menuFrame.Position -- Обновляем видимую позицию
			end
			dragStartPos = nil
			mouseStartPos = nil
		end
	end)
	
	-- Обработка движения мыши (перетаскивание)
	UserInputService.InputChanged:Connect(function(input)
		if isDragging and input.UserInputType == Enum.UserInputType.MouseMovement then
			local currentMousePos = UserInputService:GetMouseLocation()
			if mouseStartPos and dragStartPos then
				local delta = currentMousePos - mouseStartPos
				local newPos = UDim2.new(
					dragStartPos.X.Scale, dragStartPos.X.Offset + delta.X,
					dragStartPos.Y.Scale, dragStartPos.Y.Offset + delta.Y
				)
				menuFrame.Position = newPos
			end
		end
	end)
	
	-- Обработка нажатия правого шифта
	UserInputService.InputBegan:Connect(function(input, gameProcessed)
		if gameProcessed then return end -- Игнорируем, если ввод обработан игрой
		if input.KeyCode == Enum.KeyCode.RightShift then
			isVisible = not isVisible -- Переключаем видимость
			updateVisibility() -- Запускаем анимацию
		end
	end)
	
	-- Установка начальной позиции
	menuFrame.Position = defaultPosition
end
coroutine.wrap(GQSQYV_fake_script)()
local function PPYP_fake_script() -- iww_black_src.onoff 
	local script = Instance.new('LocalScript', iww_black_src)

	local TweenService = game:GetService("TweenService")
	local UserInputService = game:GetService("UserInputService")
	local Players = game:GetService("Players")
	local LocalPlayer = Players.LocalPlayer
	
	-- Ссылки на UI-элементы
	local coreGui = game:GetService("CoreGui")
	local screenGui = coreGui:WaitForChild("iww_black_src") -- Замени "ScreenGui" на имя твоего ScreenGui
	local menuFrame = screenGui:WaitForChild("menu") -- Элемент меню, который будет двигаться
	
	-- Настройки для Tween (анимация скрытия/показа)
	local tweenInfo = TweenInfo.new(
		0.3, -- Длительность анимации
		Enum.EasingStyle.Quad, -- Стиль анимации
		Enum.EasingDirection.Out
	)
	
	-- Переменные для перетаскивания
	local isDragging = false
	local lastMousePos = nil
	
	-- Переменные для видимости
	local isVisible = true
	local defaultPosition = menuFrame.Position -- Сохраняем текущую позицию как "видимую"
	local hiddenPosition = UDim2.new(0.5, -100, 1, 0) -- Позиция скрытия (внизу экрана)
	
	-- Функция для анимации видимости
	local function updateVisibility()
		local targetPosition = isVisible and defaultPosition or hiddenPosition
		local tween = TweenService:Create(menuFrame, tweenInfo, {Position = targetPosition})
		tween:Play()
	end
	
	-- Начало перетаскивания
	menuFrame.InputBegan:Connect(function(input)
		if input.UserInputType == Enum.UserInputType.MouseButton1 then
			isDragging = true
			lastMousePos = UserInputService:GetMouseLocation()
		end
	end)
	
	-- Окончание перетаскивания
	menuFrame.InputEnded:Connect(function(input)
		if input.UserInputType == Enum.UserInputType.MouseButton1 then
			isDragging = false
			lastMousePos = nil
		end
	end)
	
	-- Обработка движения мыши (перетаскивание)
	UserInputService.InputChanged:Connect(function(input)
		if isDragging and input.UserInputType == Enum.UserInputType.MouseMovement then
			local currentMousePos = UserInputService:GetMouseLocation()
			if lastMousePos then
				local delta = currentMousePos - lastMousePos
				local currentPos = menuFrame.Position
				local newPos = UDim2.new(
					currentPos.X.Scale, currentPos.X.Offset + delta.X,
					currentPos.Y.Scale, currentPos.Y.Offset + delta.Y
				)
				menuFrame.Position = newPos
				if isVisible then
					defaultPosition = newPos -- Обновляем "видимую" позицию при перетаскивании
				end
			end
			lastMousePos = currentMousePos
		end
	end)
	
	-- Обработка нажатия правого шифта
	UserInputService.InputBegan:Connect(function(input, gameProcessed)
		if gameProcessed then return end -- Игнорируем, если ввод обработан игрой
		if input.KeyCode == Enum.KeyCode.RightShift then
			isVisible = not isVisible -- Переключаем видимость
			updateVisibility() -- Запускаем анимацию
		end
	end)
	
	-- Установка начальной позиции
	menuFrame.Position = defaultPosition
end
coroutine.wrap(PPYP_fake_script)()
local function CIVQ_fake_script() -- iww_black_src.LocalScript 
	local script = Instance.new('LocalScript', iww_black_src)

	print("")
	print("")
	print("")
	print("")
	print("")
	print("")
	print("")
	print("")
	print(" ░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░ ")
	print("	░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░ ")
	print("	░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░ ")
	print("	░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░ ")
	print("	░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░ ")
	print("	░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░ ")
	print("	░▒▓█▓▒░░▒▓█████████████▓▒░ ░▒▓█████████████▓▒░  ")
	print("--------------------------------------------------")
	print("--------------------------------------------------")
	print("[IWW] Using official v1.1.0!")
	print("")
	print("")
	print("[IWW] by @fsoqq")
	print("")
	print("")
	print("")
	print("")
end
coroutine.wrap(CIVQ_fake_script)()
