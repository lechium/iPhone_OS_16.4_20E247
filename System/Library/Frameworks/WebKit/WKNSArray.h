//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKNSArray : NSArray
{
    struct ObjectStorage<API::Array> _array;	// 8 = 0x8
}

@property(readonly) struct Object *_apiObject;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c5453
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001c5413
- (unsigned long long)count;	// IMP=0x00000000001c5402
- (void)dealloc;	// IMP=0x00000000001c53a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
