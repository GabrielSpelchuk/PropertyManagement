object SellerAddForm: TSellerAddForm
  Left = 0
  Top = 0
  ClientHeight = 295
  ClientWidth = 517
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Edit1: TEdit
    Left = 192
    Top = 136
    Width = 121
    Height = 23
    TabOrder = 0
    TextHint = #1042#1074#1077#1076#1110#1090#1100' '#1088#1077#1081#1090#1080#1085#1075
  end
  object Edit2: TEdit
    Left = 104
    Top = 80
    Width = 121
    Height = 23
    TabOrder = 1
    TextHint = #1042#1074#1077#1076#1110#1090#1100' '#1055#1030#1055
  end
  object Edit3: TEdit
    Left = 288
    Top = 80
    Width = 121
    Height = 23
    TabOrder = 2
    TextHint = #1042#1074#1077#1076#1110#1090#1100' '#1085#1086#1084#1077#1088
  end
  object Button1: TButton
    Left = 288
    Top = 184
    Width = 121
    Height = 25
    Caption = #1044#1086#1076#1072#1090#1080
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 104
    Top = 184
    Width = 121
    Height = 25
    Caption = #1047#1072#1082#1088#1080#1090#1080
    TabOrder = 4
    OnClick = Button2Click
  end
end
