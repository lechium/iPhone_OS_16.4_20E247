//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SQLitePredicate : NSObject
{
}

- (_Bool)isEqual:(id)arg1;	// IMP=0x00400000001a562e
- (unsigned long long)hash;	// IMP=0x00100000001a5614
- (id)SQLJoinClausesForEntityClass:(Class)arg1;	// IMP=0x00100000001a560c
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x00100000001a5604
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;	// IMP=0x00100000001a55fe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001a55f3

@end

