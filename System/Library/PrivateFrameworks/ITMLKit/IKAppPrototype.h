//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKAppPrototypeIdentifier, IKDOMPrototype, NSDictionary, NSIndexSet, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface IKAppPrototype : NSObject
{
    NSMutableIndexSet *_usageIndexes;	// 8 = 0x8
    IKAppPrototypeIdentifier *_identifier;	// 16 = 0x10
    IKDOMPrototype *_prototype;	// 24 = 0x18
    NSDictionary *_groupingValues;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000e13e1
@property(readonly, copy, nonatomic) NSDictionary *groupingValues; // @synthesize groupingValues=_groupingValues;
@property(readonly, nonatomic) __weak IKDOMPrototype *prototype; // @synthesize prototype=_prototype;
@property(readonly, nonatomic) IKAppPrototypeIdentifier *identifier; // @synthesize identifier=_identifier;
- (id)_sparseObjectFromObject:(id)arg1 usingPropertyPaths:(id)arg2;	// IMP=0x00000000000e0a91
- (void)updateUsageIndexesWithChangeSet:(id)arg1;	// IMP=0x00000000000e0953
- (void)removeUsageForIndex:(long long)arg1;	// IMP=0x00000000000e093d
- (void)addUsageForIndex:(long long)arg1;	// IMP=0x00000000000e08e5
@property(readonly, copy, nonatomic) NSIndexSet *usageIndexes;
- (id)initWithPrototype:(id)arg1 dataItem:(id)arg2;	// IMP=0x00000000000e06ee
- (void)dsepm_setViewElement:(id)arg1;	// IMP=0x00000000000026a3
- (id)dsepm_viewElement;	// IMP=0x0000000000002692

@end

