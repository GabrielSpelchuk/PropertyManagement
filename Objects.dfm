object ObjectsForm: TObjectsForm
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
    DataSource = DM.DSObjects
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
    Caption = #1044#1086#1076#1072#1090#1080' '#1086#1073#39#1108#1082#1090
    TabOrder = 2
    OnClick = Button2Click
  end
  object DBGrid1: TDBGrid
    Left = 8
    Top = 8
    Width = 818
    Height = 281
    DataSource = DM.DSObjects
    TabOrder = 3
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -12
    TitleFont.Name = 'Segoe UI'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'Object ID'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Type'
        Width = 120
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Owner'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Verification status'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Rent/sell'
        Width = 80
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Region'
        Width = 180
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'City'
        Width = 150
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Address'
        Width = 200
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Area'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Number of rooms'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Price'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Floor'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Description'
        Visible = True
      end>
  end
end
