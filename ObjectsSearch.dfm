object ObjectsSearchForm: TObjectsSearchForm
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
    Top = 8
    Width = 818
    Height = 337
    DataSource = DM.DSObjects
    TabOrder = 0
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
        Width = 100
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
        Width = 50
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
        FieldName = 'Photo'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Description'
        Visible = True
      end>
  end
  object Button1: TButton
    Left = 672
    Top = 376
    Width = 97
    Height = 41
    Caption = #1053#1072#1079#1072#1076
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 360
    Top = 376
    Width = 97
    Height = 41
    Caption = #1044#1086#1082#1083#1072#1076#1085#1110#1096#1077
    TabOrder = 2
    OnClick = Button2Click
  end
end
