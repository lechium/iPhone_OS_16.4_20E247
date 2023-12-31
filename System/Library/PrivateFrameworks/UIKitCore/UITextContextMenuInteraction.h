//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextInteraction.h"

@class UIContextMenuInteraction;
@protocol UIContextMenuInteractionDelegate;

__attribute__((visibility("hidden")))
@interface UITextContextMenuInteraction : UITextInteraction
{
    id <UIContextMenuInteractionDelegate> _externalContextMenuDelegate;	// 8 = 0x8
    UIContextMenuInteraction *_contextMenuInteraction;	// 16 = 0x10
}

+ (id)createMenuInteraction;	// IMP=0x0040000001191ba7
+ (void)setShouldUseContextMenuInteraction:(_Bool)arg1;	// IMP=0x0040000001191b73
+ (_Bool)shouldUseContextMenuInteraction;	// IMP=0x0040000001191b48
- (void).cxx_destruct;	// IMP=0x00000000011922e5
@property(retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction; // @synthesize contextMenuInteraction=_contextMenuInteraction;
@property(nonatomic) __weak id <UIContextMenuInteractionDelegate> externalContextMenuDelegate; // @synthesize externalContextMenuDelegate=_externalContextMenuDelegate;
@property(readonly, nonatomic) _Bool dismissedByActionSelection;
@property(readonly, nonatomic) _Bool isDisplayingMenu;
@property(readonly, nonatomic) _Bool dismissedRecently;
- (void)updateVisibleMenuPosition;	// IMP=0x0000000001192275
- (void)dismissMenuForInputUI;	// IMP=0x000000000119226f
- (void)presentMenuForInputUI:(id)arg1;	// IMP=0x0000000001192269
- (void)dismissSelectionCommandsWithReason:(long long)arg1;	// IMP=0x0000000001192263
- (void)presentSelectionCommandsWithConfiguration:(id)arg1;	// IMP=0x000000000119225d
- (_Bool)_textInputIsSecure;	// IMP=0x00000000011921ce
- (void)prepareForContextMenuAtLocationInView:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000001191cdf
- (struct CGPoint)locationInTextInputViewForLocationInView:(struct CGPoint)arg1;	// IMP=0x0000000001191bdd

@end

