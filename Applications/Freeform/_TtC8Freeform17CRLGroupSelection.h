//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray, NSString;

@interface _TtC8Freeform17CRLGroupSelection
{
    MISSING_TYPE *hasSelectedItemsInNonGroupContainer;	// 16 = 0x10
}

- (id)initWithBoardItems:(id)arg1;	// IMP=0x004000000084cc10
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) _Bool isCrossContainerSelection;
@property(nonatomic, readonly) NSArray *containerGroups;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000084c560
- (id)initWithContainerGroups:(id)arg1 hasSelectedItemsInNonGroupContainer:(_Bool)arg2;	// IMP=0x001000000084c390
- (id)initWithGroupItem:(id)arg1;	// IMP=0x001000000084c2f0
@property(nonatomic, readonly) _Bool hasSelectedItemsInNonGroupContainer; // @synthesize hasSelectedItemsInNonGroupContainer;

@end
