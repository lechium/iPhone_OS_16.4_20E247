//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSSet, NSString;

@interface _TtC8Freeform26CRLCommandDeleteBoardItems
{
    MISSING_TYPE *boardItems;	// 16 = 0x10
    MISSING_TYPE *canDeleteNewlyCreatedItems;	// 24 = 0x18
    MISSING_TYPE *actionString;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0040000000813ce0
- (id)init;	// IMP=0x0010000000813c50
@property(nonatomic, readonly) NSString *actionString;
- (id)initWithBoardItemToDelete:(id)arg1;	// IMP=0x0010000000812e90
- (id)initWithBoardItemsToDelete:(id)arg1 canDeleteNewlyCreatedItems:(_Bool)arg2;	// IMP=0x0010000000812e30
- (id)initWithBoardItemsToDelete:(id)arg1;	// IMP=0x0010000000812d70
@property(nonatomic, readonly) _Bool canDeleteNewlyCreatedItems; // @synthesize canDeleteNewlyCreatedItems;
@property(nonatomic, readonly) NSSet *boardItems;

@end

