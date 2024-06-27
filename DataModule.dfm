object DM: TDM
  Height = 750
  Width = 1000
  PixelsPerInch = 120
  object ADOTAdmins: TADOTable
    Active = True
    Connection = ADOConnection
    CursorType = ctStatic
    TableName = 'Administrators'
    Left = 352
    Top = 392
  end
  object ADOTRegistration: TADOTable
    Active = True
    Connection = ADOConnection
    CursorType = ctStatic
    TableName = 'Registration'
    Left = 352
    Top = 456
  end
  object ADOTObjects: TADOTable
    Active = True
    Connection = ADOConnection
    CursorType = ctStatic
    Filtered = True
    TableName = 'Objects'
    Left = 352
    Top = 328
  end
  object ADOTBuyers: TADOTable
    Active = True
    Connection = ADOConnection
    CursorType = ctStatic
    TableName = 'Buyers'
    Left = 352
    Top = 264
  end
  object ADOTSellers: TADOTable
    Active = True
    Connection = ADOConnection
    CursorType = ctStatic
    TableName = 'Sellers'
    Left = 352
    Top = 200
  end
  object DSAdmins: TDataSource
    DataSet = ADOTAdmins
    Left = 456
    Top = 392
  end
  object DSRegist: TDataSource
    DataSet = ADOTRegistration
    Left = 456
    Top = 456
  end
  object DSObjects: TDataSource
    DataSet = ADOTObjects
    Left = 456
    Top = 328
  end
  object DSBuyers: TDataSource
    DataSet = ADOTBuyers
    Left = 456
    Top = 264
  end
  object DSSellers: TDataSource
    DataSet = ADOTSellers
    Left = 456
    Top = 200
  end
  object ADOQ: TADOQuery
    Connection = ADOConnection
    Parameters = <>
    Left = 568
    Top = 328
  end
  object ADOConnection: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database11.mdb;Pers' +
      'ist Security Info=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 224
    Top = 328
  end
end
