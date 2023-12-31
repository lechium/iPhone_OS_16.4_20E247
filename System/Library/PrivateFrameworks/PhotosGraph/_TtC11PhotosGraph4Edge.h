//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary, NSSet;
@protocol KGNode;

__attribute__((visibility("hidden")))
@interface _TtC11PhotosGraph4Edge : NSObject
{
    MISSING_TYPE *targetNode;	// 8 = 0x8
    MISSING_TYPE *sourceNode;	// 16 = 0x10
    MISSING_TYPE *identifier;	// 24 = 0x18
    MISSING_TYPE *labels;	// 32 = 0x20
    MISSING_TYPE *properties;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000d5a50
- (id)init;	// IMP=0x00000000000d59f0
- (id)copyWithZone:(void *)arg1;	// IMP=0x00000000000d59e0
- (void)resolveIdentifier:(unsigned long long)arg1;	// IMP=0x00000000000d59c0
- (id)oppositeNodeFromNode:(id)arg1;	// IMP=0x00000000000d5970
- (id)initWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 properties:(id)arg3 sourceNode:(id)arg4 targetNode:(id)arg5;	// IMP=0x00000000000d5730
@property(nonatomic, copy) NSDictionary *properties;
@property(nonatomic, copy) NSSet *labels;
@property(nonatomic) unsigned long long identifier; // @synthesize identifier;
@property(nonatomic, retain) id <KGNode> sourceNode; // @synthesize sourceNode;
@property(nonatomic, retain) id <KGNode> targetNode; // @synthesize targetNode;

@end

