//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class NSPredicate;

@interface FilterEnumerator : NSEnumerator
{
    NSEnumerator *_enumerator;	// 8 = 0x8
    NSPredicate *_predicate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000269667
- (id)nextObject;	// IMP=0x00100000002695e8

@end

