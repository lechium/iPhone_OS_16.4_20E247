//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString, SKUIClientContext, SKUIPinnedFooterView, UITableView;
@protocol SKUIRedeemIdManagerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIRedeemIdManager : NSObject
{
    id <SKUIRedeemIdManagerDelegate> _delegate;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    NSIndexPath *_activeIndexPath;	// 24 = 0x18
    SKUIClientContext *_clientContext;	// 32 = 0x20
    SKUIPinnedFooterView *_pinnedFooterView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000182429
@property(retain, nonatomic) SKUIPinnedFooterView *pinnedFooterView; // @synthesize pinnedFooterView=_pinnedFooterView;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(retain, nonatomic) NSIndexPath *activeIndexPath; // @synthesize activeIndexPath=_activeIndexPath;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <SKUIRedeemIdManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)_autoCapitalizationTypeForIndexPath:(id)arg1;	// IMP=0x0000000000182386
- (long long)_returnKeyTypeForIndexPath:(id)arg1;	// IMP=0x000000000018235b
- (long long)_keyboardTypeForIndexPath:(id)arg1;	// IMP=0x0000000000182330
- (long long)_numberOfRowsInSection:(long long)arg1;	// IMP=0x0000000000182316
- (double)_tableViewNonFooterContentHeight;	// IMP=0x0000000000182236
- (double)_heightForDisclosureFooter;	// IMP=0x000000000018209b
- (id)_nextIndexPath:(id)arg1;	// IMP=0x0000000000181efd
- (id)_disclosureAttributedString;	// IMP=0x0000000000181c1a
- (id)_placeholderTextForIndexPath:(id)arg1;	// IMP=0x0000000000181a66
- (id)_pcLinkString;	// IMP=0x00000000001819d4
- (id)_regulationsLinkString;	// IMP=0x0000000000181942
- (void)dismissActiveCell;	// IMP=0x0000000000181871
- (void)setFooterHidden:(_Bool)arg1;	// IMP=0x0000000000181825
- (void)handleNextPressed;	// IMP=0x0000000000181813
- (void)redeemIdCell:(id)arg1 didChangeToText:(id)arg2;	// IMP=0x0000000000181737
- (void)redeemIdCell:(id)arg1 didReturnWithText:(id)arg2;	// IMP=0x000000000018153e
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001813c6
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x000000000018132a
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000001811a5
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000181190
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000181185
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x0000000000181156
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x00000000001810f3
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001810e5
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000180f4d
- (id)initWithClientContext:(id)arg1;	// IMP=0x0000000000180d3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

