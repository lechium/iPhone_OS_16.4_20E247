//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC8Freeform28CRLiOSMiniFormatterPresenter
{
    MISSING_TYPE *canvasViewController;	// 48 = 0x30
    MISSING_TYPE *miniFormatterVC;	// 56 = 0x38
    MISSING_TYPE *ellipsisBuilder;	// 64 = 0x40
    MISSING_TYPE *ellipsisBaseButton;	// 72 = 0x48
    MISSING_TYPE *inspectorElementsBuilders;	// 80 = 0x50
    MISSING_TYPE *inspectorElementsBaseButtons;	// 88 = 0x58
    MISSING_TYPE *generalElementsBuilders;	// 96 = 0x60
    MISSING_TYPE *generalElementsBaseButtons;	// 104 = 0x68
    MISSING_TYPE *canvasElementsBuilders;	// 112 = 0x70
    MISSING_TYPE *presentedNavigationController;	// 120 = 0x78
    MISSING_TYPE *presentedAuxiliaryViewController;	// 128 = 0x80
    MISSING_TYPE *auxiliaryPresentedBuilder;	// 136 = 0x88
    MISSING_TYPE *presentedWrappedNavigationController;	// 144 = 0x90
    MISSING_TYPE *selectionPath;	// 152 = 0x98
    MISSING_TYPE *repsForCurrentSelectionPath;	// 160 = 0xa0
    MISSING_TYPE *flattenedBoardItemsForCurrentSelectionPath;	// 168 = 0xa8
    MISSING_TYPE *secondLayerPresentedBuilder;	// 176 = 0xb0
    MISSING_TYPE *shouldRepositionSecondLayerPopover;	// 184 = 0xb8
    MISSING_TYPE *shouldUpdateSecondLayerPermittedArrowDirections;	// 185 = 0xb9
    MISSING_TYPE *shouldUpdateSecondLayerPopoverPassthroughViews;	// 186 = 0xba
    MISSING_TYPE *isUpdatingMiniFormatter;	// 187 = 0xbb
    MISSING_TYPE *isInProcessOfPresentingSecondLayerPopover;	// 188 = 0xbc
}

- (void).cxx_destruct;	// IMP=0x004000000069b9d0
@property(nonatomic, readonly) _Bool isPinnedToTopOfRep;
@property(nonatomic, readonly) _Bool isPresentingSecondLayerPopover;
@property(nonatomic, readonly) _Bool isPresentingMiniFormatter;
- (void)updateMiniFormatter;	// IMP=0x0010000000696390
- (void)dismissPresentedMenus;	// IMP=0x0010000000695ad0
- (void)dismissMiniFormatterForRep:(id)arg1;	// IMP=0x0010000000695160
- (void)dismissMiniFormatter;	// IMP=0x0010000000695120
- (void)presentMiniFormatterForSelectionPath:(id)arg1;	// IMP=0x0010000000694470
- (void)handleSingleTapOnRep:(id)arg1 withSelectionPath:(id)arg2;	// IMP=0x0010000000694400
- (id)crlaxMiniFormatterViewController;	// IMP=0x0010000000694030
@property(nonatomic, readonly) _TtC8Freeform28CRLiOSMiniFormatterPresenter *asiOSPresenter;
- (id)initWithEditorController:(id)arg1 canvasLayerHosting:(id)arg2;	// IMP=0x0010000000693fc0

@end
