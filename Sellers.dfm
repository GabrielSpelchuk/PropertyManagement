object SellersForm: TSellersForm
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
  object DBGrid1: TDBGrid
    Left = 8
    Top = 16
    Width = 818
    Height = 273
    DataSource = DM.DSSellers
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -12
    TitleFont.Name = 'Segoe UI'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'Seller ID'
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
        FieldName = 'Rating'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Contact number'
        Width = 150
        Visible = True
      end>
  end
  object DBNavigator1: TDBNavigator
    Left = 200
    Top = 304
    Width = 400
    Height = 25
    DataSource = DM.DSSellers
    TabOrder = 1
  end
  object Button1: TButton
    Left = 48
    Top = 376
    Width = 113
    Height = 41
    Caption = #1053#1072#1079#1072#1076
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 672
    Top = 376
    Width = 113
    Height = 41
    Caption = #1044#1086#1076#1072#1090#1080' '#1087#1088#1086#1076#1072#1074#1094#1103
    TabOrder = 3
    OnClick = Button2Click
  end
end
