//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIStorePageSection.h"

@class SKUISpacePageComponent;

__attribute__((visibility("hidden")))
@interface SKUISpacePageSection : SKUIStorePageSection
{
}

- (long long)numberOfCells;	// IMP=0x00000000003204eb
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x0000000000320410
- (id)cellForIndexPath:(id)arg1;	// IMP=0x0000000000320368
- (void)willAppearInContext:(id)arg1;	// IMP=0x0000000000320312
- (id)initWithPageComponent:(id)arg1;	// IMP=0x00000000003202e3

// Remaining properties
@property(readonly, nonatomic) SKUISpacePageComponent *pageComponent; // @dynamic pageComponent;

@end

