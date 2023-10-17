//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarBadgeView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarCellularExpandedItem
{
    _UIStatusBarBadgeView *_badgeView;	// 72 = 0x48
}

+ (id)badgeDisplayIdentifier;	// IMP=0x0040000000f6e19a
+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 typeClass:(Class)arg3 allowDualNetwork:(_Bool)arg4;	// IMP=0x0040000000f7b0be
- (void).cxx_destruct;	// IMP=0x0000000000f6e4d8
@property(retain, nonatomic) _UIStatusBarBadgeView *badgeView; // @synthesize badgeView=_badgeView;
- (id)viewForIdentifier:(id)arg1;	// IMP=0x0000000000f6e416
- (void)_create_badgeView;	// IMP=0x0000000000f6e3bc
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x0000000000f6e1b3

@end
