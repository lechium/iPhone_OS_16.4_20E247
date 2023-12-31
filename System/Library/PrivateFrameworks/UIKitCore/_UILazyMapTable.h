//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _UILazyMapTable : NSObject
{
    CDUnknownBlockType _mappingBlock;	// 8 = 0x8
    NSMapTable *_keysToClientTables;	// 16 = 0x10
    NSMapTable *_keysToValues;	// 24 = 0x18
    NSMapTable *_valuesToKeys;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000012e2a3f
- (void)unregisterClient:(id)arg1 ofObjectForKey:(id)arg2;	// IMP=0x00000000012e2943
- (void)registerClient:(id)arg1 ofObjectForKey:(id)arg2;	// IMP=0x00000000012e2878
- (id)cachedObjectEnumerable;	// IMP=0x00000000012e286a
- (id)keyEnumerable;	// IMP=0x00000000012e285c
- (id)cachedObjects;	// IMP=0x00000000012e284e
- (id)keys;	// IMP=0x00000000012e2840
- (_Bool)hasCachedObjectForKey:(id)arg1;	// IMP=0x00000000012e2809
- (id)objectForKey:(id)arg1;	// IMP=0x00000000012e271f
- (unsigned long long)count;	// IMP=0x00000000012e2709
- (id)description;	// IMP=0x00000000012e268c
- (id)initWithMappingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000012e2587

@end

