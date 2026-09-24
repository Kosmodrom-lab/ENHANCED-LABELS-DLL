' ============================================================================
' EnhancedLabels.inc - Import Header for IWBasic 2.5
' ============================================================================

$IFNDEF __ENHANCEDLABELS_INC__
$DEFINE __ENHANCEDLABELS_INC__

' --- Theme Presets ---
CONST EL_THEME_DARK_SLATE    = 1
CONST EL_THEME_OFFICE_BLUE   = 2
CONST EL_THEME_GLASS_MINIMAL = 3
CONST EL_THEME_CRIMSON_DARK  = 4

' --- Border Side Enumeration ---
CONST EL_BORDER_NONE   = 0
CONST EL_BORDER_LEFT   = 1
CONST EL_BORDER_TOP    = 2
CONST EL_BORDER_RIGHT  = 3
CONST EL_BORDER_BOTTOM = 4
CONST EL_BORDER_ALL    = 5

' --- Highlight Style Enumeration ---
CONST EL_HIGHLIGHT_BORDER_ONLY        = 0
CONST EL_HIGHLIGHT_BG_ONLY            = 1
CONST EL_HIGHLIGHT_TEXT_ONLY          = 2
CONST EL_HIGHLIGHT_BORDER_BG          = 3
CONST EL_HIGHLIGHT_BORDER_TEXT        = 4
CONST EL_HIGHLIGHT_BG_TEXT            = 5
CONST EL_HIGHLIGHT_LEFT_BORDER_ONLY   = 6
CONST EL_HIGHLIGHT_RIGHT_BORDER_ONLY  = 7
CONST EL_HIGHLIGHT_BOTTOM_BORDER_ONLY = 8

