//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIVisualEffectSubview.h"

__attribute__((visibility("hidden")))
@interface _UIVisualEffectContentView : _UIVisualEffectSubview
{
    _Bool _disableGroupFiltering;	// 152 = 0x98
    _Bool _currentlyDisplayingRequestedEffects;	// 153 = 0x99
}

- (id)description;	// IMP=0x0000000000103105
- (void)willRemoveSubview:(id)arg1;	// IMP=0x00000000001030b1
- (void)didAddSubview:(id)arg1;	// IMP=0x0000000000102fdb
- (void)applyIdentityFilterEffects;	// IMP=0x0000000000102e5a
- (void)applyRequestedFilterEffects;	// IMP=0x0000000000102cd9
- (void)setFilters:(id)arg1;	// IMP=0x0000000000102a99
- (void)setDisableGroupFiltering:(_Bool)arg1;	// IMP=0x000000000010264d
- (_Bool)disableGroupFiltering;	// IMP=0x000000000010263d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001025c1

@end
