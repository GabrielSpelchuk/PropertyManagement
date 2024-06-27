object MainForm: TMainForm
  Left = 0
  Top = 0
  ClientHeight = 441
  ClientWidth = 834
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 280
    Top = 40
    Width = 251
    Height = 37
    Caption = #1055#1086#1096#1091#1082' '#1085#1077#1088#1091#1093#1086#1084#1086#1089#1090#1110
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object ComboBox2: TComboBox
    Left = 328
    Top = 152
    Width = 145
    Height = 25
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
  end
  object ComboBox3: TComboBox
    Left = 512
    Top = 152
    Width = 145
    Height = 25
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
  end
  object ComboBox1: TComboBox
    Left = 144
    Top = 154
    Width = 145
    Height = 25
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
  end
  object Button1: TButton
    Left = 344
    Top = 239
    Width = 113
    Height = 33
    Caption = #1055#1086#1096#1091#1082
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 328
    Top = 304
    Width = 145
    Height = 41
    Caption = #1055#1088#1086#1076#1072#1090#1080' '#1085#1077#1088#1091#1093#1086#1084#1110#1089#1090#1100
    TabOrder = 4
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 344
    Top = 375
    Width = 113
    Height = 33
    Caption = #1047#1072#1082#1088#1080#1090#1080
    TabOrder = 5
    OnClick = Button3Click
  end
end
