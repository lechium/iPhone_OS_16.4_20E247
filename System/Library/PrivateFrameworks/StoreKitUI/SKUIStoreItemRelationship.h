//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, SKUIStoreIdentifier;

__attribute__((visibility("hidden")))
@interface SKUIStoreItemRelationship : NSObject
{
    SKUIStoreIdentifier *_singleParent;	// 8 = 0x8
    NSSet *_chidItems;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000157ec
@property(readonly, copy, nonatomic) NSSet *chidItems; // @synthesize chidItems=_chidItems;
@property(readonly, copy, nonatomic) SKUIStoreIdentifier *singleParent; // @synthesize singleParent=_singleParent;
- (id)initWithParent:(id)arg1 andChildren:(id)arg2;	// IMP=0x000000000001558f

@end

