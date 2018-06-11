I-Logix-RPY-Archive version 8.13.0 C++ 9794446
{ IProject 
	- _id = GUID 6e1545ca-119b-4ff4-8644-ea35cedd114e;
	- _myState = 8192;
	- _properties = { IPropertyContainer 
		- Subjects = { IRPYRawContainer 
			- size = 1;
			- value = 
			{ IPropertySubject 
				- _Name = "CPP_CG";
				- Metaclasses = { IRPYRawContainer 
					- size = 1;
					- value = 
					{ IPropertyMetaclass 
						- _Name = "Configuration";
						- Properties = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IProperty 
								- _Name = "Environment";
								- _Value = "Cygwin";
								- _Type = Enum;
								- _ExtraTypeInfo = "MSVC,MSVCDLL,MSVCStandardLibrary,VxWorks,VxWorks6diab,VxWorks6gnu,VxWorks6diab_RTP,VxWorks6gnu_RTP,Solaris2,Cygwin,MicrosoftWinCE600,OseSfk,Linux,Solaris2GNU,QNXNeutrinoGCC, QNXNeutrinoMomentics,NucleusPLUS-PPC,WorkbenchManaged,WorkbenchManaged653,WorkbenchManaged_RTP";
							}
						}
					}
				}
			}
		}
	}
	- _name = "SmartRoom";
	- Stereotypes = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IHandle 
			- _m2Class = "IStereotype";
			- _filename = "$OMROOT\\Profiles\\SysML\\SysMLProfile_rpy\\SysML.sbs";
			- _subsystem = "SysML";
			- _class = "";
			- _name = "SysML";
			- _id = GUID 052b8171-a32b-4f45-a829-5585f79f9deb;
		}
	}
	- _modifiedTimeWeak = 6.10.2018::19:53:49;
	- _lastID = 8;
	- _UserColors = { IRPYRawContainer 
		- size = 16;
		- value = 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 
	}
	- _defaultSubsystem = { ISubsystemHandle 
		- _m2Class = "ISubsystem";
		- _filename = "Default.sbs";
		- _subsystem = "";
		- _class = "";
		- _name = "Default";
		- _id = GUID f852634f-b8c1-401e-96fc-8e0cb48f85cb;
	}
	- _component = { IHandle 
		- _m2Class = "IComponent";
		- _filename = "DefaultComponent.cmp";
		- _subsystem = "";
		- _class = "";
		- _name = "DefaultComponent";
		- _id = GUID 35b2f820-3d03-4691-8c3f-ee512f828a4d;
	}
	- Multiplicities = { IRPYRawContainer 
		- size = 4;
		- value = 
		{ IMultiplicityItem 
			- _name = "1";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "*";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "0,1";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "1..*";
			- _count = -1;
		}
	}
	- Subsystems = { IRPYRawContainer 
		- size = 3;
		- value = 
		{ ISubsystem 
			- fileName = "Default";
			- _id = GUID f852634f-b8c1-401e-96fc-8e0cb48f85cb;
		}
		{ IProfile 
			- fileName = "SysML";
			- _persistAs = "$OMROOT\\Profiles\\SysML\\SysMLProfile_rpy";
			- _id = GUID d9689b73-885e-44c4-896b-de43defa0a33;
			- _partOfTheModelKind = referenceunit;
		}
		{ IProfile 
			- fileName = "SysMLPerspectives";
			- _persistAs = "$OMROOT\\Settings\\SysMLPerspectives";
			- _id = GUID ab285915-0966-4322-a029-ffac3e6ef3df;
			- _partOfTheModelKind = referenceunit;
		}
	}
	- Diagrams = { IRPYRawContainer 
		- size = 3;
		- value = 
		{ IStructureDiagram 
			- _id = GUID 752ba7a1-157d-4616-9a0b-74d385967b1e;
			- _myState = 8192;
			- _properties = { IPropertyContainer 
				- Subjects = { IRPYRawContainer 
					- size = 1;
					- value = 
					{ IPropertySubject 
						- _Name = "Format";
						- Metaclasses = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertyMetaclass 
								- _Name = "DiagramFrame";
								- Properties = { IRPYRawContainer 
									- size = 8;
									- value = 
									{ IProperty 
										- _Name = "DefaultSize";
										- _Value = "20,20,590,500";
										- _Type = String;
									}
									{ IProperty 
										- _Name = "Fill.FillColor";
										- _Value = "247,247,247";
										- _Type = Color;
									}
									{ IProperty 
										- _Name = "Fill.Transparent_Fill";
										- _Value = "0";
										- _Type = Int;
									}
									{ IProperty 
										- _Name = "Font.Font";
										- _Value = "Tahoma";
										- _Type = String;
									}
									{ IProperty 
										- _Name = "Font.Size";
										- _Value = "8";
										- _Type = Int;
									}
									{ IProperty 
										- _Name = "Font.Weight@Child.NameCompartment@Name";
										- _Value = "700";
										- _Type = Int;
									}
									{ IProperty 
										- _Name = "Line.LineColor";
										- _Value = "194,192,192";
										- _Type = Color;
									}
									{ IProperty 
										- _Name = "Line.LineWidth";
										- _Value = "1";
										- _Type = Int;
									}
								}
							}
						}
					}
				}
			}
			- _name = "Structure1";
			- Stereotypes = { IRPYRawContainer 
				- size = 1;
				- value = 
				{ IHandle 
					- _m2Class = "IStereotype";
					- _filename = "$OMROOT\\Profiles\\SysML\\SysMLProfile_rpy\\SysML.sbs";
					- _subsystem = "SysML::Diagrams";
					- _class = "";
					- _name = "Internal Block Diagram";
					- _id = GUID 38dfec39-1968-4f0a-87ef-c2fde9a5d5e1;
				}
			}
			- _modifiedTimeWeak = 1.2.1990::0:0:0;
			- _lastModifiedTime = "6.10.2018::17:55:45";
			- _graphicChart = { CGIClassChart 
				- _id = GUID 32fde0c3-0823-4890-9310-62edf2cfcf04;
				- m_type = 0;
				- m_pModelObject = { IHandle 
					- _m2Class = "IStructureDiagram";
					- _id = GUID 752ba7a1-157d-4616-9a0b-74d385967b1e;
				}
				- m_pParent = ;
				- m_name = { CGIText 
					- m_str = "";
					- m_style = "Arial" 10 0 0 0 1 ;
					- m_color = { IColor 
						- m_fgColor = 0;
						- m_bgColor = 0;
						- m_bgFlag = 0;
					}
					- m_position = 1 0 0  ;
					- m_nIdent = 0;
					- m_bImplicitSetRectPoints = 0;
					- m_nOrientationCtrlPt = 8;
				}
				- m_drawBehavior = 0;
				- m_bIsPreferencesInitialized = 0;
				- elementList = 2;
				{ CGIClass 
					- _id = GUID c805b1d6-1672-4f07-bd19-295629d2c27e;
					- m_type = 78;
					- m_pModelObject = { IHandle 
						- _m2Class = "IClass";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "";
						- _name = "TopLevel";
						- _id = GUID a1bd937f-d49a-4655-9fb2-6fd4e1d15cbf;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "TopLevel";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 0;
					- m_bIsPreferencesInitialized = 0;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_polygon = 0 ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 2;
						- value = 
						{ CGICompartment 
							- _id = GUID f4d3e5c8-298d-4707-b785-77764ee01c7b;
							- m_name = "Attribute";
							- m_displayOption = Explicit;
							- m_bShowInherited = 0;
							- m_bOrdered = 0;
							- Items = { IRPYRawContainer 
								- size = 0;
							}
						}
						{ CGICompartment 
							- _id = GUID e11ce2fc-d36f-41e4-88df-ee82899c3be4;
							- m_name = "Operation";
							- m_displayOption = Explicit;
							- m_bShowInherited = 0;
							- m_bOrdered = 0;
							- Items = { IRPYRawContainer 
								- size = 0;
							}
						}
					}
					- Attrs = { IRPYRawContainer 
						- size = 0;
					}
					- Operations = { IRPYRawContainer 
						- size = 0;
					}
				}
				{ CGIDiagramFrame 
					- _id = GUID 49ff00c6-bdc7-4a37-9710-66dee9b124cd;
					- m_type = 203;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID c805b1d6-1672-4f07-bd19-295629d2c27e;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 2.63889 0 0 3.63636 20 20 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_polygon = 4 0 0  0 132  216 132  216 0  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
				}
				
				- m_access = 'Z';
				- m_modified = 'N';
				- m_fileVersion = "";
				- m_nModifyDate = 0;
				- m_nCreateDate = 0;
				- m_creator = "";
				- m_bScaleWithZoom = 1;
				- m_arrowStyle = 'S';
				- m_pRoot = GUID c805b1d6-1672-4f07-bd19-295629d2c27e;
				- m_currentLeftTop = 0 0 ;
				- m_currentRightBottom = 0 0 ;
				- m_bFreezeCompartmentContent = 0;
			}
			- _defaultSubsystem = { IHandle 
				- _m2Class = "ISubsystem";
				- _filename = "Default.sbs";
				- _subsystem = "";
				- _class = "";
				- _name = "Default";
				- _id = GUID f852634f-b8c1-401e-96fc-8e0cb48f85cb;
			}
		}
		{ IDiagram 
			- _id = GUID 6fe4a937-8a84-493b-b95a-90c9a193d3ca;
			- _myState = 8192;
			- _properties = { IPropertyContainer 
				- Subjects = { IRPYRawContainer 
					- size = 1;
					- value = 
					{ IPropertySubject 
						- _Name = "Format";
						- Metaclasses = { IRPYRawContainer 
							- size = 7;
							- value = 
							{ IPropertyMetaclass 
								- _Name = "Depends";
								- Properties = { IRPYRawContainer 
									- size = 5;
									- value = 
									{ IProperty 
										- _Name = "Font.Font";
										- _Value = "Tahoma";
										- _Type = String;
									}
									{ IProperty 
										- _Name = "Font.Size";
										- _Value = "8";
										- _Type = Int;
									}
									{ IProperty 
										- _Name = "Line.LineColor";
										- _Value = "128,128,128";
										- _Type = Color;
									}
									{ IProperty 
										- _Name = "Line.LineStyle";
										- _Value = "2";
										- _Type = Int;
									}
									{ IProperty 
										- _Name = "Line.LineWidth";
										- _Value = "0";
										- _Type = Int;
									}
								}
							}
							{ IPropertyMetaclass 
								- _Name = "DiagramFrame";
								- Properties = { IRPYRawContainer 
									- size = 8;
									- value = 
									{ IProperty 
										- _Name = "DefaultSize";
										- _Value = "20,20,590,500";
										- _Type = String;
									}
									{ IProperty 
										- _Name = "Fill.FillColor";
										- _Value = "247,247,247";
										- _Type = Color;
									}
									{ IProperty 
										- _Name = "Fill.Transparent_Fill";
										- _Value = "0";
										- _Type = Int;
									}
									{ IProperty 
										- _Name = "Font.Font";
										- _Value = "Tahoma";
										- _Type = String;
									}
									{ IProperty 
										- _Name = "Font.Size";
										- _Value = "8";
										- _Type = Int;
									}
									{ IProperty 
										- _Name = "Font.Weight@Child.NameCompartment@Name";
										- _Value = "700";
										- _Type = Int;
									}
									{ IProperty 
										- _Name = "Line.LineColor";
										- _Value = "194,192,192";
										- _Type = Color;
									}
									{ IProperty 
										- _Name = "Line.LineWidth";
										- _Value = "1";
										- _Type = Int;
									}
								}
							}
							{ IPropertyMetaclass 
								- _Name = "Ellipse";
								- Properties = { IRPYRawContainer 
									- size = 4;
									- value = 
									{ IProperty 
										- _Name = "DefaultSize";
										- _Value = "0,0,100,100";
										- _Type = String;
									}
									{ IProperty 
										- _Name = "Fill.FillColor";
										- _Value = "255,255,255";
										- _Type = Color;
									}
									{ IProperty 
										- _Name = "Line.LineColor";
										- _Value = "0,0,0";
										- _Type = Color;
									}
									{ IProperty 
										- _Name = "Line.LineWidth";
										- _Value = "0";
										- _Type = Int;
									}
								}
							}
							{ IPropertyMetaclass 
								- _Name = "Package";
								- Properties = { IRPYRawContainer 
									- size = 7;
									- value = 
									{ IProperty 
										- _Name = "DefaultSize";
										- _Value = "0,0,216,151";
										- _Type = String;
									}
									{ IProperty 
										- _Name = "Fill.FillColor";
										- _Value = "255,255,255";
										- _Type = Color;
									}
									{ IProperty 
										- _Name = "Font.Font";
										- _Value = "Tahoma";
										- _Type = String;
									}
									{ IProperty 
										- _Name = "Font.Size";
										- _Value = "8";
										- _Type = Int;
									}
									{ IProperty 
										- _Name = "Font.Weight@Child.NameCompartment@Name";
										- _Value = "700";
										- _Type = Int;
									}
									{ IProperty 
										- _Name = "Line.LineColor";
										- _Value = "109,163,217";
										- _Type = Color;
									}
									{ IProperty 
										- _Name = "Line.LineWidth";
										- _Value = "1";
										- _Type = Int;
									}
								}
							}
							{ IPropertyMetaclass 
								- _Name = "Polyline";
								- Properties = { IRPYRawContainer 
									- size = 2;
									- value = 
									{ IProperty 
										- _Name = "Line.LineColor";
										- _Value = "0,0,0";
										- _Type = Color;
									}
									{ IProperty 
										- _Name = "Line.LineWidth";
										- _Value = "0";
										- _Type = Int;
									}
								}
							}
							{ IPropertyMetaclass 
								- _Name = "Requirement";
								- Properties = { IRPYRawContainer 
									- size = 6;
									- value = 
									{ IProperty 
										- _Name = "DefaultSize";
										- _Value = "0,0,116,60";
										- _Type = String;
									}
									{ IProperty 
										- _Name = "Fill.FillColor";
										- _Value = "255,255,255";
										- _Type = Color;
									}
									{ IProperty 
										- _Name = "Font.Font";
										- _Value = "Tahoma";
										- _Type = String;
									}
									{ IProperty 
										- _Name = "Font.Size";
										- _Value = "8";
										- _Type = Int;
									}
									{ IProperty 
										- _Name = "Line.LineColor";
										- _Value = "0,0,0";
										- _Type = Color;
									}
									{ IProperty 
										- _Name = "Line.LineWidth";
										- _Value = "1";
										- _Type = Int;
									}
								}
							}
							{ IPropertyMetaclass 
								- _Name = "Stereotype";
								- Properties = { IRPYRawContainer 
									- size = 7;
									- value = 
									{ IProperty 
										- _Name = "DefaultSize";
										- _Value = "0,0,108,73";
										- _Type = String;
									}
									{ IProperty 
										- _Name = "Fill.FillColor";
										- _Value = "255,255,255";
										- _Type = Color;
									}
									{ IProperty 
										- _Name = "Font.Font";
										- _Value = "Tahoma";
										- _Type = String;
									}
									{ IProperty 
										- _Name = "Font.Size";
										- _Value = "8";
										- _Type = Int;
									}
									{ IProperty 
										- _Name = "Font.Weight@Child.NameCompartment@Name";
										- _Value = "700";
										- _Type = Int;
									}
									{ IProperty 
										- _Name = "Line.LineColor";
										- _Value = "109,163,217";
										- _Type = Color;
									}
									{ IProperty 
										- _Name = "Line.LineWidth";
										- _Value = "1";
										- _Type = Int;
									}
								}
							}
						}
					}
				}
			}
			- _name = "Smartroom";
			- Stereotypes = { IRPYRawContainer 
				- size = 1;
				- value = 
				{ IHandle 
					- _m2Class = "IStereotype";
					- _filename = "$OMROOT\\Profiles\\SysML\\SysMLProfile_rpy\\SysML.sbs";
					- _subsystem = "SysML::Diagrams";
					- _class = "";
					- _name = "Requirements Diagram";
					- _id = GUID 44ecf98f-3643-40b9-8eef-f0f82d1a3185;
				}
			}
			- _modifiedTimeWeak = 1.2.1990::0:0:0;
			- _lastModifiedTime = "6.10.2018::19:33:3";
			- _graphicChart = { CGIClassChart 
				- _id = GUID 3e78bcdc-5926-492b-8388-9d1ca324e566;
				- m_type = 0;
				- m_pModelObject = { IHandle 
					- _m2Class = "IDiagram";
					- _id = GUID 6fe4a937-8a84-493b-b95a-90c9a193d3ca;
				}
				- m_pParent = ;
				- m_name = { CGIText 
					- m_str = "";
					- m_style = "Arial" 10 0 0 0 1 ;
					- m_color = { IColor 
						- m_fgColor = 0;
						- m_bgColor = 0;
						- m_bgFlag = 0;
					}
					- m_position = 1 0 0  ;
					- m_nIdent = 0;
					- m_bImplicitSetRectPoints = 0;
					- m_nOrientationCtrlPt = 8;
				}
				- m_drawBehavior = 0;
				- m_bIsPreferencesInitialized = 0;
				- elementList = 107;
				{ CGIClass 
					- _id = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_type = 78;
					- m_pModelObject = { IHandle 
						- _m2Class = "IClass";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "";
						- _name = "TopLevel";
						- _id = GUID a1bd937f-d49a-4655-9fb2-6fd4e1d15cbf;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "TopLevel";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 0;
					- m_bIsPreferencesInitialized = 0;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_polygon = 0 ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 2;
						- value = 
						{ CGICompartment 
							- _id = GUID 8993150c-cfc9-4332-a488-fd47c5d922c8;
							- m_name = "Attribute";
							- m_displayOption = Explicit;
							- m_bShowInherited = 0;
							- m_bOrdered = 0;
							- Items = { IRPYRawContainer 
								- size = 0;
							}
						}
						{ CGICompartment 
							- _id = GUID 9857da35-3641-40bd-8472-7c2b7d949972;
							- m_name = "Operation";
							- m_displayOption = Explicit;
							- m_bShowInherited = 0;
							- m_bOrdered = 0;
							- Items = { IRPYRawContainer 
								- size = 0;
							}
						}
					}
					- Attrs = { IRPYRawContainer 
						- size = 0;
					}
					- Operations = { IRPYRawContainer 
						- size = 0;
					}
				}
				{ CGIDiagramFrame 
					- _id = GUID ac3686a8-2dbc-4b4a-80c5-45dd471e4987;
					- m_type = 203;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 10.5231 0 0 4.68182 20 -13 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_polygon = 4 0 0  0 132  216 132  216 0  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
				}
				{ CGIAnnotation 
					- _id = GUID 0cdef5d7-5e1c-4c70-b1ba-8dd7fa0ba68d;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 2;
							- value = 
							{ IPropertySubject 
								- _Name = "General";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Graphics";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "FitBoxToItsTextuals";
												- _Value = "False";
												- _Type = Bool;
											}
										}
									}
								}
							}
							{ IPropertySubject 
								- _Name = "ObjectModelGe";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Requirement";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "Compartments";
												- _Value = "ID, Specification";
												- _Type = MultiLine;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 176;
					- m_pModelObject = { IHandle 
						- _m2Class = "IRequirement";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "";
						- _name = "Authorization";
						- _id = GUID 68f5a68a-5c95-4a1b-b6ad-0cfc65744f1f;
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "Authorization";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 4104;
					- m_transform = 0.107934 0 0 0.0988912 126 285.713 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_bFramesetModified = 1;
					- m_polygon = 4 0 3  0 1095  1084 1095  1084 3  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- frameset = "<frameset rows=50%,50%>
<frame name=IDTextCompartment>
<frame name=SpecificationTextCompartment>";
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- _iTempdisplayTextFlag = 1;
					- m_bIsBoxStyle = 1;
				}
				{ CGIAnnotation 
					- _id = GUID 6abf35ff-9b55-45bc-8172-ba0e110e163e;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 2;
							- value = 
							{ IPropertySubject 
								- _Name = "General";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Graphics";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "FitBoxToItsTextuals";
												- _Value = "False";
												- _Type = Bool;
											}
										}
									}
								}
							}
							{ IPropertySubject 
								- _Name = "ObjectModelGe";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Requirement";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "Compartments";
												- _Value = "ID, Specification";
												- _Type = MultiLine;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 176;
					- m_pModelObject = { IHandle 
						- _m2Class = "IRequirement";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "";
						- _name = "Lighting";
						- _id = GUID 3a5cbb92-9d6a-4eed-be86-7b5e2addcdb3;
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "Lighting";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 4104;
					- m_transform = 0.097786 0 0 0.0998168 536 288.701 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_bFramesetModified = 1;
					- m_polygon = 4 0 3  0 1095  1084 1095  1084 3  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- frameset = "<frameset rows=47%,53%>
<frame name=IDTextCompartment>
<frame name=SpecificationTextCompartment>";
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- _iTempdisplayTextFlag = 1;
					- m_bIsBoxStyle = 1;
				}
				{ CGIAnnotation 
					- _id = GUID 265acca9-02e7-476c-821b-b48b66a7944e;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 2;
							- value = 
							{ IPropertySubject 
								- _Name = "General";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Graphics";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "FitBoxToItsTextuals";
												- _Value = "False";
												- _Type = Bool;
											}
										}
									}
								}
							}
							{ IPropertySubject 
								- _Name = "ObjectModelGe";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Requirement";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "Compartments";
												- _Value = "ID, Specification";
												- _Type = MultiLine;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 176;
					- m_pModelObject = { IHandle 
						- _m2Class = "IRequirement";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "";
						- _name = "Temperature control";
						- _id = GUID 6f488901-8e06-4537-941c-576afc69d0c1;
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "Temperature control";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 4104;
					- m_transform = 0.106089 0 0 0.0998169 1007 288.701 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_bFramesetModified = 1;
					- m_polygon = 4 0 3  0 1095  1084 1095  1084 3  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- frameset = "<frameset rows=35%,65%>
<frame name=IDTextCompartment>
<frame name=SpecificationTextCompartment>";
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- _iTempdisplayTextFlag = 1;
					- m_bIsBoxStyle = 1;
				}
				{ CGIAnnotation 
					- _id = GUID ca6bd652-d649-483a-bf6a-037c98b62318;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 2;
							- value = 
							{ IPropertySubject 
								- _Name = "General";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Graphics";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "FitBoxToItsTextuals";
												- _Value = "False";
												- _Type = Bool;
											}
										}
									}
								}
							}
							{ IPropertySubject 
								- _Name = "ObjectModelGe";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Requirement";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "Compartments";
												- _Value = "ID, Specification";
												- _Type = MultiLine;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 176;
					- m_pModelObject = { IHandle 
						- _m2Class = "IRequirement";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "";
						- _name = "Air quality control";
						- _id = GUID f4bde46f-e216-4dd6-8c16-79bf387af2ed;
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "Air quality control";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 4104;
					- m_transform = 0.107011 0 0 0.0998169 1427 288.701 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_bFramesetModified = 1;
					- m_polygon = 4 0 3  0 1095  1084 1095  1084 3  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- frameset = "<frameset rows=36%,64%>
<frame name=IDTextCompartment>
<frame name=SpecificationTextCompartment>";
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- _iTempdisplayTextFlag = 1;
					- m_bIsBoxStyle = 1;
				}
				{ CGIAnnotation 
					- _id = GUID 02df9044-ad44-40db-a882-b11084b9171e;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 2;
							- value = 
							{ IPropertySubject 
								- _Name = "General";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Graphics";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "FitBoxToItsTextuals";
												- _Value = "False";
												- _Type = Bool;
											}
										}
									}
								}
							}
							{ IPropertySubject 
								- _Name = "ObjectModelGe";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Requirement";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "Compartments";
												- _Value = "ID, Specification";
												- _Type = MultiLine;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 176;
					- m_pModelObject = { IHandle 
						- _m2Class = "IRequirement";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "";
						- _name = "Security system";
						- _id = GUID 01da4b45-5d28-4e26-be1e-b8be36547fff;
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "Security system";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 4104;
					- m_transform = 0.107011 0 0 0.0943224 1823 291.718 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_bFramesetModified = 1;
					- m_polygon = 4 0 3  0 1095  1084 1095  1084 3  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- frameset = "<frameset rows=37%,63%>
<frame name=IDTextCompartment>
<frame name=SpecificationTextCompartment>";
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- _iTempdisplayTextFlag = 1;
					- m_bIsBoxStyle = 1;
				}
				{ CGIAnnotation 
					- _id = GUID d4aba93f-3db2-4711-9631-0ed45df11338;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 2;
							- value = 
							{ IPropertySubject 
								- _Name = "General";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Graphics";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "FitBoxToItsTextuals";
												- _Value = "False";
												- _Type = Bool;
											}
										}
									}
								}
							}
							{ IPropertySubject 
								- _Name = "ObjectModelGe";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Requirement";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "Compartments";
												- _Value = "ID, Specification";
												- _Type = MultiLine;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 176;
					- m_pModelObject = { IHandle 
						- _m2Class = "IRequirement";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "";
						- _name = "Communication system";
						- _id = GUID 82e308c5-87c0-4691-a8a8-2abbe5b5bc2d;
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "Communication system";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 4104;
					- m_transform = 0.119926 0 0 0.0952381 2153 291.714 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_bFramesetModified = 1;
					- m_polygon = 4 0 3  0 1095  1084 1095  1084 3  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- frameset = "<frameset rows=34%,66%>
<frame name=IDTextCompartment>
<frame name=SpecificationTextCompartment>";
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- _iTempdisplayTextFlag = 1;
					- m_bIsBoxStyle = 1;
				}
				{ CGIAnnotation 
					- _id = GUID 50f88940-96af-459c-9608-c1e2a2ca9067;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 2;
							- value = 
							{ IPropertySubject 
								- _Name = "General";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Graphics";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "FitBoxToItsTextuals";
												- _Value = "False";
												- _Type = Bool;
											}
										}
									}
								}
							}
							{ IPropertySubject 
								- _Name = "ObjectModelGe";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Requirement";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "Compartments";
												- _Value = "ID, Specification";
												- _Type = MultiLine;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 176;
					- m_pModelObject = { IHandle 
						- _m2Class = "IRequirement";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "";
						- _name = "Unauthorized entry";
						- _id = GUID dd32a604-0375-48e1-aeef-89e474e8aac7;
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "Unauthorized entry";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 4104;
					- m_transform = 0.107934 0 0 0.12705 51 455.88 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_bFramesetModified = 1;
					- m_polygon = 4 0 3  0 1095  1084 1095  1084 3  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- frameset = "<frameset rows=29%,71%>
<frame name=IDTextCompartment>
<frame name=SpecificationTextCompartment>";
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- _iTempdisplayTextFlag = 1;
					- m_bIsBoxStyle = 1;
				}
				{ CGIFreeShape 
					- _id = GUID 2276cfc5-690e-4569-a368-b823ac37231a;
					- m_type = 188;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 1489 95 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 356 298  370 298  370 313  356 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID a283ef22-5644-4984-b3b8-69e79e1b7a32;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 1490 95 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 362 298  362 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 9732cee4-d12e-4d7e-a0b2-11cf3bcf269a;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 1489 95 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 356 306  370 306  ;
				}
				{ CGIFreeShape 
					- _id = GUID c8c059f0-33ea-46d9-b0a4-2734b778cb22;
					- m_type = 188;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 -188 95 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 356 298  370 298  370 313  356 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID d39deec5-21b2-4952-b34f-00730a00e7ba;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 -188 95 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 362 298  362 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 7371e676-7cea-4823-9a4f-203d7e385d37;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 -188 95 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 356 306  370 306  ;
				}
				{ CGIAnnotation 
					- _id = GUID 6476ef86-597c-41f7-a961-d79fb8b076ba;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 2;
							- value = 
							{ IPropertySubject 
								- _Name = "General";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Graphics";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "FitBoxToItsTextuals";
												- _Value = "False";
												- _Type = Bool;
											}
										}
									}
								}
							}
							{ IPropertySubject 
								- _Name = "ObjectModelGe";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Requirement";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "Compartments";
												- _Value = "ID, Specification";
												- _Type = MultiLine;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 176;
					- m_pModelObject = { IHandle 
						- _m2Class = "IRequirement";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "";
						- _name = "Only authorized user";
						- _id = GUID 937e3647-6551-4b17-9c08-47b12d41fe56;
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "Only authorized user";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 4104;
					- m_transform = 0.114391 0 0 0.128205 206 454.615 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_bFramesetModified = 1;
					- m_polygon = 4 0 3  0 1095  1084 1095  1084 3  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- frameset = "<frameset rows=28%,72%>
<frame name=IDTextCompartment>
<frame name=SpecificationTextCompartment>";
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- _iTempdisplayTextFlag = 1;
					- m_bIsBoxStyle = 1;
				}
				{ CGIFreeShape 
					- _id = GUID 23f38d20-8ada-4b6d-a27f-ce1d174e3592;
					- m_type = 188;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 -164 97 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 356 298  370 298  370 313  356 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID fe71f020-ef1d-4aa4-b46c-1854e2a27668;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 -163 97 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 362 298  362 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 985860a9-1436-4cc1-bbf5-0dee73d2e811;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 -164 97 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 356 306  370 306  ;
				}
				{ CGIAnnotation 
					- _id = GUID 85d56bdb-9271-4508-a828-ac4e6b48566b;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 2;
							- value = 
							{ IPropertySubject 
								- _Name = "General";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Graphics";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "FitBoxToItsTextuals";
												- _Value = "False";
												- _Type = Bool;
											}
										}
									}
								}
							}
							{ IPropertySubject 
								- _Name = "ObjectModelGe";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Requirement";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "Compartments";
												- _Value = "ID, Specification";
												- _Type = MultiLine;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 176;
					- m_pModelObject = { IHandle 
						- _m2Class = "IRequirement";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "";
						- _name = "Light Auto ON";
						- _id = GUID d00e4adc-9675-4d61-b320-50275ac7b1c6;
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "Light Auto ON";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 4104;
					- m_transform = 0.107011 0 0 0.128205 387 454.615 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_bFramesetModified = 1;
					- m_polygon = 4 0 3  0 1095  1084 1095  1084 3  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- frameset = "<frameset rows=23%,77%>
<frame name=IDTextCompartment>
<frame name=SpecificationTextCompartment>";
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- _iTempdisplayTextFlag = 1;
					- m_bIsBoxStyle = 1;
				}
				{ CGIAnnotation 
					- _id = GUID 375e44f3-0a37-44e2-96eb-cc9bfbad8c5d;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 2;
							- value = 
							{ IPropertySubject 
								- _Name = "General";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Graphics";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "FitBoxToItsTextuals";
												- _Value = "False";
												- _Type = Bool;
											}
										}
									}
								}
							}
							{ IPropertySubject 
								- _Name = "ObjectModelGe";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Requirement";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "Compartments";
												- _Value = "ID, Specification";
												- _Type = MultiLine;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 176;
					- m_pModelObject = { IHandle 
						- _m2Class = "IRequirement";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "";
						- _name = "requirement_10";
						- _id = GUID 0996531f-8ee8-400e-aa09-274a6171df5e;
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "requirement_10";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 4104;
					- m_transform = 0.107011 0 0 0.128205 531 453.615 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_bFramesetModified = 1;
					- m_polygon = 4 0 3  0 1095  1084 1095  1084 3  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- frameset = "<frameset rows=23%,77%>
<frame name=IDTextCompartment>
<frame name=SpecificationTextCompartment>";
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- _iTempdisplayTextFlag = 1;
					- m_bIsBoxStyle = 1;
				}
				{ CGIAnnotation 
					- _id = GUID 642ffda4-5f07-4a16-bfde-1729094f1bee;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 2;
							- value = 
							{ IPropertySubject 
								- _Name = "General";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Graphics";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "FitBoxToItsTextuals";
												- _Value = "False";
												- _Type = Bool;
											}
										}
									}
								}
							}
							{ IPropertySubject 
								- _Name = "ObjectModelGe";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Requirement";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "Compartments";
												- _Value = "ID, Specification";
												- _Type = MultiLine;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 176;
					- m_pModelObject = { IHandle 
						- _m2Class = "IRequirement";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "";
						- _name = "requirement_11";
						- _id = GUID da33a867-befb-4241-b3e7-fd76e8e695e8;
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "requirement_11";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 4104;
					- m_transform = 0.107011 0 0 0.129121 667 452.613 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_bFramesetModified = 1;
					- m_polygon = 4 0 3  0 1095  1084 1095  1084 3  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- frameset = "<frameset rows=22%,78%>
<frame name=IDTextCompartment>
<frame name=SpecificationTextCompartment>";
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- _iTempdisplayTextFlag = 1;
					- m_bIsBoxStyle = 1;
				}
				{ CGIFreeShape 
					- _id = GUID 070388d4-12a5-4055-b2ca-9425f23ea4f0;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 0 145 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 444 307  444 275  567 275  567 252  ;
				}
				{ CGIFreeShape 
					- _id = GUID 207bdf74-0b1d-463b-96ad-bd07c4dd9a21;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 0 145 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 591 308  591 253  ;
				}
				{ CGIFreeShape 
					- _id = GUID 6387c88e-a14a-4f22-aa88-357a111ce524;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 0 145 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 726 306  726 274  617 273  617 254  ;
				}
				{ CGIFreeShape 
					- _id = GUID e1e51dc9-95c9-4fa1-ad64-2f46804aa1ab;
					- m_type = 188;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 204 100 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 356 298  370 298  370 313  356 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 57852424-28b0-4ed8-85b2-732bde6b4edf;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 205 100 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 362 298  362 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 33924af1-2e91-4d34-b9f8-f95425d1474c;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 204 100 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 356 306  370 306  ;
				}
				{ CGIFreeShape 
					- _id = GUID f1146a2f-67ad-4ec6-8aa6-1bd0c1e70e26;
					- m_type = 188;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 229 101 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 356 298  370 298  370 313  356 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 850b589d-5f03-4716-86ab-991c28aa0e78;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 230 101 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 362 298  362 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID ab5f4c6f-c20e-408b-9ef1-26e96c4c3e6d;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 229 101 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 356 306  370 306  ;
				}
				{ CGIFreeShape 
					- _id = GUID 7d80a287-905b-4946-9993-06c4bb0d0228;
					- m_type = 188;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 254 101 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 356 298  370 298  370 313  356 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 7927ddbe-4b94-421d-b7f1-18c1fb141c20;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 255 101 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 362 298  362 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 1dc97085-6f53-4893-abfa-1b52875f7d1e;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 254 101 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 356 306  370 306  ;
				}
				{ CGIFreeShape 
					- _id = GUID b1b7255a-e75d-4313-9752-e2e713e9b3b8;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 0 145 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 175 251  175 278  111 278  111 310  ;
				}
				{ CGIFreeShape 
					- _id = GUID d0e19bc5-6a8e-4bff-8e9a-53d768cadcd8;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 0 145 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 199 252  199 281  268 279  268 309  ;
				}
				{ CGIAnnotation 
					- _id = GUID 435f9d71-a79f-4377-b02f-13d83bc06efe;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 2;
							- value = 
							{ IPropertySubject 
								- _Name = "General";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Graphics";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "FitBoxToItsTextuals";
												- _Value = "False";
												- _Type = Bool;
											}
										}
									}
								}
							}
							{ IPropertySubject 
								- _Name = "ObjectModelGe";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Requirement";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "Compartments";
												- _Value = "ID, Specification";
												- _Type = MultiLine;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 176;
					- m_pModelObject = { IHandle 
						- _m2Class = "IRequirement";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "";
						- _name = "requirement_12";
						- _id = GUID 8d3eefd8-df5c-43aa-8c4e-2b1f0d735665;
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "requirement_12";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 4104;
					- m_transform = 0.107011 0 0 0.130037 852 451.61 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_bFramesetModified = 1;
					- m_polygon = 4 0 3  0 1095  1084 1095  1084 3  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- frameset = "<frameset rows=24%,76%>
<frame name=IDTextCompartment>
<frame name=SpecificationTextCompartment>";
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- _iTempdisplayTextFlag = 1;
					- m_bIsBoxStyle = 1;
				}
				{ CGIAnnotation 
					- _id = GUID c0215102-8ff5-47f8-8b89-efd1acc077ff;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 2;
							- value = 
							{ IPropertySubject 
								- _Name = "General";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Graphics";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "FitBoxToItsTextuals";
												- _Value = "False";
												- _Type = Bool;
											}
										}
									}
								}
							}
							{ IPropertySubject 
								- _Name = "ObjectModelGe";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Requirement";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "Compartments";
												- _Value = "ID, Specification";
												- _Type = MultiLine;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 176;
					- m_pModelObject = { IHandle 
						- _m2Class = "IRequirement";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "";
						- _name = "requirement_13";
						- _id = GUID 266914be-74ab-4356-805e-2cb13eb139b7;
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "requirement_13";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 4104;
					- m_transform = 0.107011 0 0 0.130037 1010 451.61 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_bFramesetModified = 1;
					- m_polygon = 4 0 3  0 1095  1084 1095  1084 3  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- frameset = "<frameset rows=25%,75%>
<frame name=IDTextCompartment>
<frame name=SpecificationTextCompartment>";
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- _iTempdisplayTextFlag = 1;
					- m_bIsBoxStyle = 1;
				}
				{ CGIAnnotation 
					- _id = GUID ac2edf84-ff76-422f-912a-c4f78151034a;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 2;
							- value = 
							{ IPropertySubject 
								- _Name = "General";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Graphics";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "FitBoxToItsTextuals";
												- _Value = "False";
												- _Type = Bool;
											}
										}
									}
								}
							}
							{ IPropertySubject 
								- _Name = "ObjectModelGe";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Requirement";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "Compartments";
												- _Value = "ID, Specification";
												- _Type = MultiLine;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 176;
					- m_pModelObject = { IHandle 
						- _m2Class = "IRequirement";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "";
						- _name = "requirement_14";
						- _id = GUID bdb7f887-f8cd-4f93-ba3a-30a43e0c4fb8;
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "requirement_14";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 4104;
					- m_transform = 0.107011 0 0 0.130037 1165 450.61 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_bFramesetModified = 1;
					- m_polygon = 4 0 3  0 1095  1084 1095  1084 3  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- frameset = "<frameset rows=28%,72%>
<frame name=IDTextCompartment>
<frame name=SpecificationTextCompartment>";
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- _iTempdisplayTextFlag = 1;
					- m_bIsBoxStyle = 1;
				}
				{ CGIFreeShape 
					- _id = GUID c137c851-74b0-4f9b-9239-94ef1d76033d;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 0 145 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 5 1038 254  1038 273  908 272  908 304  909 306  ;
				}
				{ CGIFreeShape 
					- _id = GUID 54c7372f-6b99-476b-9c9f-5f57a5479267;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 0 145 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 1085 253  1085 276  1219 275  1219 304  ;
				}
				{ CGIFreeShape 
					- _id = GUID 564481ea-b6e7-4157-8f1d-8ccae62c0f9b;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 0 145 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 1062 255  1062 306  ;
				}
				{ CGIFreeShape 
					- _id = GUID 121b5dba-94bb-4ecf-8683-9581b2f9aef6;
					- m_type = 188;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 674 99 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 356 298  370 298  370 313  356 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 2feaa4b3-de23-42a4-a227-f7a3642cdfb5;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 675 99 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 362 298  362 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID ac6294cc-ec1a-489b-a537-4e8a2541ed4e;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 674 99 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 356 306  370 306  ;
				}
				{ CGIFreeShape 
					- _id = GUID 33775ebb-1fe6-4194-ba87-513e99192817;
					- m_type = 188;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 700 101 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 356 298  370 298  370 313  356 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID e5a81242-982f-4b56-aae1-3fce09f8cc04;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 701 101 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 362 298  362 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 68dc2c8c-1087-4f64-8608-a2062f66a436;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 700 101 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 356 306  370 306  ;
				}
				{ CGIFreeShape 
					- _id = GUID fbc0325e-1527-4dc1-979f-17e5db6f592b;
					- m_type = 188;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 722 100 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 356 298  370 298  370 313  356 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 5d79333d-977d-4257-9e44-3b57cbc8a2df;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 723 100 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 362 298  362 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 353b458e-9a9a-4972-a4de-ba86ef54ed24;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 722 100 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 356 306  370 306  ;
				}
				{ CGIAnnotation 
					- _id = GUID 549cface-e7be-45af-b237-5f31067101c2;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 2;
							- value = 
							{ IPropertySubject 
								- _Name = "General";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Graphics";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "FitBoxToItsTextuals";
												- _Value = "False";
												- _Type = Bool;
											}
										}
									}
								}
							}
							{ IPropertySubject 
								- _Name = "ObjectModelGe";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Requirement";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "Compartments";
												- _Value = "ID, Specification";
												- _Type = MultiLine;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 176;
					- m_pModelObject = { IHandle 
						- _m2Class = "IRequirement";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "";
						- _name = "requirement_15";
						- _id = GUID 1d0c2556-2d30-4ebb-8331-af498b18f256;
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "requirement_15";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 4104;
					- m_transform = 0.107011 0 0 0.130952 1345 449.607 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_bFramesetModified = 1;
					- m_polygon = 4 0 3  0 1095  1084 1095  1084 3  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- frameset = "<frameset rows=29%,71%>
<frame name=IDTextCompartment>
<frame name=SpecificationTextCompartment>";
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- _iTempdisplayTextFlag = 1;
					- m_bIsBoxStyle = 1;
				}
				{ CGIAnnotation 
					- _id = GUID ea02230b-0897-4f19-a820-5369df29fd9b;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 2;
							- value = 
							{ IPropertySubject 
								- _Name = "General";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Graphics";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "FitBoxToItsTextuals";
												- _Value = "False";
												- _Type = Bool;
											}
										}
									}
								}
							}
							{ IPropertySubject 
								- _Name = "ObjectModelGe";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Requirement";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "Compartments";
												- _Value = "ID, Specification";
												- _Type = MultiLine;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 176;
					- m_pModelObject = { IHandle 
						- _m2Class = "IRequirement";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "";
						- _name = "requirement_16";
						- _id = GUID e8ac13fb-ee8b-450c-86e5-122795096108;
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "requirement_16";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 4104;
					- m_transform = 0.107011 0 0 0.130952 1500 449.607 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_bFramesetModified = 1;
					- m_polygon = 4 0 3  0 1095  1084 1095  1084 3  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- frameset = "<frameset rows=31%,69%>
<frame name=IDTextCompartment>
<frame name=SpecificationTextCompartment>";
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- _iTempdisplayTextFlag = 1;
					- m_bIsBoxStyle = 1;
				}
				{ CGIAnnotation 
					- _id = GUID e3019179-96b7-4236-9af5-562de9270e99;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 2;
							- value = 
							{ IPropertySubject 
								- _Name = "General";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Graphics";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "FitBoxToItsTextuals";
												- _Value = "False";
												- _Type = Bool;
											}
										}
									}
								}
							}
							{ IPropertySubject 
								- _Name = "ObjectModelGe";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Requirement";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "Compartments";
												- _Value = "ID, Specification";
												- _Type = MultiLine;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 176;
					- m_pModelObject = { IHandle 
						- _m2Class = "IRequirement";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "";
						- _name = "requirement_17";
						- _id = GUID 8e71e0a9-dbf2-46da-874d-9f6dc177f056;
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "requirement_17";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 4104;
					- m_transform = 0.107011 0 0 0.131868 1679 448.604 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_bFramesetModified = 1;
					- m_polygon = 4 0 3  0 1095  1084 1095  1084 3  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- frameset = "<frameset rows=29%,71%>
<frame name=IDTextCompartment>
<frame name=SpecificationTextCompartment>";
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- _iTempdisplayTextFlag = 1;
					- m_bIsBoxStyle = 1;
				}
				{ CGIAnnotation 
					- _id = GUID 6871deb7-feb8-4ebf-9cb6-031b84309a9e;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 2;
							- value = 
							{ IPropertySubject 
								- _Name = "General";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Graphics";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "FitBoxToItsTextuals";
												- _Value = "False";
												- _Type = Bool;
											}
										}
									}
								}
							}
							{ IPropertySubject 
								- _Name = "ObjectModelGe";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Requirement";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "Compartments";
												- _Value = "ID, Specification";
												- _Type = MultiLine;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 176;
					- m_pModelObject = { IHandle 
						- _m2Class = "IRequirement";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "";
						- _name = "requirement_18";
						- _id = GUID 1d1fccab-90c1-42a6-80f6-26f6ba8af284;
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "requirement_18";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 4104;
					- m_transform = 0.107011 0 0 0.131868 1823 448.604 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_bFramesetModified = 1;
					- m_polygon = 4 0 3  0 1095  1084 1095  1084 3  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- frameset = "<frameset rows=27%,73%>
<frame name=IDTextCompartment>
<frame name=SpecificationTextCompartment>";
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- _iTempdisplayTextFlag = 1;
					- m_bIsBoxStyle = 1;
				}
				{ CGIAnnotation 
					- _id = GUID 4591b877-8930-40ce-a750-472230e602eb;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 2;
							- value = 
							{ IPropertySubject 
								- _Name = "General";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Graphics";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "FitBoxToItsTextuals";
												- _Value = "False";
												- _Type = Bool;
											}
										}
									}
								}
							}
							{ IPropertySubject 
								- _Name = "ObjectModelGe";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Requirement";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "Compartments";
												- _Value = "ID, Specification";
												- _Type = MultiLine;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 176;
					- m_pModelObject = { IHandle 
						- _m2Class = "IRequirement";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "";
						- _name = "requirement_19";
						- _id = GUID e506afd4-24dd-4ac0-b6bf-68b0a7d1d16f;
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "requirement_19";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 4104;
					- m_transform = 0.107011 0 0 0.131868 1965 448.604 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_bFramesetModified = 1;
					- m_polygon = 4 0 3  0 1095  1084 1095  1084 3  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- frameset = "<frameset rows=32%,68%>
<frame name=IDTextCompartment>
<frame name=SpecificationTextCompartment>";
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- _iTempdisplayTextFlag = 1;
					- m_bIsBoxStyle = 1;
				}
				{ CGIAnnotation 
					- _id = GUID 93dc042e-0ba1-4a21-b5ae-e07b6584c4e4;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 2;
							- value = 
							{ IPropertySubject 
								- _Name = "General";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Graphics";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "FitBoxToItsTextuals";
												- _Value = "False";
												- _Type = Bool;
											}
										}
									}
								}
							}
							{ IPropertySubject 
								- _Name = "ObjectModelGe";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Requirement";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "Compartments";
												- _Value = "ID, Specification";
												- _Type = MultiLine;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 176;
					- m_pModelObject = { IHandle 
						- _m2Class = "IRequirement";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "";
						- _name = "requirement_20";
						- _id = GUID e6131804-4ff8-4357-a346-2ad575fb3d72;
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "requirement_20";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 4104;
					- m_transform = 0.107011 0 0 0.131786 2159 450.695 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_bFramesetModified = 1;
					- m_polygon = 4 0 3  0 1095  1084 1095  1084 3  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- frameset = "<frameset rows=27%,73%>
<frame name=IDTextCompartment>
<frame name=SpecificationTextCompartment>";
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- _iTempdisplayTextFlag = 1;
					- m_bIsBoxStyle = 1;
				}
				{ CGIFreeShape 
					- _id = GUID b2f75de5-cee9-4735-813b-32e8b26a60eb;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 0 145 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 3 2220 305  2220 250  2223 252  ;
				}
				{ CGIFreeShape 
					- _id = GUID 53d030e5-9795-4d8b-858e-45ecae659191;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 0 145 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 1737 303  1736 271  1852 271  1852 251  ;
				}
				{ CGIFreeShape 
					- _id = GUID 52389083-4dfc-4dcd-8654-d97879b6e141;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 0 145 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 1903 251  1902 273  2020 273  2021 303  ;
				}
				{ CGIFreeShape 
					- _id = GUID 2042eba8-4d15-42b2-89a5-836d5108eec2;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 0 145 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 1877 252  1877 303  ;
				}
				{ CGIFreeShape 
					- _id = GUID 26c55227-a1d0-4aa5-a1c9-172ee355c8e2;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 0 145 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 5 1466 253  1467 274  1404 274  1404 304  1403 305  ;
				}
				{ CGIFreeShape 
					- _id = GUID 9fbd53e5-8225-4037-a409-7ecb564fba15;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 0 145 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 1505 255  1505 277  1566 276  1566 305  ;
				}
				{ CGIFreeShape 
					- _id = GUID 275a1eba-6fac-4434-817a-a4af1dcadd14;
					- m_type = 188;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 1102 100 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 356 298  370 298  370 313  356 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 8347739f-f5a7-4fb7-8165-98b170367933;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 1103 100 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 362 298  362 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 6d1f551a-e8d7-44a0-9e21-253c3e39841b;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 1102 100 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 356 306  370 306  ;
				}
				{ CGIFreeShape 
					- _id = GUID a7b1b8c1-7f1d-4121-b411-d9cc48bfe339;
					- m_type = 188;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 1141 101 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 356 298  370 298  370 313  356 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 30ca766c-52ce-4975-b72d-94cdb52d1a06;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 1142 101 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 362 298  362 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 66dffde5-5267-40a5-bda4-b440d93df186;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 1141 101 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 356 306  370 306  ;
				}
				{ CGIFreeShape 
					- _id = GUID 56341755-3e32-49d1-bc97-598fe39b2a21;
					- m_type = 188;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 1856 100 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 356 298  370 298  370 313  356 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 3f586282-bdeb-4738-b2c5-42f0981e14ee;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 1857 100 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 362 298  362 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 5b09dbbe-721a-4628-9e37-11fe6a6906fe;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 1856 100 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 356 306  370 306  ;
				}
				{ CGIFreeShape 
					- _id = GUID d9db9779-d08f-4aeb-860e-66781e4876ba;
					- m_type = 188;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 1514 95 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 356 298  370 298  370 313  356 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 7d0c43de-66ef-4c27-950f-5a4e4ac1ffef;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 1515 95 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 362 298  362 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 1b5ace35-4e24-476e-bde0-cc9ceaac248c;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 1514 95 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 356 306  370 306  ;
				}
				{ CGIFreeShape 
					- _id = GUID 71671c39-2605-4490-80bb-78f4d3a43dd8;
					- m_type = 188;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 1540 96 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 356 298  370 298  370 313  356 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 4ff0cc2b-3871-4a49-9569-f139f21e247b;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 1541 96 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 362 298  362 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 30a7ad15-3172-435a-a3e6-3ffe04891295;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 1540 96 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 356 306  370 306  ;
				}
				{ CGIAnnotation 
					- _id = GUID fc4944b5-e461-49ce-8d6d-00e78d58f57e;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 2;
							- value = 
							{ IPropertySubject 
								- _Name = "General";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Graphics";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "FitBoxToItsTextuals";
												- _Value = "False";
												- _Type = Bool;
											}
										}
									}
								}
							}
							{ IPropertySubject 
								- _Name = "ObjectModelGe";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Requirement";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "Compartments";
												- _Value = "ID, Specification";
												- _Type = MultiLine;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 176;
					- m_pModelObject = { IHandle 
						- _m2Class = "IRequirement";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "";
						- _name = "SMR";
						- _id = GUID c507ac51-6530-4c70-b157-a10747ed2d39;
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "SMR";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 4104;
					- m_transform = 0.130074 0 0 0.0999457 827 -3.44039 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_polygon = 4 0 3  0 1095  1084 1095  1084 3  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- frameset = "<frameset rows=50%,50%>
<frame name=IDTextCompartment>
<frame name=SpecificationTextCompartment>";
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- _iTempdisplayTextFlag = 1;
					- m_bIsBoxStyle = 1;
				}
				{ CGIFreeShape 
					- _id = GUID e0da7516-aaea-473d-a0db-aecadaaa8b66;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 6 850 104  850 158  193 160  193 284  193 284  195 283  ;
				}
				{ CGIFreeShape 
					- _id = GUID 3d4af2ec-8b2e-4d91-a170-ff40b6a9819f;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 591 285  591 197  875 196  875 104  ;
				}
				{ CGIFreeShape 
					- _id = GUID d8dcb46f-fbf6-4908-921f-fe4280f80595;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 1067 286  1066 198  894 198  894 106  ;
				}
				{ CGIFreeShape 
					- _id = GUID cdff65c7-b6a2-4f4b-8543-4b31c2d38182;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 0 25 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 1487 264  1488 153  915 156  914 80  ;
				}
				{ CGIFreeShape 
					- _id = GUID aaceb69b-b1b1-4c77-88e8-3d7a97574d83;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 5 40 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 1881 252  1882 118  933 120  933 66  ;
				}
				{ CGIFreeShape 
					- _id = GUID db021a36-48a0-4b10-934e-36d390cab56d;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 15 0 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 941 105  941 141  941 145  1222 141  ;
				}
				{ CGIFreeShape 
					- _id = GUID c683958c-5c12-408d-a4cc-fd966ac2b8ad;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 953 106  953 106  ;
				}
				{ CGIFreeShape 
					- _id = GUID fa7025b7-05f4-4eaf-8376-0aa279f34b16;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 0 -5 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 953 112  953 143  ;
				}
				{ CGIFreeShape 
					- _id = GUID d22e3640-5a47-4994-b107-4c6ca9078038;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 2215 290  2215 137  ;
				}
				{ CGIFreeShape 
					- _id = GUID 55e83025-6eaa-407b-81b0-602170505259;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 0 10 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 951 128  2216 126  ;
				}
				{ CGIFreeShape 
					- _id = GUID 19909ba1-fdb3-4111-852a-d250f08f9a2b;
					- m_type = 188;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 488 -192 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 356 298  370 298  370 313  356 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 11ab8359-0a2e-4a0d-b034-46c94479f24d;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 489 -192 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 362 298  362 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID d980fa10-7664-4d0b-a93d-96877480ece1;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 488 -192 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 356 306  370 306  ;
				}
				{ CGIFreeShape 
					- _id = GUID 7237239a-4ff4-438b-b8f7-f4e96c9f7cf5;
					- m_type = 188;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 513 -191 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 356 298  370 298  370 313  356 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 0d752548-afd0-42dd-ad2f-e9e33d2863bf;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 514 -191 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 362 298  362 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID c9fffde9-27c1-4f1c-88e6-6a35eb5a73cf;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 513 -191 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 356 306  370 306  ;
				}
				{ CGIFreeShape 
					- _id = GUID 7df6a9a9-21b9-46a0-82e5-bf62b08fc0e7;
					- m_type = 188;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 530 -190 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 356 298  370 298  370 313  356 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 6bb5ac55-fd44-4900-a3ae-4dd9c2a9c396;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 531 -190 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 362 298  362 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 26519774-98e1-424b-8a92-d2d47b351033;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 530 -190 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 356 306  370 306  ;
				}
				{ CGIFreeShape 
					- _id = GUID ee190be5-11ca-4d55-ba5d-6d5ff1d847f2;
					- m_type = 188;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 588 -192 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 356 298  370 298  370 313  356 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID f3858c9d-3122-4760-bd6e-d6a01059c5fa;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 589 -192 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 362 298  362 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 97ad994c-e2d2-41cf-bac2-4c0800612c1c;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 588 -192 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 356 306  370 306  ;
				}
				{ CGIFreeShape 
					- _id = GUID 6894b736-6204-41e2-abd3-d62f23dbc340;
					- m_type = 188;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 573 -192 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 356 298  370 298  370 313  356 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 008ca57d-a6dc-4de1-bd3f-8be1ee4e5c53;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 574 -192 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 362 298  362 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 7238d99f-696a-40a2-951d-a83ac8407d60;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 573 -192 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 356 306  370 306  ;
				}
				{ CGIFreeShape 
					- _id = GUID 0d8d47e5-bebe-4973-9bf4-c5d6951e354a;
					- m_type = 188;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 551 -193 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 356 298  370 298  370 313  356 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 5bb3823b-8325-4c87-a5c7-619458adb7a2;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 552 -193 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 362 298  362 313  ;
				}
				{ CGIFreeShape 
					- _id = GUID 53ae68a0-9852-4d34-aa4b-51b27339608d;
					- m_type = 183;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 551 -193 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 2 356 306  370 306  ;
				}
				
				- m_access = 'Z';
				- m_modified = 'N';
				- m_fileVersion = "";
				- m_nModifyDate = 0;
				- m_nCreateDate = 0;
				- m_creator = "";
				- m_bScaleWithZoom = 1;
				- m_arrowStyle = 'S';
				- m_pRoot = GUID fc122657-cb7b-438d-9491-713e947ae7f6;
				- m_currentLeftTop = 0 0 ;
				- m_currentRightBottom = 0 0 ;
				- m_bFreezeCompartmentContent = 0;
			}
			- _defaultSubsystem = { IHandle 
				- _m2Class = "ISubsystem";
				- _filename = "Default.sbs";
				- _subsystem = "";
				- _class = "";
				- _name = "Default";
				- _id = GUID f852634f-b8c1-401e-96fc-8e0cb48f85cb;
			}
		}
		{ IDiagram 
			- fileName = "Sensing_System";
			- _id = GUID 22103508-e15f-4a8d-831a-706521970cd7;
			- _name = "BDD";
		}
	}
	- Components = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IComponent 
			- fileName = "DefaultComponent";
			- _id = GUID 35b2f820-3d03-4691-8c3f-ee512f828a4d;
		}
	}
}

