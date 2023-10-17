//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AKCalloutBar, NSString, UIAlertController, UIButton, UIView;

@interface AKHighlightColorEditorController
{
    AKCalloutBar *mCalloutBar;	// 56 = 0x38
    UIView *mColorControls;	// 64 = 0x40
    UIButton *mAddNoteButton;	// 72 = 0x48
    UIButton *mDeleteButton;	// 80 = 0x50
    UIButton *mRightArrowButton;	// 88 = 0x58
    UIButton *mShareButton;	// 96 = 0x60
    int _pageTheme;	// 104 = 0x68
    UIAlertController *_alertController;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000000947eb
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(nonatomic) int pageTheme; // @synthesize pageTheme=_pageTheme;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=mShareButton;
@property(retain, nonatomic) UIButton *rightArrowButton; // @synthesize rightArrowButton=mRightArrowButton;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=mDeleteButton;
@property(retain, nonatomic) UIButton *addNoteButton; // @synthesize addNoteButton=mAddNoteButton;
@property(retain, nonatomic) UIView *colorControls; // @synthesize colorControls=mColorControls;
@property(retain, nonatomic) AKCalloutBar *calloutBar; // @synthesize calloutBar=mCalloutBar;
- (id)p_noteGlyphForTag:(long long)arg1 pageTheme:(int)arg2;	// IMP=0x00000000000940c5
- (id)p_monochromaticImageFromImage:(id)arg1 withColor:(id)arg2;	// IMP=0x0000000000093f76
- (id)p_paletteImageForTag:(long long)arg1 pageTheme:(int)arg2;	// IMP=0x0000000000093ac5
- (id)p_buildPaletteImageForFrontTag:(long long)arg1 middleTag:(long long)arg2 backTag:(long long)arg3 pageTheme:(int)arg4;	// IMP=0x00000000000939b4
- (id)p_paletteImageWithFrontColor:(id)arg1 middleColor:(id)arg2 backColor:(id)arg3 frontForegroundImage:(id)arg4;	// IMP=0x0000000000093779
- (void)p_drawCrescentWithCircleRect:(struct CGRect)arg1 color:(id)arg2 leftShift:(double)arg3 addRadius:(double)arg4;	// IMP=0x0000000000093461
- (id)p_colorControlImageForTag:(long long)arg1 pageTheme:(int)arg2;	// IMP=0x0000000000092f17
- (id)p_colorControlUnderlineImageForPageTheme:(int)arg1;	// IMP=0x0000000000092e86
- (id)p_underlineForegroundImageForPageTheme:(int)arg1;	// IMP=0x0000000000092e58
- (id)p_colorControlImageForColor:(id)arg1;	// IMP=0x0000000000092e44
- (id)p_colorControlImageForColor:(id)arg1 withForegroundImage:(id)arg2;	// IMP=0x0000000000092d70
- (void)p_drawColorControlCircleWithFrame:(struct CGRect)arg1 color:(id)arg2;	// IMP=0x0000000000092c70
- (id)p_colorForTag:(long long)arg1 pageTheme:(int)arg2;	// IMP=0x000000000009273f
- (void)handleRightArrowButton:(id)arg1;	// IMP=0x00000000000926c1
- (void)handleDeleteButtonTap:(id)arg1;	// IMP=0x0000000000092666
- (void)handleShareButton:(id)arg1;	// IMP=0x00000000000925a3
- (void)handleAddNoteButton:(id)arg1;	// IMP=0x0000000000092525
- (void)showColorControlsMenu:(id)arg1;	// IMP=0x000000000009247e
- (void)useColorOf:(id)arg1;	// IMP=0x000000000009240e
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000092366
- (void)p_postDeleteConfirmation;	// IMP=0x0000000000092071
- (void)p_removeAnnotation:(id)arg1;	// IMP=0x0000000000091ffc
- (void)p_setStyle:(long long)arg1 forAnnotation:(id)arg2;	// IMP=0x0000000000091f14
- (id)p_themeForStyle:(long long)arg1 pageTheme:(int)arg2;	// IMP=0x0000000000091ed0
- (id)localizedAccessibilityStringForStyle:(long long)arg1;	// IMP=0x0000000000091d06
- (void)setPosition:(int)arg1;	// IMP=0x0000000000091ce7
- (void)presentFromRect:(struct CGRect)arg1 view:(id)arg2;	// IMP=0x0000000000091bb1
- (void)didShow;	// IMP=0x0000000000091b45
- (void)willShow;	// IMP=0x0000000000091ad6
- (_Bool)canPresentInPosition:(int)arg1;	// IMP=0x0000000000091acb
- (void)p_updateAppearance;	// IMP=0x0000000000091949
- (long long)p_buttonTagForTheme:(id)arg1;	// IMP=0x0000000000091859
- (_Bool)p_shouldShowCompactMenu;	// IMP=0x00000000000912a0
- (_Bool)p_shouldShowShareButton;	// IMP=0x00000000000911f4
- (void)viewDidLoad;	// IMP=0x0000000000090648
- (void)loadView;	// IMP=0x00000000000905cf
- (void)releaseOutlets;	// IMP=0x0000000000090448

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
