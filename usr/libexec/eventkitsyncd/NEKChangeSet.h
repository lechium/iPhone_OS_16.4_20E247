//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface NEKChangeSet : NSObject
{
    _Bool _truncated;	// 8 = 0x8
    NSArray *_inserts;	// 16 = 0x10
    NSArray *_updates;	// 24 = 0x18
    NSArray *_deletes;	// 32 = 0x20
    NSDictionary *_deletionMap;	// 40 = 0x28
    NSDictionary *_moveMap;	// 48 = 0x30
    long long _changeNumber;	// 56 = 0x38
    CDUnknownBlockType _completion;	// 64 = 0x40
}

+ (id)changeSetForReminder;	// IMP=0x004000000004b7ff
+ (id)changeSetForEvent;	// IMP=0x001000000004b7e6
- (void).cxx_destruct;	// IMP=0x002000000004baa4
@property(nonatomic) _Bool truncated; // @synthesize truncated=_truncated;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) long long changeNumber; // @synthesize changeNumber=_changeNumber;
@property(retain, nonatomic) NSDictionary *moveMap; // @synthesize moveMap=_moveMap;
@property(retain, nonatomic) NSDictionary *deletionMap; // @synthesize deletionMap=_deletionMap;
@property(copy, nonatomic) NSArray *deletes; // @synthesize deletes=_deletes;
@property(copy, nonatomic) NSArray *updates; // @synthesize updates=_updates;
@property(copy, nonatomic) NSArray *inserts; // @synthesize inserts=_inserts;
- (void)enumerateForChangeType:(int)arg1 forEntitiesOfClass:(Class)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000004b9de
- (id)description;	// IMP=0x001000000004b8e0
@property(readonly, nonatomic) _Bool isDeferrable;
@property(readonly, nonatomic) _Bool isEmpty;

@end
