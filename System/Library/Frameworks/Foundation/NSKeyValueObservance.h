//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSKeyValueProperty;

__attribute__((visibility("hidden")))
@interface NSKeyValueObservance : NSObject
{
    NSObject *_observer;	// 8 = 0x8
    NSKeyValueProperty *_property;	// 16 = 0x10
    void *_context;	// 24 = 0x18
    NSObject *_originalObservable;	// 32 = 0x20
    unsigned int _options:6;	// 40 = 0x28
    unsigned int _cachedIsShareable:1;	// 40 = 0x28
    unsigned int _isInternalObservationHelper:1;	// 40 = 0x28
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000462533
- (id)description;	// IMP=0x0000000000462488
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000046244b
- (unsigned long long)hash;	// IMP=0x0000000000462380
- (id)_initWithObserver:(id)arg1 property:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4 originalObservable:(id)arg5;	// IMP=0x00000000004622a3

@end