' --- DLL Imports ---
DECLARE IMPORT, EL_RegisterControl(), INT
DECLARE IMPORT, EL_UnregisterControl(), INT
DECLARE IMPORT, EL_Create(hwndParent:UINT, controlID:INT), POINTER
DECLARE IMPORT, EL_Destroy(ptr:POINTER), INT
DECLARE IMPORT, EL_SetHeaderFont(ptr:POINTER, fontName:WSTRING, fontSize:INT, fontWeight:INT, isItalic:INT), INT
DECLARE IMPORT, EL_SetLinkFont(ptr:POINTER, fontName:WSTRING, fontSize:INT, fontWeight:INT, isItalic:INT), INT
DECLARE IMPORT, EL_SetHeaderBackgroundGradient(ptr:POINTER, col1:UINT, col2:UINT, isVertical:INT), INT
DECLARE IMPORT, EL_SetHeaderHeight(ptr:POINTER, height:INT), INT
DECLARE IMPORT, EL_SetHeaderStandardLeftTitle(ptr:POINTER, title:WSTRING, textColor:UINT, alignment:INT), INT
DECLARE IMPORT, EL_SetHeaderDetailsTitle(ptr:POINTER, title:WSTRING, textColor:UINT, alignment:INT), INT
DECLARE IMPORT, EL_SetHeaderDetailsDescription(ptr:POINTER, desc:WSTRING, textColor:UINT, alignment:INT), INT
DECLARE IMPORT, EL_SetHeaderDetailsDescriptionFont(ptr:POINTER, fontName:WSTRING, fontSize:INT, fontWeight:INT, isItalic:INT), INT
DECLARE IMPORT, EL_SetHeaderOnClickCommand(ptr:POINTER, cmdID:INT), INT
DECLARE IMPORT, EL_SetHeaderHighlightStyle(ptr:POINTER, enableHighlight:INT, highlightStyle:INT, bWidth:UINT, bColor:UINT, tColor:UINT, alpha:UINT, offsetX:UINT, offsetY:UINT), INT
DECLARE IMPORT, EL_SetHeaderBorder(ptr:POINTER, borderSide:INT, borderColor:UINT, borderWidth:UINT, indentX:UINT, indentY:UINT), INT
DECLARE IMPORT, EL_SetBodySolidColor(ptr:POINTER, rgbColor:UINT), INT
DECLARE IMPORT, EL_SetBody3StopGradient(ptr:POINTER, col1:UINT, col2:UINT, col3:UINT, isVertical:INT), INT
DECLARE IMPORT, EL_SetBodyBorder(ptr:POINTER, borderSide:INT, borderColor:UINT, borderWidth:UINT, indentX:UINT, indentY:UINT), INT
DECLARE IMPORT, EL_Resize(ptr:POINTER, x:INT, y:INT, width:INT, height:INT), INT
DECLARE IMPORT, EL_ToggleCollapse(ptr:POINTER), INT
DECLARE IMPORT, EL_SetHeaderIcon(ptr:POINTER, hIcon:UINT, width:INT, height:INT), INT
DECLARE IMPORT, EL_IsCollapsed(ptr:POINTER), INT
DECLARE IMPORT, EL_GetHeaderHeight(ptr:POINTER), INT
DECLARE IMPORT, EL_GetControlHeight(ptr:POINTER), INT
DECLARE IMPORT, EL_GetHeaderTitle(ptr:POINTER, outTitle:POINTER, maxChars:INT), INT
DECLARE IMPORT, EL_ApplyTheme(ptr:POINTER, themeID:INT), INT
DECLARE IMPORT, EL_AddLink(ptr:POINTER, cmdID:UINT, pText:POINTER, pTips:POINTER, textColor:UINT, highlight:UINT, bgHighlight:UINT, alpha:UINT, bold:INT, underline:INT, indent:UINT), INT
DECLARE IMPORT, EL_AddContentLink(ptr:POINTER, cmdID:UINT, hBmp:UINT, pText:POINTER, pTips:POINTER, transparentCol:UINT, textColor:UINT, highlight:UINT, bgHighlight:UINT, alpha:UINT, bold:INT, underline:INT, indent:UINT), INT
DECLARE IMPORT, EL_AddLinkBarItem(ptr:POINTER, cmdID:UINT, pText:POINTER, pTips:POINTER, textColor:UINT, highlight:UINT, bgHighlight:UINT, alpha:UINT, bold:INT, underline:INT, indent:UINT), INT
DECLARE IMPORT, EL_ClearAllLinks(ptr:POINTER), INT
DECLARE IMPORT, EL_RemoveLink(ptr:POINTER, cmdID:UINT), INT
DECLARE IMPORT, EL_EnableClearType(ptr:POINTER, enable:INT), INT
DECLARE IMPORT, EL_EnableHighQualitySmoothingMode(ptr:POINTER, enable:INT), INT
DECLARE IMPORT, EL_SetLinkBarHeight(ptr:POINTER, height:INT), INT
DECLARE IMPORT, EL_SetLinkBarBackgroundGradient(ptr:POINTER, col1:UINT, col2:UINT, isVertical:INT), INT
DECLARE IMPORT, EL_SetLinkBarVerticalSeparator(ptr:POINTER, showSeparator:INT, separatorColor:UINT, separatorWidth:UINT, separatorIndent:UINT), INT
DECLARE IMPORT, EL_SetHeaderBackgroundImage(ptr:POINTER, hBitmap:UINT, width:INT, height:INT), INT
DECLARE IMPORT, EL_SetBodyBackgroundImage(ptr:POINTER, hBitmap:UINT, width:INT, height:INT), INT
DECLARE IMPORT, EL_EnableLinkGlow(ptr:POINTER, enable:INT, glowColor:UINT), INT
DECLARE IMPORT, EL_SetLinkColumns(ptr:POINTER, columns:INT, colWidth:INT, colGapX:INT, rowGapY:INT), INT
DECLARE IMPORT, EL_SetScrollOffset(ptr:POINTER, offset:INT), INT
DECLARE IMPORT, EL_GetScrollOffset(ptr:POINTER), INT
DECLARE IMPORT, EL_GetLinkCount(ptr:POINTER), INT
DECLARE IMPORT, EL_GetLinkBarCount(ptr:POINTER), INT
DECLARE IMPORT, EL_GetHoveredLinkIndex(ptr:POINTER), INT
DECLARE IMPORT, EL_GetMaxScrollOffset(ptr:POINTER), INT
DECLARE IMPORT, EL_SetHeaderIconPNG(ptr:POINTER, pFilePath:POINTER, width:INT, height:INT), INT
DECLARE IMPORT, EL_AddPNGLink(ptr:POINTER, cmdID:UINT, pFilePath:POINTER, pText:POINTER, pTips:POINTER, textColor:UINT, highlight:UINT, bgHighlight:UINT, imgWidth:INT, imgHeight:INT, indent:UINT), INT
DECLARE IMPORT, EL_AddCategoryHeader(ptr:POINTER, categoryID:INT, pText:POINTER, textColor:UINT, headerBgColor:UINT), INT
DECLARE IMPORT, EL_ToggleCategory(ptr:POINTER, categoryID:INT), INT

$ENDIF