object BuyersForm: TBuyersForm
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
  object DBNavigator1: TDBNavigator
    Left = 200
    Top = 304
    Width = 400
    Height = 25
    DataSource = DM.DSBuyers
    TabOrder = 0
  end
  object Button1: TButton
    Left = 48
    Top = 376
    Width = 113
    Height = 41
    Caption = #1053#1072#1079#1072#1076
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 672
    Top = 376
    Width = 113
    Height = 41
    Caption = #1044#1086#1076#1072#1090#1080' '#1087#1086#1082#1091#1087#1094#1103
    TabOrder = 2
    OnClick = Button2Click
  end
  object DBGrid1: TDBGrid
    Left = 8
    Top = 8
    Width = 818
    Height = 281
    DataSource = DM.DSBuyers
    TabOrder = 3
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -12
    TitleFont.Name = 'Segoe UI'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'Buyer ID'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Name, surname'
        Width = 120
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Contact number'
        Width = 120
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Favorites'
        Visible = True
      end>
  end
end
