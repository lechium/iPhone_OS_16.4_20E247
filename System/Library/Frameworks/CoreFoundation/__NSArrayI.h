//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSArray.h"

__attribute__((visibility("hidden")))
@interface __NSArrayI : NSArray
{
    struct {
        unsigned long long used;
        id list[0];
    } storage;	// 8 = 0x8
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00600000001486e6
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0060000000148398
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001488a2
- (id)mutableCopy;	// IMP=0x0000000000148889
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000148884
- (id)copy;	// IMP=0x000000000014887f
- (void)dealloc;	// IMP=0x00000000001487ef
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x0000000000148689
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001483fa
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000014839b
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000148283
- (id)nothingAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000148280
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000148258
- (unsigned long long)count;	// IMP=0x000000000014824c

@end
