//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableDictionary.h"

@class NSSharedKeySet;

__attribute__((visibility("hidden")))
@interface NSSharedKeyDictionary : NSMutableDictionary
{
    NSSharedKeySet *_keyMap;	// 8 = 0x8
    unsigned long long _count;	// 16 = 0x10
    id *_values;	// 24 = 0x18
    CDUnknownFunctionPointerType _ifkIMP;	// 32 = 0x20
    NSMutableDictionary *_sideDic;	// 40 = 0x28
    unsigned long long _mutations;	// 48 = 0x30
    _Bool _doKVO;	// 56 = 0x38
}

+ (_Bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;	// IMP=0x006000000017d2ee
+ (_Bool)supportsSecureCoding;	// IMP=0x006000000017d2eb
+ (id)sharedKeyDictionaryWithKeySet:(id)arg1;	// IMP=0x006000000017bb91
- (void)setObservationInfo:(void *)arg1;	// IMP=0x000000000017d2f1
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000017c051
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000017bd8a
- (Class)classForCoder;	// IMP=0x000000000017bd7e
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017bd71
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017bca1
- (void)dealloc;	// IMP=0x000000000017bbc0
- (id)initWithKeySet:(id)arg1;	// IMP=0x000000000017ba90
- (id)keySet;	// IMP=0x000000000017ba84
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000017b973
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000017b80e
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000017b526
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000017b2ba
- (id)keyEnumerator;	// IMP=0x000000000017b109
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000017af8f
- (id)objectForKey:(id)arg1;	// IMP=0x000000000017af16
- (unsigned long long)count;	// IMP=0x000000000017aeda

@end
