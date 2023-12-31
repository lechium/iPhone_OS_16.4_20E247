//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVItemMapper, NSString;

@interface KMPodcastsBridge : NSObject
{
    KVItemMapper *_itemMapper;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000099c0
- (_Bool)enumerateItemsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009945
- (id)originAppId;	// IMP=0x0000000000009931
- (long long)itemType;	// IMP=0x000000000000991b
- (id)init;	// IMP=0x00000000000098ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

