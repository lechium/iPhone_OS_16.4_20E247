//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MUActionRowItemViewModel.h"

@class NSArray, UIMenuElement;
@protocol MUHeaderButtonMenuActionProvider;

__attribute__((visibility("hidden")))
@interface MUPlaceMoreActionsViewModel : MUActionRowItemViewModel
{
    id <MUHeaderButtonMenuActionProvider> _menuProvider;	// 8 = 0x8
    NSArray *_externalActionMenuHelpers;	// 16 = 0x10
    UIMenuElement *_menuElement;	// 24 = 0x18
    NSArray *_promotedSystemActionTypes;	// 32 = 0x20
    NSArray *_excludedSystemActionTypes;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000a4577
- (id)_allExternalActionMenuRevealButtons;	// IMP=0x00000000000a4233
@property(readonly, nonatomic) NSArray *externalActionMenuRevealButtons;
- (id)analyticsButtonValues;	// IMP=0x00000000000a400c
- (id)accessibilityIdentifier;	// IMP=0x00000000000a3fe9
- (_Bool)isEnabled;	// IMP=0x00000000000a3fe1
- (id)buildMenuWithPresentationOptions:(id)arg1;	// IMP=0x00000000000a3a9d
- (id)initWithGroupedExternalActions:(id)arg1 promotedSystemActionTypes:(id)arg2 excludedSystemActionTypes:(id)arg3 menuActionProvider:(id)arg4 amsResultProvider:(id)arg5 iconCache:(id)arg6 externalActionHandler:(id)arg7 analyticsHandler:(id)arg8;	// IMP=0x00000000000a3651
- (id)titleText;	// IMP=0x00000000000a3640
- (id)symbolName;	// IMP=0x00000000000a3633

@end

