//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVItemBuilder, NSString;

@interface KMMapper_EKEvent : NSObject
{
    KVItemBuilder *_builder;	// 8 = 0x8
}

+ (Class)externalObjectClass;	// IMP=0x0010000000004bda
- (void).cxx_destruct;	// IMP=0x0000000000004bca
- (long long)targetItemType;	// IMP=0x0000000000004bbf
- (id)itemsFromExternalObject:(id)arg1 additionalFields:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000004893
- (id)init;	// IMP=0x000000000000483d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

