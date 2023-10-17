//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LibraryConfiguration, LibrarySectionController, NSArray, NSString, UISwipeActionsConfiguration, UIViewController;

__attribute__((visibility("hidden")))
@interface LibraryItemController : NSObject
{
    _Bool _isSelected;	// 8 = 0x8
    _Bool _isHidden;	// 9 = 0x9
    LibrarySectionController *_sectionController;	// 16 = 0x10
    LibraryConfiguration *_configuration;	// 24 = 0x18
    UISwipeActionsConfiguration *_swipeActionsConfiguration;	// 32 = 0x20
    NSString *_accessibilityIdentifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000013df79
@property(readonly, copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(retain, nonatomic) UISwipeActionsConfiguration *swipeActionsConfiguration; // @synthesize swipeActionsConfiguration=_swipeActionsConfiguration;
@property(readonly, nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
@property(readonly, nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(readonly, nonatomic) LibraryConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly) __weak LibrarySectionController *sectionController; // @synthesize sectionController=_sectionController;
- (void)performDropWithProposal:(id)arg1 session:(id)arg2;	// IMP=0x000000000013df1c
- (long long)dropIntentForSession:(id)arg1;	// IMP=0x000000000013df14
- (unsigned long long)dropOperationForSession:(id)arg1;	// IMP=0x000000000013df0c
@property(readonly, nonatomic) _Bool isSpringLoaded;
@property(readonly, nonatomic) NSArray *dragItems;
- (void)willToggleExpansionState;	// IMP=0x000000000013def1
@property(readonly, nonatomic, getter=isExpanded) _Bool expanded;
@property(readonly, nonatomic) NSArray *subitems;
@property(readonly, nonatomic) _Bool hasSubitems;
- (void)updateToolbarIfNeeded;	// IMP=0x000000000013dece
@property(readonly, copy, nonatomic) NSArray *accessories;
@property(readonly, nonatomic) _Bool selectionFollowsFocus;
@property(readonly, nonatomic) _Bool shouldPersistSelection;
@property(readonly, nonatomic) UIViewController *viewController;
- (void)updateListContentConfiguration:(id)arg1;	// IMP=0x000000000013dea3
- (void)didDeselectItem;	// IMP=0x000000000013de9d
- (void)didSelectItem;	// IMP=0x000000000013de97
- (void)contentDidChange;	// IMP=0x000000000013de66
- (id)initWithConfiguration:(id)arg1 sectionController:(id)arg2;	// IMP=0x000000000013ddbe

@end
