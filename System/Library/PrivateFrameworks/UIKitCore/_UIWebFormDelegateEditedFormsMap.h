//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UIWebFormDelegateEditedFormsMap : NSObject
{
    NSMutableDictionary *_map;	// 8 = 0x8
    NSMutableArray *_lifetimeHelper;	// 16 = 0x10
}

- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000079d104
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000079d0b3
- (void)removeAllObjects;	// IMP=0x000000000079d078
- (id)allValues;	// IMP=0x000000000079d062
- (id)objectForKey:(id)arg1;	// IMP=0x000000000079d030
- (id)_keyForWebFrame:(id)arg1;	// IMP=0x000000000079d00b
- (void)dealloc;	// IMP=0x000000000079cfc1
- (id)init;	// IMP=0x000000000079cf39

@end
