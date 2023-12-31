//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSKeyValueNonmutatingArrayMethodSet, NSObject, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueArray : NSArray
{
    NSObject *_container;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSKeyValueNonmutatingArrayMethodSet *_methods;	// 24 = 0x18
}

+ (id)_proxyShare;	// IMP=0x001000000045632d
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x000000000045666c
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004565b8
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000456526
- (unsigned long long)count;	// IMP=0x00000000004564f8
- (void)dealloc;	// IMP=0x000000000045649b
- (void)_proxyNonGCFinalize;	// IMP=0x000000000045643c
- (CDStruct_a70f6672)_proxyLocator;	// IMP=0x0000000000456420
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x0000000000456354

@end

