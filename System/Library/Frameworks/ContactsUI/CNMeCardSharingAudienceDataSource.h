//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNMeCardSharingRowItem, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingAudienceDataSource : NSObject
{
    _Bool _shouldShowEveryone;	// 8 = 0x8
    unsigned long long _selectedSharingAudience;	// 16 = 0x10
    CNMeCardSharingRowItem *_selectedItem;	// 24 = 0x18
    NSArray *_valuesArray;	// 32 = 0x20
    NSArray *_items;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002869da
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSArray *valuesArray; // @synthesize valuesArray=_valuesArray;
@property(nonatomic) _Bool shouldShowEveryone; // @synthesize shouldShowEveryone=_shouldShowEveryone;
@property(retain, nonatomic) CNMeCardSharingRowItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(nonatomic) unsigned long long selectedSharingAudience; // @synthesize selectedSharingAudience=_selectedSharingAudience;
- (void)didSelectItemAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000286881
- (id)itemForIndex:(unsigned long long)arg1;	// IMP=0x0000000000286832
- (unsigned long long)numberOfItems;	// IMP=0x000000000028681c
- (id)sectionFooterLabel;	// IMP=0x000000000028678c
- (id)sectionHeaderLabel;	// IMP=0x0000000000286730
- (void)reloadItems;	// IMP=0x00000000002864c4
- (unsigned long long)sharingAudienceForIndex:(unsigned long long)arg1;	// IMP=0x000000000028647c
- (unsigned long long)indexForSharingAudience:(unsigned long long)arg1;	// IMP=0x0000000000286421
@property(readonly, nonatomic) unsigned long long selectedIndex;
- (_Bool)supportsSelection;	// IMP=0x0000000000286403
- (id)initWithSelectedSharingAudience:(unsigned long long)arg1;	// IMP=0x000000000028635a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

